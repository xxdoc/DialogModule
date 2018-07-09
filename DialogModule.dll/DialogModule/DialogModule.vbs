Option Explicit

Dim DialogModule

OnLoad

Sub OnLoad()

    Set DialogModule = CreateObject("DialogModule.DialogModuleCtrl")

    Dim Result

    Result = ShowMessage("Hello World!")
    ShowMessage Result

    Result = ShowQuestion("Yes or no?")
    ShowMessage Result

    Result = ShowError("Hello World!", False)
    ShowMessage Result

    Result = GetString("Enter a string:", "Hello World!")
    If Result <> "" Then ShowMessage Result

    Result = GetPassword("Enter a password string:", "Hello World!")
    If Result <> "" Then ShowMessage Result

    Result = GetInteger("Enter a integer:", 0)
    ShowMessage Result

    Result = GetPasscode("Enter a passcode integer:", 0)
    ShowMessage Result

    Dim VerticalSlash
    Dim FileFilter

    VerticalSlash = Chr(124)
    FileFilter = "Saved Games (*.sav)" & VerticalSlash & _
    "*.sav" & VerticalSlash & "All Files (*.*)" & VerticalSlash & "*.*"
    Result = GetOpenFileName(FileFilter, "")
    If Result <> "" Then ShowMessage Result

    VerticalSlash = Chr(124)
    FileFilter = "Saved Games (*.sav)" & VerticalSlash & _
    "*.sav" & VerticalSlash & "All Files (*.*)" & VerticalSlash & "*.*"
    Result = GetOpenFileNameExt(FileFilter, "", "", "Open Ext")
    If Result <> "" Then ShowMessage Result

    VerticalSlash = Chr(124)
    FileFilter = "Saved Games (*.sav)" & VerticalSlash & _
    "*.sav" & VerticalSlash & "All Files (*.*)" & VerticalSlash & "*.*"
    Result = GetSaveFileName(FileFilter, "")
    If Result <> "" Then ShowMessage Result

    VerticalSlash = Chr(124)
    FileFilter = "Saved Games (*.sav)" & VerticalSlash & _
    "*.sav" & VerticalSlash & "All Files (*.*)" & VerticalSlash & "*.*"
    Result = GetSaveFileNameExt(FileFilter, "", "", "Save As Ext")
    If Result <> "" Then ShowMessage Result

    Result = GetDirectory("")
    If Result <> "" Then ShowMessage Result

    Result = GetDirectoryAlt("Select a Folder", "")
    If Result <> "" Then ShowMessage Result

    Dim Red

    Red = 255
    Result = GetColor(Red)
    ShowMessage Result
    
End Sub

Function ShowMessage(Str)
    ShowMessage = DialogModule.ShowMessage(CStr(Str))
End Function

Function ShowQuestion(Str)
    ShowQuestion = DialogModule.ShowQuestion(CStr(Str))
End Function

Function ShowError(Str, Abort)
    ShowError = DialogModule.ShowError(CStr(Str), CDbl(Abort))
End Function

Function GetString(Str, Def)
    GetString = DialogModule.GetString(CStr(Str), CStr(Def))
End Function

Function GetPassword(Str, Def)
    GetPassword = DialogModule.GetPassword(CStr(Str), CStr(Def))
End Function

Function GetInteger(Str, Def)
    GetInteger = DialogModule.GetInteger(CStr(Str), CDbl(Def))
End Function

Function GetPasscode(Str, Def)
    GetPasscode = DialogModule.GetPasscode(CStr(Str), CDbl(Def))
End Function

Function GetOpenFileName(Filter, FName)
    GetOpenFileName = DialogModule.GetOpenFileName(CStr(Filter), CStr(FName))
End Function

Function GetSaveFileName(Filter, FName)
    GetSaveFileName = DialogModule.GetSaveFileName(CStr(Filter), CStr(FName))
End Function

Function GetOpenFileNameExt(Filter, FName, Dir, Title)
    GetOpenFileNameExt = DialogModule.GetOpenFileNameExt(CStr(Filter), CStr(FName), CStr(Dir), CStr(Title))
End Function

Function GetSaveFileNameExt(Filter, FName, Dir, Title)
    GetSaveFileNameExt = DialogModule.GetSaveFileNameExt(CStr(Filter), CStr(FName), CStr(Dir), CStr(Title))
End Function

Function GetDirectory(DName)
    GetDirectory = DialogModule.GetDirectory(CStr(DName))
End Function

Function GetDirectoryAlt(Capt, Root)
    GetDirectoryAlt = DialogModule.GetDirectoryAlt(CStr(Capt), CStr(Root))
End Function

Function GetColor(DefCol)
    GetColor = DialogModule.GetColor(CDbl(DefCol))
End Function