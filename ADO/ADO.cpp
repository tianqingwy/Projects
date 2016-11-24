
// ADO.cpp : �����֧է֧ݧ�֧� ���ӧ֧է֧ߧڧ� �ܧݧѧ���� �էݧ� ���ڧݧ�ا֧ߧڧ�.
//

#include "stdafx.h"
#include "ADO.h"
#include "ADODlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CADOApp

BEGIN_MESSAGE_MAP(CADOApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// ���٧էѧߧڧ� CADOApp

CADOApp::CADOApp()
{
	// ���էէ֧�اܧ� �էڧ��֧��֧�� ��֧�֧٧ѧԧ��٧ܧ�
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: �է�ҧѧӧ��� �ܧ�� ���٧էѧߧڧ�,
	// ���ѧ٧ާ֧�ѧ֧� �ӧ֧�� �ӧѧاߧ�� �ܧ�� �ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ� �� InitInstance
}


// ���էڧߧ��ӧ֧ߧߧ�� ��ҧ�֧ܧ� CADOApp

CADOApp theApp;


// �ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ� CADOApp

BOOL CADOApp::InitInstance()
{
	// InitCommonControlsEx() ���֧ҧ�֧��� �էݧ� Windows XP, �֧�ݧ� �ާѧߧڧ�֧��
	// ���ڧݧ�ا֧ߧڧ� �ڧ���ݧ�٧�֧� ComCtl32.dll �ӧ֧��ڧ� 6 �ڧݧ� �ҧ�ݧ֧� ���٧էߧ֧� �ӧ֧��ڧ� �էݧ� �ӧܧݧ��֧ߧڧ�
	// ���ڧݧ֧� ����ҧ�ѧا֧ߧڧ�. �� �����ڧӧߧ�� ��ݧ��ѧ� �ҧ�է֧� �ӧ�٧ߧڧܧѧ�� ��ҧ�� ���� ���٧էѧߧڧ� �ݧ�ҧ�ԧ� ��ܧߧ�.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ����ҧ֧�ڧ�� ����� ��ѧ�ѧާ֧�� �էݧ� �ӧܧݧ��֧ߧڧ� �ӧ�֧� ��ҧ�ڧ� �ܧݧѧ���� ����ѧӧݧ֧ߧڧ�, �ܧ������ �ߧ֧�ҧ��էڧާ� �ڧ���ݧ�٧�ӧѧ��
	// �� �ӧѧ�֧� ���ڧݧ�ا֧ߧڧ�.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// ����٧էѧ�� �էڧ��֧��֧� ��ҧ�ݧ��ܧ�, �� ��ݧ��ѧ�, �֧�ݧ� �էڧѧݧ�ԧ�ӧ�� ��ܧߧ� ���է֧�اڧ�
	// ���֧է��ѧӧݧ֧ߧڧ� �է֧�֧ӧ� ��ҧ�ݧ��ܧ� �ڧݧ� �ܧѧܧڧ�-�ݧڧҧ� �֧ԧ� ��ݧ֧ާ֧ߧ�� ����ѧӧݧ֧ߧڧ�.
	CShellManager *pShellManager = new CShellManager;

	// ����ѧߧէѧ��ߧѧ� �ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ�
	// ����ݧ� ���� �ӧ�٧ާ�اߧ���� �ߧ� �ڧ���ݧ�٧����� �� �ߧ֧�ҧ��էڧާ� ��ާ֧ߧ��ڧ�� ��ѧ٧ާ֧�
	// �ܧ�ߧ֧�ߧ�ԧ� �ڧ���ݧߧ�֧ާ�ԧ� ��ѧۧݧ�, �ߧ֧�ҧ��էڧާ� ��էѧݧڧ�� �ڧ� ��ݧ֧է���ڧ�
	// �ܧ�ߧܧ�֧�ߧ�� �����֧է�� �ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ�, �ܧ������ �ߧ� ���֧ҧ�����
	// ���٧ާ֧ߧڧ�� ��ѧ٧է֧� ��֧֧����, �� �ܧ������ ���ѧߧ���� ��ѧ�ѧާ֧���
	// TODO: ��ݧ֧է�֧� �ڧ٧ާ֧ߧڧ�� ���� �����ܧ� �ߧ� ����-�ߧڧҧ�է� ���է��է��֧�,
	// �ߧѧ��ڧާ֧� �ߧ� �ߧѧ٧ӧѧߧڧ� ���ԧѧߧڧ٧ѧ�ڧ�
	SetRegistryKey(_T("����ܧѧݧ�ߧ�� ���ڧݧ�ا֧ߧڧ�, ���٧էѧߧߧ�� �� ���ާ���� �ާѧ��֧�� ���ڧݧ�ا֧ߧڧ�"));

	CADODlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: ���ӧ֧էڧ�� �ܧ�� �էݧ� ��ҧ�ѧҧ��ܧ� �٧ѧܧ���ڧ� �էڧѧݧ�ԧ�ӧ�ԧ� ��ܧߧ�
		//  �� ���ާ���� �ܧߧ��ܧ� "����"
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: ���ӧ֧էڧ�� �ܧ�� �էݧ� ��ҧ�ѧҧ��ܧ� �٧ѧܧ���ڧ� �էڧѧݧ�ԧ�ӧ�ԧ� ��ܧߧ�
		//  �� ���ާ���� �ܧߧ��ܧ� "����ާ֧ߧ�"
	}

	// ���էѧݧڧ�� �էڧ��֧��֧� ��ҧ�ݧ��ܧ�, ���٧էѧߧߧ�� �ӧ���.
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// �����ܧ�ݧ�ܧ� �էڧѧݧ�ԧ�ӧ�� ��ܧߧ� �٧ѧܧ����, �ӧ�٧ӧ�ѧ�ڧ�� �٧ߧѧ�֧ߧڧ� FALSE, ����ҧ� �ާ�اߧ� �ҧ�ݧ� �ӧ�ۧ�� �ڧ�
	//  ���ڧݧ�ا֧ߧڧ� �ӧާ֧��� �٧ѧ���ܧ� �ԧ֧ߧ֧�ѧ���� ����ҧ�֧ߧڧ� ���ڧݧ�ا֧ߧڧ�.
	return FALSE;
}

