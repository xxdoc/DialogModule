// DialogModuleCtrl.cpp : Implementation of CDialogModuleCtrl

#include "stdafx.h"
#include "DialogModuleCtrl.h"


// CDialogModuleCtrl

#include <windows.h>
#include <Commdlg.h>
#include <comutil.h>
#include <Shlobj.h>
#include <stdio.h>
#include <wchar.h>
#include <Dlgs.h>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#pragma warning(disable: 4047)
HINSTANCE hInstance = (HINSTANCE)&__ImageBase;
#pragma warning(default: 4047)

#define EXPORTED_FUNCTION extern "C" _declspec(dllexport)

using namespace ATL;
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

typedef basic_string<WCHAR> tstring;
tstring widen(string str)
{
	const size_t wchar_count = str.size() + 1;
	vector<WCHAR> buf(wchar_count);
	return tstring{ buf.data(), (size_t)MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, buf.data(), wchar_count) };
}

string shorten(tstring str)
{
	int nbytes = WideCharToMultiByte(CP_UTF8, 0, str.c_str(), (int)str.length(), NULL, 0, NULL, NULL);
	vector<char> buf((size_t)nbytes);
	return string{ buf.data(), (size_t)WideCharToMultiByte(CP_UTF8, 0, str.c_str(), (int)str.length(), buf.data(), nbytes, NULL, NULL) };
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

char *window_get_caption()
{
	HWND window;
	window = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	if (IsIconic(window) == 0)
	{
		char *window_caption;

		static string strWindowCaption;
		WCHAR wstr_window_caption[MAX_PATH];
		GetWindowTextW(window, wstr_window_caption, MAX_PATH);
		strWindowCaption = shorten(wstr_window_caption);
		window_caption = (char *)strWindowCaption.c_str();

		return window_caption;
	}

	return (char *)"";
}

WCHAR wstrPromptStr[4096];
WCHAR wstrTextEntry[MAX_PATH];
WCHAR wstrWindowStr[MAX_PATH];

void ClientResize(HWND hWnd, int nWidth, int nHeight)
{
	RECT rcClient, rcWind;
	POINT ptDiff;
	GetClientRect(hWnd, &rcClient);
	GetWindowRect(hWnd, &rcWind);
	ptDiff.x = (rcWind.right - rcWind.left) - rcClient.right;
	ptDiff.y = (rcWind.bottom - rcWind.top) - rcClient.bottom;
	MoveWindow(hWnd, rcWind.left, rcWind.top, nWidth + ptDiff.x, nHeight + ptDiff.y, TRUE);
}

LRESULT CALLBACK InputBoxHookProc(HWND hWndDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
	case WM_INITDIALOG:
		ClientResize(hWndDlg, 357, 128);
		RECT rect;
		GetWindowRect(hWndDlg, &rect);
		MoveWindow(hWndDlg,
			(GetSystemMetrics(SM_CXSCREEN) / 2) - ((rect.right - rect.left) / 2),
			(GetSystemMetrics(SM_CYSCREEN) / 3) - ((rect.bottom - rect.top) / 3),
			rect.right - rect.left, rect.bottom - rect.top, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDOK), 272, 10, 75, 23, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDCANCEL), 272, 39, 75, 23, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDC_EDIT), 11, 94, 336, 23, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDC_PROMPT), 11, 11, 252, 66, TRUE);
		SetWindowLongPtr(hWndDlg, GWL_EXSTYLE, GetWindowLongPtr(hWndDlg, GWL_EXSTYLE) | WS_EX_DLGMODALFRAME);
		SetWindowPos(hWndDlg, 0, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER);
		SetDlgItemTextW(hWndDlg, IDC_PROMPT, wstrPromptStr);
		SetDlgItemTextW(hWndDlg, IDC_EDIT, wstrTextEntry);
		SetWindowTextW(hWndDlg, wstrWindowStr);
		SendDlgItemMessage(hWndDlg, IDC_EDIT, EM_SETSEL, '*', NULL);
		SendDlgItemMessage(hWndDlg, IDC_EDIT, WM_SETFOCUS, NULL, NULL);
		return TRUE;

	case WM_COMMAND:
		switch (wParam)
		{
		case IDOK:
			GetDlgItemTextW(hWndDlg, IDC_EDIT, wstrTextEntry, MAX_PATH);
			EndDialog(hWndDlg, 0);
			return TRUE;
		case IDCANCEL:
			tstring wstrEmpty = widen("");
			wcsncpy_s(wstrTextEntry, wstrEmpty.c_str(), MAX_PATH);
			EndDialog(hWndDlg, 0);
			return TRUE;
		}
		break;
	}

	return FALSE;
}


