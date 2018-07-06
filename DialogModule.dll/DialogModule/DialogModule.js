var DialogModule;

OnLoad();

function OnLoad() {

    DialogModule = new ActiveXObject("DialogModule.DialogModuleCtrl");

    var Result;

    Result = ShowMessage("Hello World!");
    ShowMessage(Result);

    Result = ShowQuestion("Yes or no?");
    ShowMessage(Result);

    Result = ShowError("Hello World!", false);
    ShowMessage(Result);

    Result = GetString("Enter a string:", "Hello World!");
    if (Result != "") 
        ShowMessage(Result);

    Result = GetPassword("Enter a password string:", "Hello World!");
    if (Result != "")
        ShowMessage(Result);

    Result = GetInteger("Enter a integer:", 0);
    ShowMessage(Result);

    Result = GetPasscode("Enter a passcode integer:", 0);
    ShowMessage(Result);

    var VerticalSlash;
    var FileFilter;

    VerticalSlash = "|"
    FileFilter = "Saved Games (*.sav)" + VerticalSlash + 
    "*.sav" + VerticalSlash + "All Files (*.*)" + VerticalSlash + "*.*"
    Result = GetOpenFileName(FileFilter, "");
    if (Result != "")
        ShowMessage(Result);

    VerticalSlash = "|"
    FileFilter = "Saved Games (*.sav)" + VerticalSlash + 
    "*.sav" + VerticalSlash + "All Files (*.*)" + VerticalSlash + "*.*"
    Result = GetOpenFileNameExt(FileFilter, "", "", "Open Ext");
    if (Result != "")
        ShowMessage(Result);

    VerticalSlash = "|"
    FileFilter = "Saved Games (*.sav)" + VerticalSlash + 
    "*.sav" + VerticalSlash + "All Files (*.*)" + VerticalSlash + "*.*"
    Result = GetSaveFileName(FileFilter, "");
    if (Result != "")
        ShowMessage(Result);

    VerticalSlash = "|"
    FileFilter = "Saved Games (*.sav)" + VerticalSlash + 
    "*.sav" + VerticalSlash + "All Files (*.*)" + VerticalSlash + "*.*"
    Result = GetSaveFileNameExt(FileFilter, "", "", "Save As Ext");
    if (Result != "")
        ShowMessage(Result);

    Result = GetDirectory("");
    if (Result != "")
        ShowMessage(Result);

    Result = GetDirectoryAlt("Select a Folder", "");
    if (Result != "")
        ShowMessage(Result);

    var Red;

    Red = 255;
    Result = GetColor(Red);
    ShowMessage(Result);
    
}

function ShowMessage(Str) {
    return DialogModule.ShowMessage(Str);
}

function ShowQuestion(Str) {
    return DialogModule.ShowQuestion(Str);
}

function ShowError(Str, Abort) {
    return DialogModule.ShowError(Str, Abort);
}

function GetString(Str, Def) {
    return DialogModule.GetString(Str, Def);
}

function GetPassword(Str, Def) {
    return DialogModule.GetPassword(Str, Def);
}

function GetInteger(Str, Def) {
    return DialogModule.GetInteger(Str, Def);
}

function GetPasscode(Str, Def) {
    return DialogModule.GetPasscode(Str, Def);
}

function GetOpenFileName(Filter, FName) {
    return DialogModule.GetOpenFileName(Filter, FName);
}

function GetSaveFileName(Filter, FName) {
    return DialogModule.GetSaveFileName(Filter, FName);
}

function GetOpenFileNameExt(Filter, FName, Dir, Title) {
    return DialogModule.GetOpenFileNameExt(Filter, FName, Dir, Title);
}

function GetSaveFileNameExt(Filter, FName, Dir, Title) {
    return DialogModule.GetSaveFileNameExt(Filter, FName, Dir, Title);
}

function GetDirectory(DName) {
    return DialogModule.GetDirectory(DName);
}

function GetDirectoryAlt(Capt, Root) {
    return DialogModule.GetDirectoryAlt(Capt, Root);
}

function GetColor(DefCol) {
    return DialogModule.GetColor(DefCol);
}