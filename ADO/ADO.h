
// ADO.h : �ԧݧѧӧߧ�� ��ѧۧ� �٧ѧԧ�ݧ�ӧܧ� �էݧ� ���ڧݧ�ا֧ߧڧ� PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ӧܧݧ��ڧ�� stdafx.h �է� �ӧܧݧ��֧ߧڧ� ����ԧ� ��ѧۧݧ� �� PCH"
#endif

#include "resource.h"		// ���ߧ�ӧߧ�� ��ڧާӧ�ݧ�


// CADOApp:
// �� ��֧ѧݧڧ٧ѧ�ڧ� �էѧߧߧ�ԧ� �ܧݧѧ��� ���. ADO.cpp
//

class CADOApp : public CWinApp
{
public:
	CADOApp();

// ���֧�֧���֧է֧ݧ֧ߧڧ�
public:
	virtual BOOL InitInstance();

// ���֧ѧݧڧ٧ѧ�ڧ�

	DECLARE_MESSAGE_MAP()
};

extern CADOApp theApp;