LRESULT CALLBACK PasswordBoxHookProc(HWND hWndDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
{
	switch (Msg)
	{
	case WM_INITDIALOG:
		ClientResize(hWndDlg, 357, 128);
		RECT rect;
		GetWindowRect(hWndDlg, &rect);
		MoveWindow(hWndDlg,
			(GetSystemMetrics(SM_CXSCREEN) / 2) - ((rect.right - rect.left) / 2),
			(GetSystemMetrics(SM_CYSCREEN) / 3) - ((rect.bottom - rect.top) / 3),
			rect.right - rect.left, rect.bottom - rect.top, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDOK), 272, 10, 75, 23, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDCANCEL), 272, 39, 75, 23, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDC_EDIT), 11, 94, 336, 23, TRUE);
		MoveWindow(GetDlgItem(hWndDlg, IDC_PROMPT), 11, 11, 252, 66, TRUE);
		SetWindowLongPtr(hWndDlg, GWL_EXSTYLE, GetWindowLongPtr(hWndDlg, GWL_EXSTYLE) | WS_EX_DLGMODALFRAME);
		SetWindowPos(hWndDlg, 0, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER);
		SetDlgItemTextW(hWndDlg, IDC_PROMPT, wstrPromptStr);
		SetDlgItemTextW(hWndDlg, IDC_EDIT, wstrTextEntry);
		SetWindowTextW(hWndDlg, wstrWindowStr);
		SendDlgItemMessage(hWndDlg, IDC_EDIT, EM_SETPASSWORDCHAR, '*', NULL);
		SendDlgItemMessage(hWndDlg, IDC_EDIT, EM_SETSEL , '*', NULL);
		SendDlgItemMessage(hWndDlg, IDC_EDIT, WM_SETFOCUS, NULL, NULL);
		return TRUE;

	case WM_COMMAND:
		switch (wParam)
		{
		case IDOK:
			GetDlgItemTextW(hWndDlg, IDC_EDIT, wstrTextEntry, MAX_PATH);
			EndDialog(hWndDlg, 0);
			return TRUE;
		case IDCANCEL:
			tstring wstrEmpty = widen("");
			wcsncpy_s(wstrTextEntry, wstrEmpty.c_str(), MAX_PATH);
			EndDialog(hWndDlg, 0);
			return TRUE;
		}
		break;
	}

	return FALSE;
}

EXPORTED_FUNCTION double show_message(char *str)
{
	string strStr = str;
	string strWindowCaption = window_get_caption();

	tstring tstrStr = widen(strStr);
	tstring tstrWindowCaption = widen(strWindowCaption);
	
	double result;
	result = MessageBoxW(GetAncestor(GetActiveWindow(), GA_ROOTOWNER), tstrStr.c_str(), tstrWindowCaption.c_str(), MB_OK | MB_ICONINFORMATION | MB_DEFBUTTON1 | MB_APPLMODAL);

	if (result == IDOK)
		return 1;
	else
		return 0;
}

EXPORTED_FUNCTION double show_question(char *str)
{
	string strStr = str;
	string strWindowCaption = window_get_caption();

	tstring tstrStr = widen(strStr);
	tstring tstrWindowCaption = widen(strWindowCaption);
	
	double result;
	result = MessageBoxW(GetAncestor(GetActiveWindow(), GA_ROOTOWNER), tstrStr.c_str(), tstrWindowCaption.c_str(), MB_YESNO | MB_ICONQUESTION | MB_DEFBUTTON1 | MB_APPLMODAL);

	if (result == IDYES)
		return 1;
	else
		return 0;
}

