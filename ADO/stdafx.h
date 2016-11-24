
// stdafx.h: §Ó§Ü§Ý§ð§é§Ú§ä§Ö §æ§Ñ§Û§Ý §Õ§Ý§ñ §Õ§à§Ò§Ñ§Ó§Ý§Ö§ß§Ú§ñ §ã§ä§Ñ§ß§Õ§Ñ§â§ä§ß§í§ç §ã§Ú§ã§ä§Ö§Þ§ß§í§ç §æ§Ñ§Û§Ý§à§Ó
//§Ú§Ý§Ú §Ü§à§ß§Ü§â§Ö§ä§ß§í§ç §æ§Ñ§Û§Ý§à§Ó §á§â§à§Ö§Ü§ä§à§Ó, §é§Ñ§ã§ä§à §Ú§ã§á§à§Ý§î§Ù§å§Ö§Þ§í§ç,
// §ß§à §â§Ö§Õ§Ü§à §Ú§Ù§Þ§Ö§ß§ñ§Ö§Þ§í§ç

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // §ª§ã§Ü§Ý§ð§é§Ú§ä§Ö §â§Ö§Õ§Ü§à §Ú§ã§á§à§Ý§î§Ù§å§Ö§Þ§í§Ö §Ü§à§Þ§á§à§ß§Ö§ß§ä§í §Ú§Ù §Ù§Ñ§Ô§à§Ý§à§Ó§Ü§à§Ó Windows
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // §ß§Ö§Ü§à§ä§à§â§í§Ö §Ü§à§ß§ã§ä§â§å§Ü§ä§à§â§í CString §Ò§å§Õ§å§ä §ñ§Ó§ß§í§Þ§Ú

// §à§ä§Ü§Ý§ð§é§Ñ§Ö§ä §æ§å§ß§Ü§è§Ú§ð §ã§Ü§â§í§ä§Ú§ñ §ß§Ö§Ü§à§ä§à§â§í§ç §à§Ò§ë§Ú§ç §Ú §é§Ñ§ã§ä§à §á§â§à§á§å§ã§Ü§Ñ§Ö§Þ§í§ç §á§â§Ö§Õ§å§á§â§Ö§Ø§Õ§Ö§ß§Ú§Û MFC
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // §à§ã§ß§à§Ó§ß§í§Ö §Ú §ã§ä§Ñ§ß§Õ§Ñ§â§ä§ß§í§Ö §Ü§à§Þ§á§à§ß§Ö§ß§ä§í MFC
#include <afxext.h>         // §â§Ñ§ã§ê§Ú§â§Ö§ß§Ú§ñ MFC


#include <afxdisp.h>        // §Ü§Ý§Ñ§ã§ã§í §Ñ§Ó§ä§à§Þ§Ñ§ä§Ú§Ù§Ñ§è§Ú§Ú MFC



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // §á§à§Õ§Õ§Ö§â§Ø§Ü§Ñ MFC §Õ§Ý§ñ §ä§Ú§á§à§Ó§í§ç §ï§Ý§Ö§Þ§Ö§ß§ä§à§Ó §å§á§â§Ñ§Ó§Ý§Ö§ß§Ú§ñ Internet Explorer 4
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // §á§à§Õ§Õ§Ö§â§Ø§Ü§Ñ MFC §Õ§Ý§ñ §ä§Ú§á§à§Ó§í§ç §ï§Ý§Ö§Þ§Ö§ß§ä§à§Ó §å§á§â§Ñ§Ó§Ý§Ö§ß§Ú§ñ Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // §á§à§Õ§Õ§Ö§â§Ø§Ü§Ñ MFC §Õ§Ý§ñ §Ý§Ö§ß§ä §Ú §á§Ñ§ß§Ö§Ý§Ö§Û §å§á§â§Ñ§Ó§Ý§Ö§ß§Ú§ñ

#import ".\msado15.dll"\
	no_namespace\
	rename("EOF", "adoEOF")







#ifdef _UNICODE
#if defined _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif


