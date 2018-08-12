#include "tinyfiledialogs.h"
#include <sys/stat.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>
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

char result[PATH_MAX];
string window_caption;

extern "C"
{
    const char *cocoa_window_get_caption(void *window_handle);
    
    char *window_get_caption(void *window)
    {
        window_caption = cocoa_window_get_caption(window);
        
        return (char *)window_caption.c_str();
    }

    double show_message(char *str)
    {
        const char *caption = window_caption.c_str();

        if (caption == NULL)
            caption = " ";

        const char *msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        string str_msg = msg;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        tinyfd_messageBox(str_caption.c_str(), str_msg.c_str(), "ok", "info", 1);

        return 1;
    }

    double show_question(char *str)
    {
        const char *caption = window_caption.c_str();

        if (caption == NULL)
            caption = " ";

        const char *msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        string str_msg = msg;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        return tinyfd_messageBox(str_caption.c_str(), str_msg.c_str(), "yesno", "question", 1);
    }

    double show_error(char *str, double abort)
    {
        string msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        if (abort == 0)
        {
            if (msg != " ")
                msg = msg + "\n\n";

            msg = msg + "Do you want to abort the application?";

            string str_msg = msg;
            str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");

            double input = tinyfd_messageBox("Error", str_msg.c_str(), "yesno", "error", 1);

            if (input == 1)
                return 1;
        }
        else
        {
            if (msg != " ")
                msg = msg + "\n\n";

            msg = msg + "Click 'OK' to abort the application.";

            string str_msg = msg;
            str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");

            tinyfd_messageBox("Error", str_msg.c_str(), "ok", "error", 1);

            return 1;
        }

        return 0;
    }

    char *get_string(char *str, char *def)
    {
        const char *caption = window_caption.c_str();

        if (caption == NULL)
            caption = " ";

        const char *msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        string str_msg = msg;
        string str_def = def;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_def = string_replace_all(str_def, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        const char *input = tinyfd_inputBox(str_caption.c_str(), str_msg.c_str(), str_def.c_str());

        if (input == NULL)
            input = "";

        strncpy(result, input, PATH_MAX);

        return result;
    }

    char *get_password(char *str, char *def)
    {
        const char *caption = window_caption.c_str();

        if (caption == NULL)
            caption = " ";

        const char *msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        string str_msg = msg;
        string str_def = def;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_def = string_replace_all(str_def, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        const char *input = tinyfd_passwordBox(str_caption.c_str(), str_msg.c_str(), str_def.c_str());

        if (input == NULL)
            input = "";

        strncpy(result, input, PATH_MAX);

        return result;
    }

    double get_integer(char *str, double def)
    {
        const char *caption = window_caption.c_str();

        if (caption == NULL)
            caption = " ";

        std::ostringstream def_integer;
        def_integer << def;
        string integer = def_integer.str();

        const char *msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        string str_msg = msg;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        const char *input = tinyfd_inputBox(str_caption.c_str(), str_msg.c_str(), integer.c_str());

        if (input == NULL)
            input = "";

        if (is_number(input) == false)
            input = "0";

        strncpy(result, input, PATH_MAX);

        std::istringstream text(result);
        double res_integer;
        text >> res_integer;

        return res_integer;
    }

    double get_passcode(char *str, double def)
    {
        const char *caption = window_caption.c_str();

        if (caption == NULL)
            caption = " ";

        std::ostringstream def_integer;
        def_integer << def;
        string integer = def_integer.str();

        const char *msg;

        if (str == NULL)
            msg = " ";
        else
            msg = str;

        string str_msg = msg;
        string str_caption = caption;
        str_msg = string_replace_all(str_msg, "\"", "\\\\\\\"");
        str_caption = string_replace_all(str_caption, "\"", "\\\\\\\"");

        const char *input = tinyfd_passwordBox(str_caption.c_str(), str_msg.c_str(), integer.c_str());

        if (input == NULL)
            input = "";

        if (is_number(input) == false)
            input = "0";

        strncpy(result, input, PATH_MAX);

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

        const char *path = tinyfd_openFileDialog("Open", str_fname.c_str(), 0, 0, (char *)str_filter.c_str(), 0);

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX);

        return result;
    }

    char *get_save_filename(char *filter, char *fname)
    {
        string str_fname = fname;
        string str_filter = filter;
        str_fname = string_replace_all(str_fname, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");

        const char *path = tinyfd_saveFileDialog("Save As", str_fname.c_str(), 0, 0, (char *)str_filter.c_str());

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX);

        return result;
    }

    char *get_open_filename_ext(char *filter, char *fname, char *dir, char *title)
    {
        const char *fname_or_dir;

        if(access(fname, F_OK) != -1)
            fname_or_dir = fname;
        else
            fname_or_dir = dir;

        struct stat sb;

        if ((stat(dir, &sb) == 0 && S_ISDIR(sb.st_mode)) == 0)
            fname_or_dir = "";

        const char *titlebar;

        if (title == NULL)
            titlebar = "Open";
        else
            titlebar = title;

        string str_fname_or_dir = fname_or_dir;
        string str_titlebar = titlebar;
        string str_filter = filter;
        str_fname_or_dir = string_replace_all(str_fname_or_dir, "\"", "\\\\\\\"");
        str_titlebar = string_replace_all(str_titlebar, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");

        const char *path = tinyfd_openFileDialog(str_titlebar.c_str(), str_fname_or_dir.c_str(), 0, 0, (char *)str_filter.c_str(), 0);

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX);

        return result;
    }

    char *get_save_filename_ext(char *filter, char *fname, char *dir, char *title)
    {
        const char *fname_or_dir;

        if(access(fname, F_OK) != -1)
            fname_or_dir = fname;
        else
            fname_or_dir = dir;

        struct stat sb;

        if ((stat(dir, &sb) == 0 && S_ISDIR(sb.st_mode)) == 0)
            fname_or_dir = "";

        const char *titlebar;

        if (title == NULL)
            titlebar = "Save As";
        else
            titlebar = title;

        string str_fname_or_dir = fname_or_dir;
        string str_titlebar = titlebar;
        string str_filter = filter;
        str_fname_or_dir = string_replace_all(str_fname_or_dir, "\"", "\\\\\\\"");
        str_titlebar = string_replace_all(str_titlebar, "\"", "\\\\\\\"");
        str_filter = string_replace_all(str_filter, "\"", "\\\\\\\"");

        const char *path = tinyfd_saveFileDialog(str_titlebar.c_str(), str_fname_or_dir.c_str(), 0, 0, (char *)str_filter.c_str());

        if (path == NULL)
            path = "";

        strncpy(result, path, PATH_MAX);

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
            char cstr_path[PATH_MAX];
            strncpy(cstr_path, path, PATH_MAX);

            const char *slash = "/";
            strncat(cstr_path, slash, PATH_MAX);

            str_result = string_replace_all(cstr_path, "//", "/");
        }
        else
            str_result = "";

        return (char *)str_result.c_str();
    }

    char *get_directory_alt(char *capt, char *root)
    {
        const char *titlebar;

        if (capt == NULL)
            titlebar = "Browse For Folder";
        else
            titlebar = capt;

        string str_root = root;
        string str_titlebar = titlebar;
        str_root = string_replace_all(str_root, "\"", "\\\\\\\"");
        str_titlebar = string_replace_all(str_titlebar, "\"", "\\\\\\\"");

        const char *path = tinyfd_selectFolderDialog(str_titlebar.c_str(), str_root.c_str());

        bool ok_pressed = true;

        if (path == NULL)
            ok_pressed = false;

        static string str_result;

        if (ok_pressed == true)
        {
            char cstr_path[PATH_MAX];
            strncpy(cstr_path, path, PATH_MAX);

            const char *slash = "/";
            strncat(cstr_path, slash, PATH_MAX);

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