EXPORTED_FUNCTION double show_error(char *str, double abort)
{
	string strStr = str;
	string strWindowCaption = "Error";

	if (strStr != "")
		strStr = strStr + "\n\n";

	if (abort == 0)
		strStr = strStr + "Do you want to abort the application?";
	else
		strStr = strStr + "Click 'OK' to abort the application.";

	tstring tstrStr = widen(strStr);
	tstring tstrWindowCaption = widen(strWindowCaption);

	double result;

	if (abort == 0)
		result = MessageBoxW(GetAncestor(GetActiveWindow(), GA_ROOTOWNER), tstrStr.c_str(), tstrWindowCaption.c_str(), MB_YESNO | MB_ICONERROR | MB_DEFBUTTON1 | MB_APPLMODAL);
	else
		result = MessageBoxW(GetAncestor(GetActiveWindow(), GA_ROOTOWNER), tstrStr.c_str(), tstrWindowCaption.c_str(), MB_OK | MB_ICONERROR | MB_DEFBUTTON1 | MB_APPLMODAL);

	if (result == IDOK || result == IDYES)
		return 1;

	return 0;
}

EXPORTED_FUNCTION char *get_string(char *str, char *def)
{
	HWND SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string strStr = str;
	string strDef = def;
	string strWindowCaption = window_get_caption();

	tstring tstrStr = widen(strStr);
	tstring tstrDef = widen(strDef);
	tstring tstrWindowCaption = widen(strWindowCaption);

	wcsncpy_s(wstrPromptStr, tstrStr.c_str(), 4096);
	wcsncpy_s(wstrTextEntry, tstrDef.c_str(), MAX_PATH);
	wcsncpy_s(wstrWindowStr, tstrWindowCaption.c_str(), MAX_PATH);

	DialogBoxW(hInstance, MAKEINTRESOURCEW(IDD_INPUTBOX), SitehWnd, reinterpret_cast<DLGPROC>(InputBoxHookProc));

	static string strResult;
	strResult = shorten(wstrTextEntry);
	return (char *)strResult.c_str();
}

EXPORTED_FUNCTION char *get_password(char *str, char *def)
{
	HWND SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string strStr = str;
	string strDef = def;
	string strWindowCaption = window_get_caption();

	tstring tstrStr = widen(strStr);
	tstring tstrDef = widen(strDef);
	tstring tstrWindowCaption = widen(strWindowCaption);

	wcsncpy_s(wstrPromptStr, tstrStr.c_str(), 4096);
	wcsncpy_s(wstrTextEntry, tstrDef.c_str(), MAX_PATH);
	wcsncpy_s(wstrWindowStr, tstrWindowCaption.c_str(), MAX_PATH);

	DialogBoxW(hInstance, MAKEINTRESOURCEW(IDD_INPUTBOX), SitehWnd, reinterpret_cast<DLGPROC>(PasswordBoxHookProc));

	static string strResult;
	strResult = shorten(wstrTextEntry);
	return (char *)strResult.c_str();
}

EXPORTED_FUNCTION double get_integer(char *str, double def)
{
	HWND SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string strStr = str;
	std::ostringstream defInteger;
	defInteger << def;
	string strDef = defInteger.str();
	string strWindowCaption = window_get_caption();

	tstring tstrStr = widen(strStr);
	tstring tstrDef = widen(strDef);
	tstring tstrWindowCaption = widen(strWindowCaption);

	wcsncpy_s(wstrPromptStr, tstrStr.c_str(), 4096);
	wcsncpy_s(wstrTextEntry, tstrDef.c_str(), MAX_PATH);
	wcsncpy_s(wstrWindowStr, tstrWindowCaption.c_str(), MAX_PATH);

	DialogBoxW(hInstance, MAKEINTRESOURCEW(IDD_INPUTBOX), SitehWnd, reinterpret_cast<DLGPROC>(InputBoxHookProc));

	static string strResult;
	strResult = shorten(wstrTextEntry);
	char *cstrResult = (char *)strResult.c_str();

	if (is_number(cstrResult) == false)
		cstrResult = "0";

	std::istringstream text(cstrResult);
	double resInteger;
	text >> resInteger;

	return resInteger;
}

