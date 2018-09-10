#include "tinyfiledialogs.h"
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
#include <libgen.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

bool is_number(string input)
{
    if (input[0] == '0' || input[0] == '1' || input[0] == '2' || input[0] == '3' || input[0] == '4' ||
        input[0] == '5' || input[0] == '6' || input[0] == '7' || input[0] == '8' || input[0] == '9')
        return true;

    if (input[0] == '+' &&
        (input[1] == '0' || input[1] == '1' || input[1] == '2' || input[1] == '3' || input[1] == '4' ||
        input[1] == '5' || input[1] == '6' || input[1] == '7' || input[1] == '8' || input[1] == '9'))
        return true;

    if (input[0] == '-' &&
        (input[1] == '0' || input[1] == '1' || input[1] == '2' || input[1] == '3' || input[1] == '4' ||
        input[1] == '5' || input[1] == '6' || input[1] == '7' || input[1] == '8' || input[1] == '9'))
        return true;

    return false;
}

class FileFilter
{
    std::string filter_buf;
    std::vector<const char*> descriptions_;
    std::vector<std::vector<const char*>> patterns_;
    std::vector<const char* const*> cpatterns_;
    std::vector<int> pattern_counts_;
    
public:
    FileFilter(const std::string &filter): filter_buf(filter + "|") {
        if (!filter.empty())
        {
            size_t start = 0;
            std::vector<const char*> *curfilter = nullptr;
            for (size_t i = 0; i < filter_buf.length(); ++i)
            {
                if (filter_buf[i] == '|')
                {
                    filter_buf[i] = 0;
                    if (curfilter)
                    {
                        curfilter->push_back(filter_buf.c_str() + start);
                        curfilter = nullptr;
                    }
                    else
                    {
                        descriptions_.push_back(filter_buf.c_str() + start);
                        patterns_.push_back({});
                        curfilter = &patterns_.back();
                    }
                    start = i + 1;
                }
                else if (curfilter && filter_buf[i] == ';')
                {
                    filter_buf[i] = 0;
                    curfilter->push_back(filter_buf.c_str() + start);
                    start = i + 1;
                }
            }
            if (descriptions_.size() > patterns_.size())
            {
                descriptions_.pop_back();
            }
        }
        pattern_counts_.reserve(descriptions_.size());
        for (auto &pv : patterns_)
        {
            pattern_counts_.push_back(pv.size());
            pv.push_back(nullptr);
            cpatterns_.push_back(pv.data());
        }
        cpatterns_.push_back(nullptr);
        descriptions_.push_back(nullptr);
    }
    
    size_t count() const { return patterns_.size(); }
    const char* const* descriptions() { return descriptions_.data(); }
    const char* const* const* patterns() { return cpatterns_.data(); }
    const int* pattern_counts() { return pattern_counts_.data(); }
};

string string_replace_all(string str, string substr, string newstr)
{
    size_t pos = 0;
    const size_t sublen = substr.length(), newlen = newstr.length();

    while ((pos = str.find(substr, pos)) != string::npos)
    {
        str.replace(pos, sublen, newstr);
        pos += newlen;
    }

    return str;
}

char result[PATH_MAX + 1];
string window_caption;

