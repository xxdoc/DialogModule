// DialogModuleCtrl.h : Declaration of the CDialogModuleCtrl

#pragma once
#include "resource.h"       // main symbols



#include "DialogModule_i.h"



using namespace ATL;


// CDialogModuleCtrl

class ATL_NO_VTABLE CDialogModuleCtrl :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CDialogModuleCtrl, &CLSID_DialogModuleCtrl>,
	public IDispatchImpl<IDialogModuleCtrl, &IID_IDialogModuleCtrl, &LIBID_DialogModuleLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CDialogModuleCtrl()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(106)


BEGIN_COM_MAP(CDialogModuleCtrl)
	COM_INTERFACE_ENTRY(IDialogModuleCtrl)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:
	STDMETHOD(get_WindowGetCaption)(LONG WindowHandle, BSTR* pVal);
	STDMETHOD(get_ShowMessage)(BSTR Str, DOUBLE* pVal);
	STDMETHOD(get_ShowQuestion)(BSTR Str, DOUBLE* pVal);
	STDMETHOD(get_ShowError)(BSTR Str, DOUBLE Abort, DOUBLE* pVal);
	STDMETHOD(get_GetString)(BSTR Str, BSTR Def, BSTR* pVal);
	STDMETHOD(get_GetPassword)(BSTR Str, BSTR Def, BSTR* pVal);
	STDMETHOD(get_GetInteger)(BSTR Str, DOUBLE Def, DOUBLE* pVal);
	STDMETHOD(get_GetPasscode)(BSTR Str, DOUBLE Def, DOUBLE* pVal);
	STDMETHOD(get_GetOpenFileName)(BSTR Filter, BSTR FName, BSTR* pVal);
	STDMETHOD(get_GetSaveFileName)(BSTR Filter, BSTR FName, BSTR* pVal);
	STDMETHOD(get_GetOpenFileNameExt)(BSTR Filter, BSTR FName, BSTR Dir, BSTR Title, BSTR* pVal);
	STDMETHOD(get_GetSaveFileNameExt)(BSTR Filter, BSTR FName, BSTR Dir, BSTR Title, BSTR* pVal);
	STDMETHOD(get_GetDirectory)(BSTR DName, BSTR* pVal);
	STDMETHOD(get_GetDirectoryAlt)(BSTR Capt, BSTR Root, BSTR* pVal);
	STDMETHOD(get_GetColor)(DOUBLE DefCol, DOUBLE* pVal);
};

OBJECT_ENTRY_AUTO(__uuidof(DialogModuleCtrl), CDialogModuleCtrl)