EXPORTED_FUNCTION double get_passcode(char *str, double def)
{
	HWND SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string strStr = str;
	std::ostringstream defInteger;
	defInteger << def;
	string strDef = defInteger.str();
	string strWindowCaption = window_get_caption();

	tstring tstrStr = widen(strStr);
	tstring tstrDef = widen(strDef);
	tstring tstrWindowCaption = widen(strWindowCaption);

	wcsncpy_s(wstrPromptStr, tstrStr.c_str(), 4096);
	wcsncpy_s(wstrTextEntry, tstrDef.c_str(), MAX_PATH);
	wcsncpy_s(wstrWindowStr, tstrWindowCaption.c_str(), MAX_PATH);

	DialogBoxW(hInstance, MAKEINTRESOURCEW(IDD_INPUTBOX), SitehWnd, reinterpret_cast<DLGPROC>(PasswordBoxHookProc));

	static string strResult;
	strResult = shorten(wstrTextEntry);
	char *cstrResult = (char *)strResult.c_str();

	if (is_number(cstrResult) == false)
		cstrResult = "0";

	std::istringstream text(cstrResult);
	double resInteger;
	text >> resInteger;

	return resInteger;
}

EXPORTED_FUNCTION char *get_open_filename(char *filter, char *fname)
{
	OPENFILENAMEW ofn;

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string str_filter = string(filter).append("||");
	string str_fname = fname;

	tstring tstr_filter = widen(str_filter);
	replace(tstr_filter.begin(), tstr_filter.end(), '|', '\0');
	tstring tstr_fname = widen(str_fname);

	WCHAR wstr_fname[MAX_PATH];
	wcsncpy_s(wstr_fname, tstr_fname.c_str(), MAX_PATH);

	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = SitehWnd;
	ofn.lpstrFile = wstr_fname;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrFilter = tstr_filter.c_str();
	ofn.nFilterIndex = 0;
	ofn.lpstrTitle = NULL;
	ofn.lpstrInitialDir = NULL;
	ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;

	if (GetOpenFileNameW(&ofn) != 0)
	{
		static string result;
		result = shorten(wstr_fname);
		return (char *)result.c_str();
	}

	return (char *)"";
}

EXPORTED_FUNCTION char *get_save_filename(char *filter, char *fname)
{
	OPENFILENAMEW ofn;

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string str_filter = string(filter).append("||");
	string str_fname = fname;

	tstring tstr_filter = widen(str_filter);
	replace(tstr_filter.begin(), tstr_filter.end(), '|', '\0');
	tstring tstr_fname = widen(str_fname);

	WCHAR wstr_fname[MAX_PATH];
	wcsncpy_s(wstr_fname, tstr_fname.c_str(), MAX_PATH);

	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = SitehWnd;
	ofn.lpstrFile = wstr_fname;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrFilter = tstr_filter.c_str();
	ofn.nFilterIndex = 0;
	ofn.lpstrTitle = NULL;
	ofn.lpstrInitialDir = NULL;
	ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT;

	if (GetSaveFileNameW(&ofn) != 0)
	{
		static string result;
		result = shorten(wstr_fname);
		return (char *)result.c_str();
	}

	return (char *)"";
}

EXPORTED_FUNCTION char *get_open_filename_ext(char *filter, char *fname, char *dir, char *title)
{
	OPENFILENAMEW ofn;

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string str_filter = string(filter).append("||");
	string str_fname = fname;
	string str_dir = dir;
	string str_title = title;

	tstring tstr_filter = widen(str_filter);
	replace(tstr_filter.begin(), tstr_filter.end(), '|', '\0');
	tstring tstr_fname = widen(str_fname);
	tstring tstr_dir = widen(str_dir);
	tstring tstr_title = widen(str_title);

	WCHAR wstr_fname[MAX_PATH];
	wcsncpy_s(wstr_fname, tstr_fname.c_str(), MAX_PATH);

	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = SitehWnd;
	ofn.lpstrFile = wstr_fname;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrFilter = tstr_filter.c_str();
	ofn.nFilterIndex = 0;
	ofn.lpstrTitle = tstr_title.c_str();
	ofn.lpstrInitialDir = tstr_dir.c_str();
	ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;

	if (GetOpenFileNameW(&ofn) != 0)
	{
		static string result;
		result = shorten(wstr_fname);
		return (char *)result.c_str();
	}

	return (char *)"";
}

