/*_________
 /         \ tinyfiledialogs.h v3.3.4 [Mar 15, 2018] zlib licence
 |tiny file| Unique header file created [November 9, 2014]
 | dialogs | Copyright (c) 2014 - 2018 Guillaume Vareille http://ysengrin.com
 \____  ___/ http://tinyfiledialogs.sourceforge.net
      \|     git clone http://git.code.sf.net/p/tinyfiledialogs/code tinyfd
		 ____________________________________________
		|                                            |
		|   email: tinyfiledialogs at ysengrin.com   |
		|____________________________________________|
         ________________________________________________________________________
        |                                                                        |
        | the windows only wchar_t UTF-16 prototypes are at the end of this file |
        |________________________________________________________________________|

Please upvote my stackoverflow answer https://stackoverflow.com/a/47651444

tiny file dialogs (cross-platform C C++)
InputBox PasswordBox MessageBox ColorPicker
OpenFileDialog SaveFileDialog SelectFolderDialog
Native dialog library for WINDOWS MAC OSX GTK+ QT CONSOLE & more
SSH supported via automatic switch to console mode or X11 forwarding

a C file and a header (add them to your C or C++ project) with 8 functions:
- beep
- notify popup
- message & question
- input & password
- save file
- open file(s)
- select folder
- color picker

Complements OpenGL Vulkan GLFW GLUT GLUI VTK SFML TGUI
SDL Ogre Unity3d ION OpenCV CEGUI MathGL GLM CPW GLOW
IMGUI MyGUI GLT NGL STB & GUI less programs

NO INIT
NO MAIN LOOP
NO LINKING
NO INCLUDE

The dialogs can be forced into console mode

Windows (XP to 10) ASCII MBCS UTF-8 UTF-16
- native code & vbs create the graphic dialogs
- enhanced console mode can use dialog.exe from
http://andrear.altervista.org/home/cdialog.php
- basic console input

Unix (command line calls) ASCII UTF-8
- applescript, kdialog, zenity
- python (2 or 3) + tkinter + python-dbus (optional)
- dialog (opens a console if needed)
- basic console input
The same executable can run across desktops & distributions

C89 & C++98 compliant: tested with C & C++ compilers
VisualStudio MinGW-gcc GCC Clang TinyCC OpenWatcom-v2 BorlandC SunCC ZapCC
on Windows Mac Linux Bsd Solaris Minix Raspbian
using Gnome Kde Enlightenment Mate Cinnamon Unity Lxde Lxqt Xfce
WindowMaker IceWm Cde Jds OpenBox Awesome Jwm Xdm

Bindings for LUA and C# dll, Haskell
Included in LWJGL(java), Rust, Allegrobasic

- License -

This software is provided 'as-is', without any express or implied
warranty.  In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software.  If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.
2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.
3. This notice may not be removed or altered from any source distribution.
*/

// THIS IS NOT THE ORIGINAL SOFTWARE; UNUSED CODE HAS BEEN REMOVED AND THE CONTENTS REMAINING HAVE BEEN MODIFIED.

#ifndef TINYFILEDIALOGS_H
#define TINYFILEDIALOGS_H

/* #define TINYFD_NOLIB */
/* On windows, define TINYFD_NOLIB here
if you don't want to include the code creating the graphic dialogs.
Then you won't need to link against Comdlg32.lib and Ole32.lib */

/* if tinydialogs.c is compiled as C++ code rather than C code,
you may need to comment out:
extern "C" {
and the corresponding closing bracket near the end of this file:
}
*/

