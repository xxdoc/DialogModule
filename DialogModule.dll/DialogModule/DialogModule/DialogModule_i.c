

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Aug 10 21:15:14 2018
 */
/* Compiler settings for DialogModule.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IComponentRegistrar,0xa817e7a2,0x43fa,0x11d0,0x9e,0x44,0x00,0xaa,0x00,0xb6,0x77,0x0a);


MIDL_DEFINE_GUID(IID, IID_IDialogModuleCtrl,0x41971e41,0x609f,0x4bcd,0xb9,0x99,0xe7,0xca,0x4a,0x85,0xf6,0x6e);


MIDL_DEFINE_GUID(IID, LIBID_DialogModuleLib,0x525a22f1,0x8ede,0x424a,0x86,0xd7,0x25,0x41,0x80,0x99,0x43,0xa3);


MIDL_DEFINE_GUID(CLSID, CLSID_CompReg,0x296d708f,0x571d,0x462a,0x9c,0x2c,0xa6,0x98,0x7d,0x9c,0xad,0xfc);


MIDL_DEFINE_GUID(CLSID, CLSID_DialogModuleCtrl,0x2fdb7f7d,0x8f79,0x4287,0xa3,0x92,0xef,0xa7,0x16,0x27,0x11,0xf1);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