EXPORTED_FUNCTION char *get_save_filename_ext(char *filter, char *fname, char *dir, char *title)
{
	OPENFILENAMEW ofn;

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string str_filter = string(filter).append("||");
	string str_fname = fname;
	string str_dir = dir;
	string str_title = title;

	tstring tstr_filter = widen(str_filter);
	replace(tstr_filter.begin(), tstr_filter.end(), '|', '\0');
	tstring tstr_fname = widen(str_fname);
	tstring tstr_dir = widen(str_dir);
	tstring tstr_title = widen(str_title);

	WCHAR wstr_fname[MAX_PATH];
	wcsncpy_s(wstr_fname, tstr_fname.c_str(), MAX_PATH);

	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = SitehWnd;
	ofn.lpstrFile = wstr_fname;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrFilter = tstr_filter.c_str();
	ofn.nFilterIndex = 0;
	ofn.lpstrTitle = tstr_title.c_str();
	ofn.lpstrInitialDir = tstr_dir.c_str();
	ofn.Flags = OFN_EXPLORER | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT;

	if (GetSaveFileNameW(&ofn) != 0)
	{
		static string result;
		result = shorten(wstr_fname);
		return (char *)result.c_str();
	}

	return (char *)"";
}

WCHAR *LowerCaseToActualPathName(WCHAR *wstr_dname)
{
	LPITEMIDLIST pstr_dname;
	SHParseDisplayName(wstr_dname, 0, &pstr_dname, 0, 0);

	static WCHAR wstr_result[MAX_PATH];
	SHGetPathFromIDListW(pstr_dname, wstr_result);
	return wstr_result;
}

WCHAR wstr_dname[MAX_PATH];
WCHAR wstr_label5[MAX_PATH];
tstring ActualPath;
HWND label6;

