

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Oct 08 17:50:40 2018
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

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "DialogModule_i.h"

#define TYPE_FORMAT_STRING_SIZE   1033                              
#define PROC_FORMAT_STRING_SIZE   967                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _DialogModule_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } DialogModule_MIDL_TYPE_FORMAT_STRING;

typedef struct _DialogModule_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } DialogModule_MIDL_PROC_FORMAT_STRING;

typedef struct _DialogModule_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } DialogModule_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const DialogModule_MIDL_TYPE_FORMAT_STRING DialogModule__MIDL_TypeFormatString;
extern const DialogModule_MIDL_PROC_FORMAT_STRING DialogModule__MIDL_ProcFormatString;
extern const DialogModule_MIDL_EXPR_FORMAT_STRING DialogModule__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IComponentRegistrar_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IComponentRegistrar_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDialogModuleCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IDialogModuleCtrl_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const DialogModule_MIDL_PROC_FORMAT_STRING DialogModule__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Attach */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPath */

/* 26 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterAll */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 64 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 66 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 68 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterAll */

/* 70 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 72 */	NdrFcLong( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x9 ),	/* 9 */
/* 78 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x8 ),	/* 8 */
/* 84 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 86 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComponents */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0xa ),	/* 10 */
/* 110 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 118 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pbstrCLSIDs */

/* 128 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 132 */	NdrFcShort( 0x3ec ),	/* Type Offset=1004 */

	/* Parameter pbstrDescriptions */

/* 134 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 136 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 138 */	NdrFcShort( 0x3ec ),	/* Type Offset=1004 */

	/* Return value */

/* 140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 142 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterComponent */

/* 146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0xb ),	/* 11 */
/* 154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 162 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCLSID */

/* 172 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 176 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 180 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnregisterComponent */

/* 184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 190 */	NdrFcShort( 0xc ),	/* 12 */
/* 192 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 200 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCLSID */

/* 210 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 214 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WindowGetCaption */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x7 ),	/* 7 */
/* 230 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 238 */	0xa,		/* 10 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 240 */	NdrFcShort( 0x1 ),	/* 1 */
/* 242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter WindowHandle */

/* 248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 254 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 258 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShowMessage */

/* 266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 278 */	NdrFcShort( 0x2c ),	/* 44 */
/* 280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 282 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Str */

/* 292 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 296 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 298 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 300 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 302 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 306 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShowQuestion */

/* 310 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x9 ),	/* 9 */
/* 318 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x2c ),	/* 44 */
/* 324 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 326 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Str */

/* 336 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 340 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 346 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ShowError */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0xa ),	/* 10 */
/* 362 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 364 */	NdrFcShort( 0x10 ),	/* 16 */
/* 366 */	NdrFcShort( 0x2c ),	/* 44 */
/* 368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 370 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x20 ),	/* 32 */

	/* Parameter Str */

/* 380 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 382 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 384 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Abort */

/* 386 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 388 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 390 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 394 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 396 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 400 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetString */

/* 404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0xb ),	/* 11 */
/* 412 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 420 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Str */

/* 430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 432 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 434 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Def */

/* 436 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 438 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 440 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 442 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 444 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 446 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 450 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetPassword */

/* 454 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0xc ),	/* 12 */
/* 462 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 470 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 474 */	NdrFcShort( 0x1 ),	/* 1 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Str */

/* 480 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 484 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Def */

/* 486 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 490 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 492 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 496 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 500 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetInteger */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xd ),	/* 13 */
/* 512 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 514 */	NdrFcShort( 0x10 ),	/* 16 */
/* 516 */	NdrFcShort( 0x2c ),	/* 44 */
/* 518 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 520 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x20 ),	/* 32 */

	/* Parameter Str */

/* 530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 534 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Def */

/* 536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 540 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 546 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 550 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetPasscode */

/* 554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0xe ),	/* 14 */
/* 562 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 564 */	NdrFcShort( 0x10 ),	/* 16 */
/* 566 */	NdrFcShort( 0x2c ),	/* 44 */
/* 568 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 570 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x20 ),	/* 32 */

	/* Parameter Str */

