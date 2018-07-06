# Dialog Module
A simple, easy-to-use, cross-platform, dialog API shared library, inspired by the GameMaker Language dialog functions.

----------------------------------------------------------------------------------------------------------------------------

# Win32


Open "DialogModule.sln" with any edition of Microsoft Visual Studio 2017 or later.

You may optionally register the DLL, so that its functions may be accessible from VBScript and JScript.

To register the DLL, enter this command into command prompt:

regsvr32 "C:\Path\To\DialogModule.dll"

To unregister the DLL, enter this command into command prompt:

regsvr32 /u "C:\Path\To\DialogModule.dll"

After registering the DLL, you must not move it to a new location, to ensure the file stays registered.

----------------------------------------------------------------------------------------------------------------------------

# Linux


Open "DialogModule.cbp" with Code::Blocks and build with the GNU GCC Compiler.

The Linux apps that use this extension need zenity installed.

To install zenity on Debian-based Linux distributions, enter this command into the terminal:

sudo apt-get install zenity

The Linux library's source code needs libx11-dev installed.

To install libx11-dev on Debian-based Linux distributions, enter this command into the terminal:

sudo apt-get install libx11-dev

----------------------------------------------------------------------------------------------------------------------------

# Documentation


double show_message(char * str) This function creates a pop-up message box which displays the string defined in the code and a button marked "Ok" to close it.

double show_question(char * str) This function creates a pop-up message box with two buttons for "Yes" and "No". It returns true or false depending on which one of the two buttons the user presses.

double show_error(char * str, double abort) This function will show a custom string as an error message and give the option to abort the game afterwards if necessary. abort specifies whether to force the game to close or give the player an option.

char * get_string(char * str, char * def) This creates a pop-up window showing a standard message, with a button labeled "Ok", that prompts the user to input a string. The function will return the input string, or the default value if nothing has been entered. If the user presses "Cancel" an empty string "" is returned.

char * get_password(char * str, char * def) This creates a pop-up window showing a standard message, with a button labeled "Ok", that prompts the user to input a string. The function will return the input string, or the default value if nothing has been entered. If the user presses "Cancel" an empty string "" is returned. All characters in the text field are hidden from the player, in the form of either black circles or asterisks, depending on the target platform.

double get_integer(char * str, double def) This creates a pop-up window showing a custom message, with a button labeled "Ok", and prompts the user to input an integer value. The function will return the typed in integer, or the default value if nothing has been entered. If the user presses "Cancel" the value 0 is returned.

double get_passcode(char * str, double def) This creates a pop-up window showing a custom message, with a button labeled "Ok", and prompts the user to input an integer value. The function will return the typed in integer, or the default value if nothing has been entered. If the user presses "Cancel" the value 0 is returned. All characters in the text field are hidden from the player, in the form of either black circles or asterisks, depending on the target platform.

char * get_open_filename(char * filter, char * fname) This function opens a dialogue and asks the player for a filename to open with the given filter. The filter has the form "name1|mask1|name2|mask2|...", where the mask may contain the different options with a semicolon between them and you can also use a "" to mean any string. For example: "bitmaps|.bmp;.wmf", would ask the user to select the name of a bitmap file from the system, but only those that have the two specified extensions (bmp and png). this function does not open the file itself! It only returns a string with the full name and path of the file. If the user presses "Cancel" an empty string "" is returned.

char * get_open_filename_ext(char * filter, char * fname, char * dir, char * title) This function opens a dialogue and asks the player for a filename to open with the given filter. The filter has the form "name1|mask1|name2|mask2|...", where the mask may contain the different options with a semicolon between them and you can also use a "" to mean any string. For example: "bitmaps|.bmp;.wmf", would ask the user to select the name of a bitmap file from the system, but only those that have the two specified extensions (bmp and png). this function does not open the file itself! It only returns a string with the full name and path of the file. If the user presses "Cancel" an empty string "" is returned. You may also add in a directory to start the search from, and a caption to be shown at the top of the window instead of the default one.

char * get_save_filename(char * filter, char * fname) This function opens a dialogue and asks the player for a filename to save to with the given filter. The filter has the form "name1|mask1|name2|mask2|...", where the mask may contain the different options with a semicolon between them and you can also use a "" to mean any string. For example: "bitmaps|.bmp;.wmf", would ask the user to select the name of a bitmap file from the system, but only those that have the two specified extensions (bmp and png). this function does not save the file itself! It only returns a string with the full name and path of the file. If the user presses "Cancel" an empty string "" is returned.

char * get_save_filename_ext(char * filter, char * fname, char * dir, char * title) This function opens a dialogue and asks the player for a filename to save to with the given filter. The filter has the form "name1|mask1|name2|mask2|...", where the mask may contain the different options with a semicolon between them and you can also use a "" to mean any string. For example: "bitmaps|.bmp;.wmf", would ask the user to select the name of a bitmap file from the system, but only those that have the two specified extensions (bmp and png). this function does not save the file itself! It only returns a string with the full name and path of the file. If the user presses "Cancel" an empty string "" is returned. You may also add in a directory to start the search from, and a caption to be shown at the top of the window instead of the default one.

char * get_directory(char * dname) This function opens a dialogue and asks the player for a directory. dname is the default name. If the user presses "Cancel" an empty string "" is returned.

char * get_directory_alt(char * capt, char * root) This function opens a dialogue and is an alternative way to ask the player for a directory. capt is the caption to be shown. root is the root of the directory tree to be shown. Use an empty string to show the whole tree. If the user presses "Cancel" an empty string "" is returned.

double get_color(double defcol) This function opens a dialogue and asks the player for a color. defcol is the default color. If the user presses "Cancel" the value -1 is returned.