UINT APIENTRY OFNHookProcOldStyle(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (uMsg == WM_INITDIALOG)
	{
		ClientResize(hWnd, 424, 255);

		RECT rect;
		GetWindowRect(hWnd, &rect);
		MoveWindow(hWnd,
			(GetSystemMetrics(SM_CXSCREEN) / 2) - ((rect.right - rect.left) / 2),
			(GetSystemMetrics(SM_CYSCREEN) / 2) - ((rect.bottom - rect.top) / 2),
			rect.right - rect.left, rect.bottom - rect.top, TRUE);

		HWND bttn1 = GetDlgItem(hWnd, IDOK);
		HWND bttn2 = GetDlgItem(hWnd, IDCANCEL);
		HWND list1 = GetDlgItem(hWnd, lst1);
		HWND list2 = GetDlgItem(hWnd, lst2);
		HWND label1 = GetDlgItem(hWnd, stc3);
		HWND label2 = GetDlgItem(hWnd, 65535);
		HWND label3 = GetDlgItem(hWnd, stc2);
		HWND label4 = GetDlgItem(hWnd, stc4);
		HWND label5 = GetDlgItem(hWnd, stc1);
		label6 = GetDlgItem(hWnd, IDC_STATIC);
		HWND cmbbx1 = GetDlgItem(hWnd, cmb1);
		HWND cmbbx2 = GetDlgItem(hWnd, cmb2);
		HWND txtbx1 = GetDlgItem(hWnd, edt1);

		SetWindowText(label1, "&Files: (*.*)");
		SetWindowText(label2, "&Directories:");
		SetWindowText(label3, "Directory &Name:");
		SetWindowText(label4, "D&rives:");
		DestroyWindow(cmbbx1);
		DestroyWindow(txtbx1);

		MoveWindow(bttn1, 256, 224, 77, 27, TRUE);
		MoveWindow(bttn2, 340, 224, 77, 27, TRUE);
		MoveWindow(label1, 232, 56, 72, 16, TRUE);
		MoveWindow(label2, 8, 56, 72, 16, TRUE);
		MoveWindow(label3, 8, 8, 93, 16, TRUE);
		MoveWindow(label4, 232, 176, 50, 16, TRUE);
		MoveWindow(label5, 8, 24, 409 * 100, 16, TRUE);
		MoveWindow(label6, 8, 24, 409, 16, TRUE);
		MoveWindow(list1, 232, 72, 185, 93, TRUE);
		MoveWindow(list2, 8, 72, 213, 123, TRUE);
		MoveWindow(cmbbx2, 232, 192, 185, 19, TRUE);
		ShowWindow(label5, SW_HIDE);

		DlgDirListW(hWnd, wstr_dname, lst1, stc1, DDL_ARCHIVE | DDL_READWRITE | DDL_READONLY);

		GetDlgItemTextW(hWnd, stc1, wstr_label5, MAX_PATH);

		static string DlgItemText;
		DlgItemText = shorten(LowerCaseToActualPathName(wstr_label5));
		ActualPath = widen(string_replace_all(DlgItemText + "\\", "\\\\", "\\"));

		SetDlgItemTextW(hWnd, GetDlgCtrlID(label6), ActualPath.c_str());

		PostMessageW(hWnd, WM_SETFOCUS, 0, 0);
	}

	if (uMsg == WM_CREATE)
	{
		SetWindowLongPtr(hWnd, GWL_STYLE, GetWindowLongPtr(hWnd, GWL_STYLE) | DS_FIXEDSYS);
		SetWindowPos(hWnd, 0, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOMOVE | SWP_NOSIZE | SWP_NOZORDER);
	}

	if (uMsg == WM_PAINT)
	{
		GetDlgItemTextW(hWnd, stc1, wstr_label5, MAX_PATH);

		static string DlgItemText;
		DlgItemText = shorten(LowerCaseToActualPathName(wstr_label5));
		ActualPath = widen(string_replace_all(DlgItemText + "\\", "\\\\", "\\"));

		SetDlgItemTextW(hWnd, GetDlgCtrlID(label6), ActualPath.c_str());
	}

	HWND list1 = GetDlgItem(hWnd, lst1);

	if (uMsg == WM_COMMAND && HIWORD(wParam) == LBN_DBLCLK && LOWORD(wParam) == lst1)
		return TRUE;

	if (uMsg == WM_COMMAND && HIWORD(wParam) == BN_CLICKED && LOWORD(wParam) == IDOK)
	{
		wcsncpy_s(wstr_dname, MAX_PATH, ActualPath.c_str(), MAX_PATH);
		PostMessageW(hWnd, WM_COMMAND, IDABORT, 0);
		return TRUE;
	}

	if (uMsg == WM_COMMAND && HIWORD(wParam) == BN_CLICKED && LOWORD(wParam) == IDCANCEL)
	{
		tstring tstr_dname = widen("");
		wcsncpy_s(wstr_dname, tstr_dname.c_str(), MAX_PATH);
		PostMessageW(hWnd, WM_COMMAND, IDABORT, 0);
		return TRUE;
	}

	if (uMsg == WM_CLOSE)
	{
		tstring tstr_dname = widen("");
		wcsncpy_s(wstr_dname, tstr_dname.c_str(), MAX_PATH);
		PostMessageW(hWnd, WM_COMMAND, IDABORT, 0);
		return TRUE;
	}

	return FALSE;
}

EXPORTED_FUNCTION char *get_directory(char *dname)
{
	OPENFILENAMEW ofn;

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string str_dname = dname;

	tstring tstr_filter = widen("*.*|*.*|");
	replace(tstr_filter.begin(), tstr_filter.end(), '|', '\0');
	tstring tstr_dname = widen(str_dname);
	tstring tstr_title = widen("Select Directory");
	tstring tstr_empty = widen("");

	if (tstr_dname == tstr_empty)
		GetCurrentDirectoryW(MAX_PATH, wstr_dname);
	else
		wcsncpy_s(wstr_dname, tstr_dname.c_str(), MAX_PATH);

	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.hwndOwner = SitehWnd;
	ofn.lpstrFile = NULL;
	ofn.nMaxFile = MAX_PATH;
	ofn.lpstrFilter = tstr_filter.c_str();
	ofn.nFilterIndex = 0;
	ofn.lpstrTitle = tstr_title.c_str();
	ofn.lpstrInitialDir = wstr_dname;
	ofn.Flags = OFN_ENABLETEMPLATE | OFN_ENABLEHOOK | OFN_NONETWORKBUTTON | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY | OFN_LONGNAMES;
	ofn.lpTemplateName = (LPCWSTR)MAKEINTRESOURCE(FILEOPENORD);
	ofn.lpfnHook = (LPOFNHOOKPROC)OFNHookProcOldStyle;
	ofn.hInstance = hInstance;

	GetOpenFileNameW(&ofn);

	DWORD attrib = GetFileAttributesW(wstr_dname);

	if (attrib != INVALID_FILE_ATTRIBUTES && (attrib & FILE_ATTRIBUTE_DIRECTORY))
	{
		static string result;
		result = shorten(wstr_dname);
		return (char *)result.c_str();
	}

	return (char *)"";
}