/* 580 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 584 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Def */

/* 586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 590 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 592 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 594 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 596 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 598 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 600 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetOpenFileName */

/* 604 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0xf ),	/* 15 */
/* 612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x8 ),	/* 8 */
/* 618 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 620 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Filter */

/* 630 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 634 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FName */

/* 636 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 640 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 642 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 644 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 646 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 650 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetSaveFileName */

/* 654 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 656 */	NdrFcLong( 0x0 ),	/* 0 */
/* 660 */	NdrFcShort( 0x10 ),	/* 16 */
/* 662 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 670 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 674 */	NdrFcShort( 0x1 ),	/* 1 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Filter */

/* 680 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 682 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 684 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FName */

/* 686 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 688 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 690 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 692 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 694 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 696 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 700 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetOpenFileNameExt */

/* 704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x11 ),	/* 17 */
/* 712 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 720 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Filter */

/* 730 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 732 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 734 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FName */

/* 736 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 738 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 740 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Dir */

/* 742 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 744 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 746 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Title */

/* 748 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 750 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 752 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 754 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 756 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 758 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 762 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetSaveFileNameExt */

/* 766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x12 ),	/* 18 */
/* 774 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 780 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 782 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 784 */	NdrFcShort( 0x1 ),	/* 1 */
/* 786 */	NdrFcShort( 0x1 ),	/* 1 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Filter */

/* 792 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 794 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 796 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter FName */

/* 798 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 800 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 802 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Dir */

/* 804 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 806 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 808 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Title */

/* 810 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 812 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 814 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 816 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 818 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 820 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 824 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetDirectory */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x13 ),	/* 19 */
/* 836 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 842 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 844 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter DName */

/* 854 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 856 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 858 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 860 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 862 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 864 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 868 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetDirectoryAlt */

/* 872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x14 ),	/* 20 */
/* 880 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 888 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Capt */

/* 898 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 900 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 902 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter Root */

/* 904 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 906 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 908 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter pVal */

/* 910 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 912 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 914 */	NdrFcShort( 0x3fa ),	/* Type Offset=1018 */

	/* Return value */

/* 916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 918 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GetColor */

/* 922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x15 ),	/* 21 */
/* 930 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 932 */	NdrFcShort( 0x10 ),	/* 16 */
/* 934 */	NdrFcShort( 0x2c ),	/* 44 */
/* 936 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 938 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */

	/* Parameter DefCol */

/* 948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 950 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 952 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 954 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 956 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 958 */	0xc,		/* FC_DOUBLE */
			0x0,		/* 0 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const DialogModule_MIDL_TYPE_FORMAT_STRING DialogModule__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0xe ),	/* Offset= 14 (18) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 18 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x8 ),	/* 8 */
/* 22 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (6) */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffde ),	/* Offset= -34 (2) */
/* 38 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 40 */	NdrFcShort( 0x3c4 ),	/* Offset= 964 (1004) */
/* 42 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 44 */	NdrFcShort( 0x2 ),	/* Offset= 2 (46) */
/* 46 */	
			0x13, 0x0,	/* FC_OP */