#ifdef	__cplusplus
extern "C" {
#endif

extern char const tinyfd_version[8]; /* contains tinyfd current version number */
extern char const tinyfd_needs[]; /* info about requirements */
extern int tinyfd_verbose; /* 0 (default) or 1 : on unix, prints the command line calls */

extern int tinyfd_forceConsole;  /* 0 (default) or 1 */
/* for unix & windows: 0 (graphic mode) or 1 (console mode).
0: try to use a graphic solution, if it fails then it uses console mode.
1: forces all dialogs into console mode even when an X server is present,
  if the package dialog (and a console is present) or dialog.exe is installed.
  on windows it only make sense for console applications */

extern char tinyfd_response[1024];
/* if you pass "tinyfd_query" as aTitle,
the functions will not display the dialogs
but will return 0 for console mode, 1 for graphic mode.
tinyfd_response is then filled with the retain solution.
possible values for tinyfd_response are (all lowercase)
for graphic mode:
  windows_wchar windows
  applescript kdialog zenity zenity3 matedialog qarma
  python2-tkinter python3-tkinter python-dbus perl-dbus
  gxmessage gmessage xmessage xdialog gdialog
for console mode:
  dialog whiptail basicinput no_solution */

int tinyfd_messageBox(
	char const * const aTitle , /* NULL or "" */
	char const * const aMessage , /* NULL or "" may contain \n \t */
	char const * const aDialogType , /* "ok" "okcancel" "yesno" "yesnocancel" */
	char const * const aIconType , /* "info" "warning" "error" "question" */
	int const aDefaultButton ) ;
		/* 0 for cancel/no , 1 for ok/yes , 2 for no in yesnocancel */

char const * tinyfd_inputBox(
	char const * const aTitle , /* NULL or "" */
	char const * const aMessage , /* NULL or "" may NOT contain \n \t on windows */
	char const * const aDefaultInput ) ;  /* NULL or "" */
		/* returns NULL on cancel */

char const * tinyfd_passwordBox(
    char const * const aTitle , /* NULL or "" */
    char const * const aMessage , /* NULL or "" may NOT contain \n nor \t */
    char const * const aDefaultInput ) ; /* NULL or "" */
        /* returns NULL on cancel */

char const * tinyfd_saveFileDialog(
	char const * const aTitle , /* NULL or "" */
	char const * const aDefaultPathAndFile , /* NULL or "" */
	int const aNumOfFilterPatterns , /* 0 */
	char const * const * const aFilterPatterns , /* NULL | {"*.jpg","*.png"} */
	char const * const aSingleFilterDescription ) ; /* NULL | "text files" */
		/* returns NULL on cancel */

char const * tinyfd_openFileDialog(
	char const * const aTitle , /* NULL or "" */
	char const * const aDefaultPathAndFile , /* NULL or "" */
	int const aNumOfFilterPatterns , /* 0 */
	char const * const * const aFilterPatterns , /* NULL {"*.jpg","*.png"} */
	char const * const aSingleFilterDescription , /* NULL | "image files" */
	int const aAllowMultipleSelects ) ; /* 0 or 1 */
		/* in case of multiple files, the separator is | */
		/* returns NULL on cancel */

char const * tinyfd_selectFolderDialog(
	char const * const aTitle , /* NULL or "" */
	char const * const aDefaultPath ) ; /* NULL or "" */
		/* returns NULL on cancel */

char const * tinyfd_colorChooser(
	char const * const aTitle , /* NULL or "" */
	char const * const aDefaultHexRGB , /* NULL or "#FF0000" */
	unsigned char const aDefaultRGB[3] , /* { 0 , 255 , 255 } */
	unsigned char aoResultRGB[3] ) ; /* { 0 , 0 , 0 } */
		/* returns the hexcolor as a string "#FF0000" */
		/* aoResultRGB also contains the result */
		/* aDefaultRGB is used only if aDefaultHexRGB is NULL */
		/* aDefaultRGB and aoResultRGB can be the same array */
		/* returns NULL on cancel */

#ifdef	__cplusplus
}
#endif

#endif /* TINYFILEDIALOGS_H */

/*
- This is not for android nor ios.
- The code is pure C, perfectly compatible with C++.
- the windows only wchar_t (utf-16) prototypes are in the header file
- windows is fully supported from XP to 10 (maybe even older versions)
- C# & LUA via dll, see example files
- OSX supported from 10.4 to latest (maybe even older versions)
- Avoid using " and ' in titles and messages.
- There's one file filter only, it may contain several patterns.
- If no filter description is provided,
  the list of patterns will become the description.
- char const * filterPatterns[3] = { "*.obj" , "*.stl" , "*.dxf" } ;
- On windows char defaults to MBCS, set tinyfd_winUtf8=1 to use UTF-8
- On windows link against Comdlg32.lib and Ole32.lib
  This linking is not compulsary for console mode (see above).
- On unix: it tries command line calls, so no such need.
- On unix you need one of the following:
  applescript, kdialog, zenity, matedialog, shellementary, qarma,
  python (2 or 3)/tkinter/python-dbus (optional), Xdialog
  or dialog (opens terminal if running without console) or xterm.
- One of those is already included on most (if not all) desktops.
- In the absence of those it will use gdialog, gxmessage or whiptail
  with a textinputbox.
- If nothing is found, it switches to basic console input,
  it opens a console if needed (requires xterm + bash).
- Use windows separators on windows and unix separators on unix.
- String memory is preallocated statically for all the returned values.
- File and path names are tested before return, they are valid.
- If you pass only a path instead of path + filename,
  make sure it ends with a separator.
- tinyfd_forceConsole=1; at run time, forces dialogs into console mode.
- On windows, console mode only make sense for console applications.
- On windows, Console mode is not implemented for wchar_T UTF-16.
- Mutiple selects are not allowed in console mode.
- The package dialog must be installed to run in enhanced console mode.
  It is already installed on most unix systems.
- On osx, the package dialog can be installed via
  http://macappstore.org/dialog or http://macports.org
- On windows, for enhanced console mode,
  dialog.exe should be copied somewhere on your executable path.
  It can be found at the bottom of the following page:
  http://andrear.altervista.org/home/cdialog.php
- If dialog is missing, it will switch to basic console input.
- You can query the type of dialog that will be use.
- MinGW needs gcc >= v4.9 otherwise some headers are incomplete.
- The Hello World (and a bit more) is on the sourceforge site:
*/