EXPORTED_FUNCTION char *get_directory_alt(char *capt, char *root)
{
	BROWSEINFOW bi;

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	string str_capt = capt;
	string str_root = root;

	tstring tstr_capt = widen(str_capt);
	tstring tstr_root = widen(str_root);
	tstring tstr_slash = widen("\\");
	tstring tstr_empty = widen("");
	tstring tstr_zero = widen("0");

	LPITEMIDLIST pstr_root;

	if (tstr_root == tstr_empty)
		SHParseDisplayName(tstr_zero.c_str(), 0, &pstr_root, 0, 0);
	else
		SHParseDisplayName(tstr_root.c_str(), 0, &pstr_root, 0, 0);

	WCHAR wstr_dir[MAX_PATH];

	ZeroMemory(&bi, sizeof(bi));
	bi.hwndOwner = SitehWnd;
	bi.pidlRoot = pstr_root;
	bi.pszDisplayName = wstr_dir;
	bi.lpszTitle = tstr_capt.c_str();
	bi.ulFlags = BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE | BIF_NONEWFOLDERBUTTON;

	LPITEMIDLIST lpItem = SHBrowseForFolderW(&bi);
	if (lpItem != NULL)
	{
		if (SHGetPathFromIDListW(lpItem, wstr_dir) == 0)
			return (char *)"";
		else
		{
			static string result;
			result = string_replace_all(shorten(wstr_dir) + shorten(tstr_slash), "\\\\", "\\");
			return (char *)result.c_str();
		}
	}

	return (char *)"";
}

UINT_PTR CALLBACK CCHookProc(HWND hdlg, UINT uiMsg, WPARAM wParam, LPARAM lParam)
{
	if (uiMsg == WM_INITDIALOG)
	{
		RECT rect;
		GetWindowRect(hdlg, &rect);
		MoveWindow(hdlg,
			(GetSystemMetrics(SM_CXSCREEN) / 2) - ((rect.right - rect.left) / 2),
			(GetSystemMetrics(SM_CYSCREEN) / 3) - ((rect.bottom - rect.top) / 3),
			rect.right - rect.left, rect.bottom - rect.top, TRUE);

		PostMessageW(hdlg, WM_SETFOCUS, 0, 0);
	}

	return FALSE;
}

EXPORTED_FUNCTION double get_color(double defcol)
{
	CHOOSECOLOR cc;

	COLORREF DefColor = (int)defcol;
	static COLORREF CustColors[16];

	HWND SitehWnd;
	SitehWnd = GetAncestor(GetActiveWindow(), GA_ROOTOWNER);

	ZeroMemory(&cc, sizeof(cc));
	cc.lStructSize = sizeof(CHOOSECOLOR);
	cc.hwndOwner = SitehWnd;
	cc.rgbResult = DefColor;
	cc.lpCustColors = CustColors;
	cc.Flags = CC_RGBINIT | CC_ENABLEHOOK;
	cc.lpfnHook = CCHookProc;

	if (ChooseColor(&cc) != 0)
		return (int)cc.rgbResult;
	else
		return -1;
}