/* 48 */	NdrFcShort( 0x3aa ),	/* Offset= 938 (986) */
/* 50 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 52 */	NdrFcShort( 0x20 ),	/* 32 */
/* 54 */	NdrFcShort( 0xa ),	/* 10 */
/* 56 */	NdrFcLong( 0x8 ),	/* 8 */
/* 60 */	NdrFcShort( 0x50 ),	/* Offset= 80 (140) */
/* 62 */	NdrFcLong( 0xd ),	/* 13 */
/* 66 */	NdrFcShort( 0x82 ),	/* Offset= 130 (196) */
/* 68 */	NdrFcLong( 0x9 ),	/* 9 */
/* 72 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (252) */
/* 74 */	NdrFcLong( 0xc ),	/* 12 */
/* 78 */	NdrFcShort( 0x2a8 ),	/* Offset= 680 (758) */
/* 80 */	NdrFcLong( 0x24 ),	/* 36 */
/* 84 */	NdrFcShort( 0x2c8 ),	/* Offset= 712 (796) */
/* 86 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 90 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (830) */
/* 92 */	NdrFcLong( 0x10 ),	/* 16 */
/* 96 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (862) */
/* 98 */	NdrFcLong( 0x2 ),	/* 2 */
/* 102 */	NdrFcShort( 0x314 ),	/* Offset= 788 (890) */
/* 104 */	NdrFcLong( 0x3 ),	/* 3 */
/* 108 */	NdrFcShort( 0x32a ),	/* Offset= 810 (918) */
/* 110 */	NdrFcLong( 0x14 ),	/* 20 */
/* 114 */	NdrFcShort( 0x340 ),	/* Offset= 832 (946) */
/* 116 */	NdrFcShort( 0xffff ),	/* Offset= -1 (115) */
/* 118 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 128 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 132 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 134 */	
			0x13, 0x0,	/* FC_OP */
/* 136 */	NdrFcShort( 0xff8a ),	/* Offset= -118 (18) */
/* 138 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 140 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x10 ),	/* 16 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x6 ),	/* Offset= 6 (152) */
/* 148 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 150 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 152 */	
			0x11, 0x0,	/* FC_RP */
/* 154 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (118) */
/* 156 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 168 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 170 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 172 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 174 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 184 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 188 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 190 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (156) */
/* 194 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 196 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x6 ),	/* Offset= 6 (208) */
/* 204 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 206 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 208 */	
			0x11, 0x0,	/* FC_RP */
/* 210 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (174) */
/* 212 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 214 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 224 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 226 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 228 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 230 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 240 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 244 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 246 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 248 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (212) */
/* 250 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 252 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x6 ),	/* Offset= 6 (264) */
/* 260 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 262 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 264 */	
			0x11, 0x0,	/* FC_RP */
