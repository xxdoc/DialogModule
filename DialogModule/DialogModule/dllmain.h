// dllmain.h : Declaration of module class.

class CDialogModuleModule : public ATL::CAtlDllModuleT< CDialogModuleModule >
{
public :
	DECLARE_LIBID(LIBID_DialogModuleLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DIALOGMODULE, "{525a22f1-8ede-424a-86d7-2541809943a3}")
};

extern class CDialogModuleModule _AtlModule;
