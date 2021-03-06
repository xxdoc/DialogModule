// dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "DialogModule_i.h"
#include "dllmain.h"
#include "compreg.h"
#include "xdlldata.h"

CDialogModuleModule _AtlModule;

class CDialogModuleApp : public CWinApp
{
public:

// Overrides
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	DECLARE_MESSAGE_MAP()
};

BEGIN_MESSAGE_MAP(CDialogModuleApp, CWinApp)
END_MESSAGE_MAP()

CDialogModuleApp theApp;

BOOL CDialogModuleApp::InitInstance()
{
#ifdef _MERGE_PROXYSTUB
	if (!PrxDllMain(m_hInstance, DLL_PROCESS_ATTACH, NULL))
		return FALSE;
#endif
	return CWinApp::InitInstance();
}

int CDialogModuleApp::ExitInstance()
{
	return CWinApp::ExitInstance();
}