/* 266 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (230) */
/* 268 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 270 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 272 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 274 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (278) */
/* 278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 280 */	NdrFcShort( 0x2f ),	/* 47 */
/* 282 */	NdrFcLong( 0x14 ),	/* 20 */
/* 286 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 288 */	NdrFcLong( 0x3 ),	/* 3 */
/* 292 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 294 */	NdrFcLong( 0x11 ),	/* 17 */
/* 298 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 300 */	NdrFcLong( 0x2 ),	/* 2 */
/* 304 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 306 */	NdrFcLong( 0x4 ),	/* 4 */
/* 310 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 312 */	NdrFcLong( 0x5 ),	/* 5 */
/* 316 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 318 */	NdrFcLong( 0xb ),	/* 11 */
/* 322 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 324 */	NdrFcLong( 0xa ),	/* 10 */
/* 328 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 330 */	NdrFcLong( 0x6 ),	/* 6 */
/* 334 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (566) */
/* 336 */	NdrFcLong( 0x7 ),	/* 7 */
/* 340 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 342 */	NdrFcLong( 0x8 ),	/* 8 */
/* 346 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (572) */
/* 348 */	NdrFcLong( 0xd ),	/* 13 */
/* 352 */	NdrFcShort( 0xff3c ),	/* Offset= -196 (156) */
/* 354 */	NdrFcLong( 0x9 ),	/* 9 */
/* 358 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (212) */
/* 360 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 364 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (576) */
/* 366 */	NdrFcLong( 0x24 ),	/* 36 */
/* 370 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (584) */
/* 372 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 376 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (584) */
/* 378 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 382 */	NdrFcShort( 0x100 ),	/* Offset= 256 (638) */
/* 384 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 388 */	NdrFcShort( 0xfe ),	/* Offset= 254 (642) */
/* 390 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 394 */	NdrFcShort( 0xfc ),	/* Offset= 252 (646) */
/* 396 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 400 */	NdrFcShort( 0xfa ),	/* Offset= 250 (650) */
/* 402 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 406 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (654) */
/* 408 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 412 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (658) */
/* 414 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 418 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (642) */
/* 420 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 424 */	NdrFcShort( 0xde ),	/* Offset= 222 (646) */
/* 426 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 430 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (662) */
/* 432 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 436 */	NdrFcShort( 0xde ),	/* Offset= 222 (658) */
/* 438 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 442 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (666) */
/* 444 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 448 */	NdrFcShort( 0xde ),	/* Offset= 222 (670) */
/* 450 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 454 */	NdrFcShort( 0xdc ),	/* Offset= 220 (674) */
/* 456 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 460 */	NdrFcShort( 0xda ),	/* Offset= 218 (678) */
/* 462 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 466 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (690) */
/* 468 */	NdrFcLong( 0x10 ),	/* 16 */
/* 472 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 474 */	NdrFcLong( 0x12 ),	/* 18 */
/* 478 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 480 */	NdrFcLong( 0x13 ),	/* 19 */
/* 484 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 486 */	NdrFcLong( 0x15 ),	/* 21 */
/* 490 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 492 */	NdrFcLong( 0x16 ),	/* 22 */
/* 496 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 498 */	NdrFcLong( 0x17 ),	/* 23 */
/* 502 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 504 */	NdrFcLong( 0xe ),	/* 14 */
/* 508 */	NdrFcShort( 0xbe ),	/* Offset= 190 (698) */
/* 510 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 514 */	NdrFcShort( 0xc2 ),	/* Offset= 194 (708) */
/* 516 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 520 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (712) */
/* 522 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 526 */	NdrFcShort( 0x74 ),	/* Offset= 116 (642) */
/* 528 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 532 */	NdrFcShort( 0x72 ),	/* Offset= 114 (646) */
/* 534 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 538 */	NdrFcShort( 0x70 ),	/* Offset= 112 (650) */
/* 540 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 544 */	NdrFcShort( 0x66 ),	/* Offset= 102 (646) */
/* 546 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 550 */	NdrFcShort( 0x60 ),	/* Offset= 96 (646) */
/* 552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x0 ),	/* Offset= 0 (556) */
/* 558 */	NdrFcLong( 0x1 ),	/* 1 */
/* 562 */	NdrFcShort( 0x0 ),	/* Offset= 0 (562) */
/* 564 */	NdrFcShort( 0xffff ),	/* Offset= -1 (563) */
/* 566 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 570 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 572 */	
			0x13, 0x0,	/* FC_OP */
/* 574 */	NdrFcShort( 0xfdd4 ),	/* Offset= -556 (18) */
/* 576 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 578 */	NdrFcShort( 0x2 ),	/* Offset= 2 (580) */
/* 580 */	
			0x13, 0x0,	/* FC_OP */
/* 582 */	NdrFcShort( 0x194 ),	/* Offset= 404 (986) */
/* 584 */	
			0x13, 0x0,	/* FC_OP */
/* 586 */	NdrFcShort( 0x20 ),	/* Offset= 32 (618) */
/* 588 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 590 */	NdrFcLong( 0x2f ),	/* 47 */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 600 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 602 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 604 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 606 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 608 */	NdrFcShort( 0x1 ),	/* 1 */
/* 610 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 612 */	NdrFcShort( 0x4 ),	/* 4 */
/* 614 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 616 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 618 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 620 */	NdrFcShort( 0x18 ),	/* 24 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0xa ),	/* Offset= 10 (634) */
/* 626 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 628 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 630 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (588) */
/* 632 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 634 */	
			0x13, 0x0,	/* FC_OP */
/* 636 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (606) */
/* 638 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 640 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 642 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 644 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 646 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 648 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 650 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 652 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 654 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 656 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 658 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 660 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 662 */	
			0x13, 0x0,	/* FC_OP */
/* 664 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (566) */
/* 666 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 668 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (572) */
/* 670 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 672 */	NdrFcShort( 0xfdfc ),	/* Offset= -516 (156) */
/* 674 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 676 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (212) */
/* 678 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 680 */	NdrFcShort( 0x2 ),	/* Offset= 2 (682) */
/* 682 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 684 */	NdrFcShort( 0x2 ),	/* Offset= 2 (686) */
/* 686 */	
			0x13, 0x0,	/* FC_OP */