STDMETHODIMP CDialogModuleCtrl::get_ShowMessage(BSTR Str, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	*pVal = show_message(cstrStr);

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_ShowQuestion(BSTR Str, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	*pVal = show_question(cstrStr);

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_ShowError(BSTR Str, DOUBLE Abort, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	*pVal = show_error(cstrStr, Abort);

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetString(BSTR Str, BSTR Def, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	static string strDef;
	strDef = shorten((wchar_t *)Def);
	char *cstrDef = (char *)strDef.c_str();

	tstring tstrResult;
	tstrResult = widen(get_string(cstrStr, cstrDef));
	
	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetPassword(BSTR Str, BSTR Def, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	static string strDef;
	strDef = shorten((wchar_t *)Def);
	char *cstrDef = (char *)strDef.c_str();

	tstring tstrResult;
	tstrResult = widen(get_password(cstrStr, cstrDef));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetInteger(BSTR Str, DOUBLE Def, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	*pVal = get_integer(cstrStr, Def);

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetPasscode(BSTR Str, DOUBLE Def, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strStr;
	strStr = shorten((wchar_t *)Str);
	char *cstrStr = (char *)strStr.c_str();

	*pVal = get_passcode(cstrStr, Def);

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetOpenFileName(BSTR Filter, BSTR FName, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strFilter;
	strFilter = shorten((wchar_t *)Filter);
	char *cstrFilter = (char *)strFilter.c_str();

	static string strFName;
	strFName = shorten((wchar_t *)FName);
	char *cstrFName = (char *)strFName.c_str();

	tstring tstrResult;
	tstrResult = widen(get_open_filename(cstrFilter, cstrFName));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetSaveFileName(BSTR Filter, BSTR FName, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strFilter;
	strFilter = shorten((wchar_t *)Filter);
	char *cstrFilter = (char *)strFilter.c_str();

	static string strFName;
	strFName = shorten((wchar_t *)FName);
	char *cstrFName = (char *)strFName.c_str();

	tstring tstrResult;
	tstrResult = widen(get_save_filename(cstrFilter, cstrFName));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetOpenFileNameExt(BSTR Filter, BSTR FName, BSTR Dir, BSTR Title, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strFilter;
	strFilter = shorten((wchar_t *)Filter);
	char *cstrFilter = (char *)strFilter.c_str();

	static string strFName;
	strFName = shorten((wchar_t *)FName);
	char *cstrFName = (char *)strFName.c_str();

	static string strDir;
	strDir = shorten((wchar_t *)Dir);
	char *cstrDir = (char *)strDir.c_str();

	static string strTitle;
	strTitle = shorten((wchar_t *)Title);
	char *cstrTitle = (char *)strTitle.c_str();

	tstring tstrResult;
	tstrResult = widen(get_open_filename_ext(cstrFilter, cstrFName, cstrDir, cstrTitle));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetSaveFileNameExt(BSTR Filter, BSTR FName, BSTR Dir, BSTR Title, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strFilter;
	strFilter = shorten((wchar_t *)Filter);
	char *cstrFilter = (char *)strFilter.c_str();

	static string strFName;
	strFName = shorten((wchar_t *)FName);
	char *cstrFName = (char *)strFName.c_str();

	static string strDir;
	strDir = shorten((wchar_t *)Dir);
	char *cstrDir = (char *)strDir.c_str();

	static string strTitle;
	strTitle = shorten((wchar_t *)Title);
	char *cstrTitle = (char *)strTitle.c_str();

	tstring tstrResult;
	tstrResult = widen(get_save_filename_ext(cstrFilter, cstrFName, cstrDir, cstrTitle));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetDirectory(BSTR DName, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strDName;
	strDName = shorten((wchar_t *)DName);
	char *cstrDName = (char *)strDName.c_str();

	tstring tstrResult;
	tstrResult = widen(get_directory(cstrDName));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetDirectoryAlt(BSTR Capt, BSTR Root, BSTR* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	static string strCapt;
	strCapt = shorten((wchar_t *)Capt);
	char *cstrCapt = (char *)strCapt.c_str();

	static string strRoot;
	strRoot = shorten((wchar_t *)Root);
	char *cstrRoot = (char *)strRoot.c_str();

	tstring tstrResult;
	tstrResult = widen(get_directory_alt(cstrCapt, cstrRoot));

	static _bstr_t bstrResult;
	bstrResult = (_bstr_t)tstrResult.c_str();
	*pVal = bstrResult;

	return S_OK;
}


STDMETHODIMP CDialogModuleCtrl::get_GetColor(DOUBLE DefCol, DOUBLE* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	*pVal = get_color(DefCol);

	return S_OK;
}