extern "C"
{
    char *window_get_caption(void *window)
    {
        const char *cocoa_window_get_caption(void *window_handle);
        
        window_caption = cocoa_window_get_caption(window);
        
        return (char *)window_caption.c_str();
    }

    double show_message(char *str)
    {
        const char *caption = window_caption.c_str();
        
        string str_msg = str;
        string str_caption = caption;

        if (str_caption == "")
            str_caption = " ";

        if (str_msg == "")
            str_msg = " ";
        
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        tinyfd_messageBox(str_caption.c_str(), str_msg.c_str(), "ok", "info", 1);

        return 1;
    }

    double show_question(char *str)
    {
        const char *caption = window_caption.c_str();
        
        string str_msg = str;
        string str_caption = caption;

        if (str_caption == "")
            str_caption = " ";

        if (str_msg == "")
            str_msg = " ";

        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        return tinyfd_messageBox(str_caption.c_str(), str_msg.c_str(), "yesno", "question", 1);
    }

    double show_error(char *str, double abort)
    {
        string str_msg = str;

        if (str_msg == "")
            str_msg = " ";

        if (abort == 0)
        {
            if (str_msg != " ")
                str_msg += "\n\n";

            str_msg += "Do you want to abort the application?";
            str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");

            double input = tinyfd_messageBox("Error", str_msg.c_str(), "yesno", "error", 1);

            if (input == 1)
                return 1;
        }
        else
        {
            if (str_msg != " ")
                str_msg += "\n\n";

            str_msg += "Click 'OK' to abort the application.";
            str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");

            tinyfd_messageBox("Error", str_msg.c_str(), "ok", "error", 1);

            return 1;
        }

        return 0;
    }

    char *get_string(char *str, char *def)
    {
        const char *caption = window_caption.c_str();
        
        string str_msg = str;
        string str_def = def;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_def = string_replace_all(str_def, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        if (str_caption == "")
            str_caption = " ";

        if (str_msg == "")
            str_msg = " ";

        const char *input = tinyfd_inputBox(str_caption.c_str(), str_msg.c_str(), str_def.c_str());

        if (input == NULL)
            input = "";

        strncpy(result, input, PATH_MAX + 1);

        return result;
    }

    char *get_password(char *str, char *def)
    {
        const char *caption = window_caption.c_str();
        
        string str_msg = str;
        string str_def = def;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_def = string_replace_all(str_def, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        if (str_caption == "")
            str_caption = " ";

        if (str_msg == "")
            str_msg = " ";

        const char *input = tinyfd_passwordBox(str_caption.c_str(), str_msg.c_str(), str_def.c_str());

        if (input == NULL)
            input = "";

        strncpy(result, input, PATH_MAX + 1);

        return result;
    }

    double get_integer(char *str, double def)
    {
        const char *caption = window_caption.c_str();
        
        string str_msg = str;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        if (str_caption == "")
            str_caption = " ";
        
        if (str_msg == "")
            str_msg = " ";

        std::ostringstream def_integer;
        def_integer << def;
        string integer = def_integer.str();

        const char *input = tinyfd_inputBox(str_caption.c_str(), str_msg.c_str(), integer.c_str());

        if (input == NULL)
            input = "";

        if (is_number(input) == false)
            input = "0";

        strncpy(result, input, PATH_MAX + 1);

        std::istringstream text(result);
        double res_integer;
        text >> res_integer;

        return res_integer;
    }

    double get_passcode(char *str, double def)
    {
        const char *caption = window_caption.c_str();
        
        string str_msg = str;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        if (str_caption == "")
            str_caption = " ";
        
        if (str_msg == "")
            str_msg = " ";

        std::ostringstream def_integer;
        def_integer << def;
        string integer = def_integer.str();

        const char *input = tinyfd_passwordBox(str_caption.c_str(), str_msg.c_str(), integer.c_str());

        if (input == NULL)
            input = "";

        if (is_number(input) == false)
            input = "0";

        strncpy(result, input, PATH_MAX + 1);

        std::istringstream text(result);
        double res_integer;
        text >> res_integer;

        return res_integer;
    }

    char *get_open_filename(char *filter, char *fname)
    {
        string str_fname = fname;
        string str_filter = filter;
        str_fname = string_replace_all(str_fname, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");
        string str_filter2 = string_replace_all(str_filter, "*.", "");
        size_t first_line_pos = str_filter2.find("|");

        if (first_line_pos != string::npos)
        {
            size_t first_star_pos = str_filter2.find("*", first_line_pos + 1);
            
            if (first_star_pos != string::npos)
            {
                size_t second_line_pos = str_filter2.find("|", first_line_pos + 1);
                
                if (second_line_pos != string::npos)
                {
                    if (first_line_pos < first_star_pos && first_star_pos < second_line_pos)
                        str_filter = "";
                }
                else
                {
                    if (first_line_pos < first_star_pos)
                        str_filter = "";
                }
            }
        }

        FileFilter ff(str_filter.c_str());
        
        const char *path = tinyfd_openFileDialog("Open", str_fname.c_str(),
            ff.count() ? *ff.pattern_counts() : 0, *ff.patterns(), str_filter.c_str(), 0);

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX + 1);

        return result;
    }

    char *get_save_filename(char *filter, char *fname)
    {
        string str_fname = fname;
        string str_filter = filter;
        str_fname = string_replace_all(str_fname, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");
        string str_filter2 = string_replace_all(str_filter, "*.", "");
        size_t first_line_pos = str_filter2.find("|");
        
        if (first_line_pos != string::npos)
        {
            size_t first_star_pos = str_filter2.find("*", first_line_pos + 1);
            
            if (first_star_pos != string::npos)
            {
                size_t second_line_pos = str_filter2.find("|", first_line_pos + 1);
                
                if (second_line_pos != string::npos)
                {
                    if (first_line_pos < first_star_pos && first_star_pos < second_line_pos)
                        str_filter = "";
                }
                else
                {
                    if (first_line_pos < first_star_pos)
                        str_filter = "";
                }
            }
        }
        
        FileFilter ff(str_filter.c_str());
        
        const char *path = tinyfd_saveFileDialog("Save As", str_fname.c_str(),
            ff.count() ? *ff.pattern_counts() : 0, *ff.patterns(), str_filter.c_str());

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX + 1);

        return result;
    }

    char *get_open_filename_ext(char *filter, char *fname, char *dir, char *title)
    {
        string str_fname_or_dir;
        string str_titlebar = title;
        string str_filter = filter;
        str_fname_or_dir = string_replace_all(str_fname_or_dir, "\"", "\\\\\\\"");
        str_titlebar = string_replace_all(str_titlebar, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");
        string str_filter2 = string_replace_all(str_filter, "*.", "");
        size_t first_line_pos = str_filter2.find("|");
        
        if (first_line_pos != string::npos)
        {
            size_t first_star_pos = str_filter2.find("*", first_line_pos + 1);
            
            if (first_star_pos != string::npos)
            {
                size_t second_line_pos = str_filter2.find("|", first_line_pos + 1);
                
                if (second_line_pos != string::npos)
                {
                    if (first_line_pos < first_star_pos && first_star_pos < second_line_pos)
                        str_filter = "";
                }
                else
                {
                    if (first_line_pos < first_star_pos)
                        str_filter = "";
                }
            }
        }
        
        FileFilter ff(str_filter.c_str());
        
        string str_fname = fname;
        string str_dir;
        
        char *cstr_fname = (char *)str_fname.c_str();
        
        if (str_fname == "")
            str_dir = dir;
        else
            str_dir = string(dir) + string("/") + string(basename(cstr_fname));

        if(access((char *)str_dir.c_str(), F_OK) != -1)
            str_fname_or_dir = (char *)str_dir.c_str();
        else
            str_fname_or_dir = fname;

        if (str_titlebar == "")
            str_titlebar = "Open";
        
        const char *path = tinyfd_openFileDialog(str_titlebar.c_str(), str_fname_or_dir.c_str(),
            ff.count() ? *ff.pattern_counts() : 0, *ff.patterns(), str_filter.c_str(), 0);

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX + 1);

        return result;
    }

    char *get_save_filename_ext(char *filter, char *fname, char *dir, char *title)
    {
        string str_fname_or_dir;
        string str_titlebar = title;
        string str_filter = filter;
        str_fname_or_dir = string_replace_all(str_fname_or_dir, "\"", "\\\\\\\"");
        str_titlebar = string_replace_all(str_titlebar, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");
        string str_filter2 = string_replace_all(str_filter, "*.", "");
        size_t first_line_pos = str_filter2.find("|");
        
        if (first_line_pos != string::npos)
        {
            size_t first_star_pos = str_filter2.find("*", first_line_pos + 1);
            
            if (first_star_pos != string::npos)
            {
                size_t second_line_pos = str_filter2.find("|", first_line_pos + 1);
                
                if (second_line_pos != string::npos)
                {
                    if (first_line_pos < first_star_pos && first_star_pos < second_line_pos)
                        str_filter = "";
                }
                else
                {
                    if (first_line_pos < first_star_pos)
                        str_filter = "";
                }
            }
        }
        
        FileFilter ff(str_filter.c_str());
        
        string str_fname = fname;
        string str_dir;
        
        char *cstr_fname = (char *)str_fname.c_str();
        
        if (str_fname == "")
            str_dir = dir;
        else
            str_dir = string(dir) + string("/") + string(basename(cstr_fname));
        
        if(access((char *)str_dir.c_str(), F_OK) != -1)
            str_fname_or_dir = (char *)str_dir.c_str();
        else
            str_fname_or_dir = fname;
        
        if (str_titlebar == "")
            str_titlebar = "Save As";
        
        const char *path = tinyfd_saveFileDialog(str_titlebar.c_str(), str_fname_or_dir.c_str(),
            ff.count() ? *ff.pattern_counts() : 0, *ff.patterns(), str_filter.c_str());

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX + 1);

        return result;
    }

    char *get_directory(char *dname)
    {
        string str_dname = dname;
        str_dname = string_replace_all(str_dname, "\"", "\\\\\\\"");

        const char *path = tinyfd_selectFolderDialog("Select Directory", str_dname.c_str());

        bool ok_pressed = true;

        if (path == NULL)
            ok_pressed = false;

        static string str_result;

        if (ok_pressed == true)
        {
            char cstr_path[PATH_MAX + 1];
            strncpy(cstr_path, path, PATH_MAX + 1);

            const char *slash = "/";
            strncat(cstr_path, slash, PATH_MAX + 1);

            str_result = string_replace_all(cstr_path, "//", "/");
        }
        else
            str_result = "";

        return (char *)str_result.c_str();
    }

    char *get_directory_alt(char *capt, char *root)
    {
        string str_root = root;
        string str_titlebar = capt;
        str_root = string_replace_all(str_root, "\"", "\\\\\\\"");
        str_titlebar = string_replace_all(str_titlebar, "\"", "\\\\\\\"");

        if (str_titlebar == "")
            str_titlebar = "Browse For Folder";

        const char *path = tinyfd_selectFolderDialog(str_titlebar.c_str(), str_root.c_str());

        bool ok_pressed = true;

        if (path == NULL)
            ok_pressed = false;

        static string str_result;

        if (ok_pressed == true)
        {
            char cstr_path[PATH_MAX + 1];
            strncpy(cstr_path, path, PATH_MAX + 1);

            const char *slash = "/";
            strncat(cstr_path, slash, PATH_MAX + 1);

            str_result = string_replace_all(cstr_path, "//", "/");
        }
        else
            str_result = "";

        return (char *)str_result.c_str();
    }

    double get_color(double defcol)
    {
        unsigned char rescol[3];

        rescol[0] = (int)defcol & 0xFF;
        rescol[1] = ((int)defcol >> 8) & 0xFF;
        rescol[2] = ((int)defcol >> 16) & 0xFF;

        if (tinyfd_colorChooser("Color", NULL, rescol, rescol) == NULL)
            return -1;

        return (int)((rescol[0] & 0xff) + ((rescol[1] & 0xff) << 8) + ((rescol[2] & 0xff) << 16));
    }
}