/* 688 */	NdrFcShort( 0x12a ),	/* Offset= 298 (986) */
/* 690 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (694) */
/* 694 */	
			0x13, 0x0,	/* FC_OP */
/* 696 */	NdrFcShort( 0x14 ),	/* Offset= 20 (716) */
/* 698 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 700 */	NdrFcShort( 0x10 ),	/* 16 */
/* 702 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 704 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 706 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 708 */	
			0x13, 0x0,	/* FC_OP */
/* 710 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (698) */
/* 712 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 714 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 716 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 718 */	NdrFcShort( 0x20 ),	/* 32 */
/* 720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 722 */	NdrFcShort( 0x0 ),	/* Offset= 0 (722) */
/* 724 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 726 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 728 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0xfe30 ),	/* Offset= -464 (268) */
/* 734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 736 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 740 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 746 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 750 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 752 */	
			0x13, 0x0,	/* FC_OP */
/* 754 */	NdrFcShort( 0xffda ),	/* Offset= -38 (716) */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x10 ),	/* 16 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x6 ),	/* Offset= 6 (770) */
/* 766 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 768 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 770 */	
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (736) */
/* 774 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 784 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 788 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 790 */	
			0x13, 0x0,	/* FC_OP */
/* 792 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (618) */
/* 794 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x6 ),	/* Offset= 6 (808) */
/* 804 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 806 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 808 */	
			0x11, 0x0,	/* FC_RP */
/* 810 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (774) */
/* 812 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 816 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 818 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 820 */	NdrFcShort( 0x10 ),	/* 16 */
/* 822 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 824 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 826 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (812) */
			0x5b,		/* FC_END */
/* 830 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 832 */	NdrFcShort( 0x20 ),	/* 32 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0xa ),	/* Offset= 10 (846) */
/* 838 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 840 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 842 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (818) */
			0x5b,		/* FC_END */
/* 846 */	
			0x11, 0x0,	/* FC_RP */
/* 848 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (174) */
/* 850 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 852 */	NdrFcShort( 0x1 ),	/* 1 */
/* 854 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 860 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 862 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 864 */	NdrFcShort( 0x10 ),	/* 16 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x6 ),	/* Offset= 6 (874) */
/* 870 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 872 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 874 */	
			0x13, 0x0,	/* FC_OP */
/* 876 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (850) */
/* 878 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 880 */	NdrFcShort( 0x2 ),	/* 2 */
/* 882 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 888 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 890 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x10 ),	/* 16 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x6 ),	/* Offset= 6 (902) */
/* 898 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 900 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 902 */	
			0x13, 0x0,	/* FC_OP */
/* 904 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (878) */
/* 906 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 918 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 920 */	NdrFcShort( 0x10 ),	/* 16 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x6 ),	/* Offset= 6 (930) */
/* 926 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 928 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 930 */	
			0x13, 0x0,	/* FC_OP */
/* 932 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (906) */
/* 934 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 944 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 946 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 948 */	NdrFcShort( 0x10 ),	/* 16 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x6 ),	/* Offset= 6 (958) */
/* 954 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 956 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 958 */	
			0x13, 0x0,	/* FC_OP */
/* 960 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (934) */
/* 962 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 966 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 968 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 970 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 976 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 978 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 980 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 982 */	NdrFcShort( 0xffec ),	/* Offset= -20 (962) */
/* 984 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 986 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 988 */	NdrFcShort( 0x38 ),	/* 56 */
/* 990 */	NdrFcShort( 0xffec ),	/* Offset= -20 (970) */
/* 992 */	NdrFcShort( 0x0 ),	/* Offset= 0 (992) */
/* 994 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 996 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 998 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1000 */	0x0,		/* 0 */
			NdrFcShort( 0xfc49 ),	/* Offset= -951 (50) */
			0x5b,		/* FC_END */
