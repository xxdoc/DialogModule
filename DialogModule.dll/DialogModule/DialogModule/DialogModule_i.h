

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Jul 06 20:44:33 2018
 */
/* Compiler settings for DialogModule.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __DialogModule_i_h__
#define __DialogModule_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IComponentRegistrar_FWD_DEFINED__
#define __IComponentRegistrar_FWD_DEFINED__
typedef interface IComponentRegistrar IComponentRegistrar;

#endif 	/* __IComponentRegistrar_FWD_DEFINED__ */


#ifndef __IDialogModuleCtrl_FWD_DEFINED__
#define __IDialogModuleCtrl_FWD_DEFINED__
typedef interface IDialogModuleCtrl IDialogModuleCtrl;

#endif 	/* __IDialogModuleCtrl_FWD_DEFINED__ */


#ifndef __CompReg_FWD_DEFINED__
#define __CompReg_FWD_DEFINED__

#ifdef __cplusplus
typedef class CompReg CompReg;
#else
typedef struct CompReg CompReg;
#endif /* __cplusplus */

#endif 	/* __CompReg_FWD_DEFINED__ */


#ifndef __DialogModuleCtrl_FWD_DEFINED__
#define __DialogModuleCtrl_FWD_DEFINED__

#ifdef __cplusplus
typedef class DialogModuleCtrl DialogModuleCtrl;
#else
typedef struct DialogModuleCtrl DialogModuleCtrl;
#endif /* __cplusplus */

#endif 	/* __DialogModuleCtrl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IComponentRegistrar_INTERFACE_DEFINED__
#define __IComponentRegistrar_INTERFACE_DEFINED__

/* interface IComponentRegistrar */
/* [unique][dual][uuid][object] */ 


