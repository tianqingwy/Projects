
// stdafx.h: �ӧܧݧ��ڧ�� ��ѧۧ� �էݧ� �է�ҧѧӧݧ֧ߧڧ� ���ѧߧէѧ��ߧ�� ��ڧ��֧ާߧ�� ��ѧۧݧ��
//�ڧݧ� �ܧ�ߧܧ�֧�ߧ�� ��ѧۧݧ�� ����֧ܧ���, ��ѧ��� �ڧ���ݧ�٧�֧ާ��,
// �ߧ� ��֧էܧ� �ڧ٧ާ֧ߧ�֧ާ��

#pragma once

#ifndef _SECURE_ATL
#define _SECURE_ATL 1
#endif

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // ����ܧݧ��ڧ�� ��֧էܧ� �ڧ���ݧ�٧�֧ާ�� �ܧ�ާ��ߧ֧ߧ�� �ڧ� �٧ѧԧ�ݧ�ӧܧ�� Windows
#endif

#include "targetver.h"

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // �ߧ֧ܧ������ �ܧ�ߧ����ܧ���� CString �ҧ�է�� ��ӧߧ�ާ�

// ���ܧݧ��ѧ֧� ���ߧܧ�ڧ� ��ܧ���ڧ� �ߧ֧ܧ������ ��ҧ�ڧ� �� ��ѧ��� �������ܧѧ֧ާ�� ���֧է���֧اէ֧ߧڧ� MFC
#define _AFX_ALL_WARNINGS

#include <afxwin.h>         // ���ߧ�ӧߧ�� �� ���ѧߧէѧ��ߧ�� �ܧ�ާ��ߧ֧ߧ�� MFC
#include <afxext.h>         // ��ѧ��ڧ�֧ߧڧ� MFC


#include <afxdisp.h>        // �ܧݧѧ��� �ѧӧ��ާѧ�ڧ٧ѧ�ڧ� MFC



#ifndef _AFX_NO_OLE_SUPPORT
#include <afxdtctl.h>           // ���էէ֧�اܧ� MFC �էݧ� ��ڧ��ӧ�� ��ݧ֧ާ֧ߧ��� ����ѧӧݧ֧ߧڧ� Internet Explorer 4
#endif
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>             // ���էէ֧�اܧ� MFC �էݧ� ��ڧ��ӧ�� ��ݧ֧ާ֧ߧ��� ����ѧӧݧ֧ߧڧ� Windows
#endif // _AFX_NO_AFXCMN_SUPPORT

#include <afxcontrolbars.h>     // ���էէ֧�اܧ� MFC �էݧ� �ݧ֧ߧ� �� ��ѧߧ֧ݧ֧� ����ѧӧݧ֧ߧڧ�

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