/* 1004 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0xfc36 ),	/* Offset= -970 (42) */
/* 1014 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1016 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1018) */
/* 1018 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0xfe3a ),	/* Offset= -454 (572) */
/* 1028 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1030 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IComponentRegistrar, ver. 0.0,
   GUID={0xa817e7a2,0x43fa,0x11d0,{0x9e,0x44,0x00,0xaa,0x00,0xb6,0x77,0x0a}} */

#pragma code_seg(".orpc")
static const unsigned short IComponentRegistrar_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    38,
    70,
    102,
    146,
    184
    };

static const MIDL_STUBLESS_PROXY_INFO IComponentRegistrar_ProxyInfo =
    {
    &Object_StubDesc,
    DialogModule__MIDL_ProcFormatString.Format,
    &IComponentRegistrar_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IComponentRegistrar_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DialogModule__MIDL_ProcFormatString.Format,
    &IComponentRegistrar_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) _IComponentRegistrarProxyVtbl = 
{
    &IComponentRegistrar_ProxyInfo,
    &IID_IComponentRegistrar,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::Attach */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::RegisterAll */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::UnregisterAll */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::GetComponents */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::RegisterComponent */ ,
    (void *) (INT_PTR) -1 /* IComponentRegistrar::UnregisterComponent */
};


static const PRPC_STUB_FUNCTION IComponentRegistrar_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IComponentRegistrarStubVtbl =
{
    &IID_IComponentRegistrar,
    &IComponentRegistrar_ServerInfo,
    13,
    &IComponentRegistrar_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IDialogModuleCtrl, ver. 0.0,
   GUID={0x41971e41,0x609f,0x4bcd,{0xb9,0x99,0xe7,0xca,0x4a,0x85,0xf6,0x6e}} */

#pragma code_seg(".orpc")
static const unsigned short IDialogModuleCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    222,
    266,
    310,
    354,
    404,
    454,
    504,
    554,
    604,
    654,
    704,
    766,
    828,
    872,
    922
    };

static const MIDL_STUBLESS_PROXY_INFO IDialogModuleCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    DialogModule__MIDL_ProcFormatString.Format,
    &IDialogModuleCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IDialogModuleCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DialogModule__MIDL_ProcFormatString.Format,
    &IDialogModuleCtrl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IDialogModuleCtrlProxyVtbl = 
{
    &IDialogModuleCtrl_ProxyInfo,
    &IID_IDialogModuleCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_WindowGetCaption */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_ShowMessage */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_ShowQuestion */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_ShowError */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetString */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetPassword */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetInteger */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetPasscode */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetOpenFileName */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetSaveFileName */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetOpenFileNameExt */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetSaveFileNameExt */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetDirectory */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetDirectoryAlt */ ,
    (void *) (INT_PTR) -1 /* IDialogModuleCtrl::get_GetColor */
};


static const PRPC_STUB_FUNCTION IDialogModuleCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IDialogModuleCtrlStubVtbl =
{
    &IID_IDialogModuleCtrl,
    &IDialogModuleCtrl_ServerInfo,
    22,
    &IDialogModuleCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    DialogModule__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _DialogModule_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDialogModuleCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IComponentRegistrarProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _DialogModule_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDialogModuleCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IComponentRegistrarStubVtbl,
    0
};

PCInterfaceName const _DialogModule_InterfaceNamesList[] = 
{
    "IDialogModuleCtrl",
    "IComponentRegistrar",
    0
};

const IID *  const _DialogModule_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _DialogModule_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DialogModule, pIID, n)

int __stdcall _DialogModule_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _DialogModule, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _DialogModule, 2, *pIndex )
    
}

const ExtendedProxyFileInfo DialogModule_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DialogModule_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DialogModule_StubVtblList,
    (const PCInterfaceName * ) & _DialogModule_InterfaceNamesList,
    (const IID ** ) & _DialogModule_BaseIIDList,
    & _DialogModule_IID_Lookup, 
    2,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