EXTERN_C const IID IID_IComponentRegistrar;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a817e7a2-43fa-11d0-9e44-00aa00b6770a")
    IComponentRegistrar : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Attach( 
            /* [in] */ BSTR bstrPath) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetComponents( 
            /* [out] */ SAFEARRAY * *pbstrCLSIDs,
            /* [out] */ SAFEARRAY * *pbstrDescriptions) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RegisterComponent( 
            /* [in] */ BSTR bstrCLSID) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE UnregisterComponent( 
            /* [in] */ BSTR bstrCLSID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComponentRegistrarVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComponentRegistrar * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComponentRegistrar * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComponentRegistrar * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IComponentRegistrar * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IComponentRegistrar * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IComponentRegistrar * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IComponentRegistrar * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Attach )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrPath);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterAll )( 
            IComponentRegistrar * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterAll )( 
            IComponentRegistrar * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetComponents )( 
            IComponentRegistrar * This,
            /* [out] */ SAFEARRAY * *pbstrCLSIDs,
            /* [out] */ SAFEARRAY * *pbstrDescriptions);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RegisterComponent )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrCLSID);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterComponent )( 
            IComponentRegistrar * This,
            /* [in] */ BSTR bstrCLSID);
        
        END_INTERFACE
    } IComponentRegistrarVtbl;

    interface IComponentRegistrar
    {
        CONST_VTBL struct IComponentRegistrarVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComponentRegistrar_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComponentRegistrar_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComponentRegistrar_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComponentRegistrar_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IComponentRegistrar_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IComponentRegistrar_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IComponentRegistrar_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IComponentRegistrar_Attach(This,bstrPath)	\
    ( (This)->lpVtbl -> Attach(This,bstrPath) ) 

#define IComponentRegistrar_RegisterAll(This)	\
    ( (This)->lpVtbl -> RegisterAll(This) ) 

#define IComponentRegistrar_UnregisterAll(This)	\
    ( (This)->lpVtbl -> UnregisterAll(This) ) 

#define IComponentRegistrar_GetComponents(This,pbstrCLSIDs,pbstrDescriptions)	\
    ( (This)->lpVtbl -> GetComponents(This,pbstrCLSIDs,pbstrDescriptions) ) 

#define IComponentRegistrar_RegisterComponent(This,bstrCLSID)	\
    ( (This)->lpVtbl -> RegisterComponent(This,bstrCLSID) ) 

#define IComponentRegistrar_UnregisterComponent(This,bstrCLSID)	\
    ( (This)->lpVtbl -> UnregisterComponent(This,bstrCLSID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComponentRegistrar_INTERFACE_DEFINED__ */


#ifndef __IDialogModuleCtrl_INTERFACE_DEFINED__
#define __IDialogModuleCtrl_INTERFACE_DEFINED__

/* interface IDialogModuleCtrl */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDialogModuleCtrl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("41971e41-609f-4bcd-b999-e7ca4a85f66e")
    IDialogModuleCtrl : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowMessage( 
            BSTR Str,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowQuestion( 
            BSTR Str,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_ShowError( 
            BSTR Str,
            DOUBLE Abort,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetString( 
            BSTR Str,
            BSTR Def,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetPassword( 
            BSTR Str,
            BSTR Def,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetInteger( 
            BSTR Str,
            DOUBLE Def,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetPasscode( 
            BSTR Str,
            DOUBLE Def,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetOpenFileName( 
            BSTR Filter,
            BSTR FName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetSaveFileName( 
            BSTR Filter,
            BSTR FName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetOpenFileNameExt( 
            BSTR Filter,
            BSTR FName,
            BSTR Dir,
            BSTR Title,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetSaveFileNameExt( 
            BSTR Filter,
            BSTR FName,
            BSTR Dir,
            BSTR Title,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetDirectory( 
            BSTR DName,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetDirectoryAlt( 
            BSTR Capt,
            BSTR Root,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_GetColor( 
            DOUBLE DefCol,
            /* [retval][out] */ DOUBLE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDialogModuleCtrlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDialogModuleCtrl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDialogModuleCtrl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDialogModuleCtrl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDialogModuleCtrl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDialogModuleCtrl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDialogModuleCtrl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDialogModuleCtrl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowMessage )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowQuestion )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShowError )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            DOUBLE Abort,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetString )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            BSTR Def,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetPassword )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            BSTR Def,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetInteger )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            DOUBLE Def,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetPasscode )( 
            IDialogModuleCtrl * This,
            BSTR Str,
            DOUBLE Def,
            /* [retval][out] */ DOUBLE *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetOpenFileName )( 
            IDialogModuleCtrl * This,
            BSTR Filter,
            BSTR FName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetSaveFileName )( 
            IDialogModuleCtrl * This,
            BSTR Filter,
            BSTR FName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetOpenFileNameExt )( 
            IDialogModuleCtrl * This,
            BSTR Filter,
            BSTR FName,
            BSTR Dir,
            BSTR Title,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetSaveFileNameExt )( 
            IDialogModuleCtrl * This,
            BSTR Filter,
            BSTR FName,
            BSTR Dir,
            BSTR Title,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetDirectory )( 
            IDialogModuleCtrl * This,
            BSTR DName,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetDirectoryAlt )( 
            IDialogModuleCtrl * This,
            BSTR Capt,
            BSTR Root,
            /* [retval][out] */ BSTR *pVal);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GetColor )( 
            IDialogModuleCtrl * This,
            DOUBLE DefCol,
            /* [retval][out] */ DOUBLE *pVal);
        
        END_INTERFACE
    } IDialogModuleCtrlVtbl;

    interface IDialogModuleCtrl
    {
        CONST_VTBL struct IDialogModuleCtrlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDialogModuleCtrl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDialogModuleCtrl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDialogModuleCtrl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDialogModuleCtrl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDialogModuleCtrl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDialogModuleCtrl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDialogModuleCtrl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDialogModuleCtrl_get_ShowMessage(This,Str,pVal)	\
    ( (This)->lpVtbl -> get_ShowMessage(This,Str,pVal) ) 

#define IDialogModuleCtrl_get_ShowQuestion(This,Str,pVal)	\
    ( (This)->lpVtbl -> get_ShowQuestion(This,Str,pVal) ) 

#define IDialogModuleCtrl_get_ShowError(This,Str,Abort,pVal)	\
    ( (This)->lpVtbl -> get_ShowError(This,Str,Abort,pVal) ) 

#define IDialogModuleCtrl_get_GetString(This,Str,Def,pVal)	\
    ( (This)->lpVtbl -> get_GetString(This,Str,Def,pVal) ) 

#define IDialogModuleCtrl_get_GetPassword(This,Str,Def,pVal)	\
    ( (This)->lpVtbl -> get_GetPassword(This,Str,Def,pVal) ) 

#define IDialogModuleCtrl_get_GetInteger(This,Str,Def,pVal)	\
    ( (This)->lpVtbl -> get_GetInteger(This,Str,Def,pVal) ) 

#define IDialogModuleCtrl_get_GetPasscode(This,Str,Def,pVal)	\
    ( (This)->lpVtbl -> get_GetPasscode(This,Str,Def,pVal) ) 

#define IDialogModuleCtrl_get_GetOpenFileName(This,Filter,FName,pVal)	\
    ( (This)->lpVtbl -> get_GetOpenFileName(This,Filter,FName,pVal) ) 

#define IDialogModuleCtrl_get_GetSaveFileName(This,Filter,FName,pVal)	\
    ( (This)->lpVtbl -> get_GetSaveFileName(This,Filter,FName,pVal) ) 

#define IDialogModuleCtrl_get_GetOpenFileNameExt(This,Filter,FName,Dir,Title,pVal)	\
    ( (This)->lpVtbl -> get_GetOpenFileNameExt(This,Filter,FName,Dir,Title,pVal) ) 

#define IDialogModuleCtrl_get_GetSaveFileNameExt(This,Filter,FName,Dir,Title,pVal)	\
    ( (This)->lpVtbl -> get_GetSaveFileNameExt(This,Filter,FName,Dir,Title,pVal) ) 

#define IDialogModuleCtrl_get_GetDirectory(This,DName,pVal)	\
    ( (This)->lpVtbl -> get_GetDirectory(This,DName,pVal) ) 

#define IDialogModuleCtrl_get_GetDirectoryAlt(This,Capt,Root,pVal)	\
    ( (This)->lpVtbl -> get_GetDirectoryAlt(This,Capt,Root,pVal) ) 

#define IDialogModuleCtrl_get_GetColor(This,DefCol,pVal)	\
    ( (This)->lpVtbl -> get_GetColor(This,DefCol,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDialogModuleCtrl_INTERFACE_DEFINED__ */



#ifndef __DialogModuleLib_LIBRARY_DEFINED__
#define __DialogModuleLib_LIBRARY_DEFINED__

/* library DialogModuleLib */
/* [custom][version][uuid] */ 


EXTERN_C const IID LIBID_DialogModuleLib;

EXTERN_C const CLSID CLSID_CompReg;

#ifdef __cplusplus

class DECLSPEC_UUID("296d708f-571d-462a-9c2c-a6987d9cadfc")
CompReg;
#endif

EXTERN_C const CLSID CLSID_DialogModuleCtrl;

#ifdef __cplusplus

class DECLSPEC_UUID("2fdb7f7d-8f79-4287-a392-efa7162711f1")
DialogModuleCtrl;
#endif
#endif /* __DialogModuleLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     unsigned long *, unsigned long            , LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  unsigned long *, unsigned char *, LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     unsigned long *, LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


