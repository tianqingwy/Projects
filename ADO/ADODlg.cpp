
// ADODlg.cpp : ��ѧۧ� ��֧ѧݧڧ٧ѧ�ڧ�
//

#include "stdafx.h"
#include "ADO.h"
#include "ADODlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ���ڧѧݧ�ԧ�ӧ�� ��ܧߧ� CAboutDlg �ڧ���ݧ�٧�֧��� �էݧ� ���ڧ�ѧߧڧ� ��ӧ֧է֧ߧڧ� �� ���ڧݧ�ا֧ߧڧ�

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// ���ѧߧߧ�� �էڧѧݧ�ԧ�ӧ�ԧ� ��ܧߧ�
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // ���էէ֧�اܧ� DDX/DDV

// ���֧ѧݧڧ٧ѧ�ڧ�
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// �էڧѧݧ�ԧ�ӧ�� ��ܧߧ� CADODlg




CADODlg::CADODlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CADODlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CADODlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CADODlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
END_MESSAGE_MAP()


// ��ҧ�ѧҧ���ڧܧ� ����ҧ�֧ߧڧ� CADODlg

BOOL CADODlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ����ҧѧӧݧ֧ߧڧ� ���ߧܧ�� "�� ����ԧ�ѧާާ�..." �� ��ڧ��֧ާߧ�� �ާ֧ߧ�.

	// IDM_ABOUTBOX �է�ݧا֧� �ҧ��� �� ���֧է֧ݧѧ� ��ڧ��֧ާߧ�� �ܧ�ާѧߧէ�.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ѧէѧ֧� �٧ߧѧ��� �էݧ� ����ԧ� �էڧѧݧ�ԧ�ӧ�ԧ� ��ܧߧ�. ����֧է� �է֧ݧѧ֧� ���� �ѧӧ��ާѧ�ڧ�֧�ܧ�,
	//  �֧�ݧ� �ԧݧѧӧߧ�� ��ܧߧ� ���ڧݧ�ا֧ߧڧ� �ߧ� ��ӧݧ�֧��� �էڧѧݧ�ԧ�ӧ��
	SetIcon(m_hIcon, TRUE);			// ������ߧ�� �٧ߧѧ���
	SetIcon(m_hIcon, FALSE);		// ���֧ݧܧڧ� �٧ߧѧ���

	// TODO: �է�ҧѧӧ��� �է���ݧߧڧ�֧ݧ�ߧ�� �ڧߧڧ�ڧѧݧڧ٧ѧ�ڧ�

	if (!SUCCEEDED(CoInitialize(NULL)))
	{
		::AfxMessageBox(_T("Failed to initialize COM!"));
		return FALSE;
	}

	if (!SUCCEEDED(m_pConnection.CreateInstance(__uuidof(Connection))))
	{
		m_pConnection = NULL;
		TRACE(_T("Database CreateInstance failed"));
	}

	if (!SUCCEEDED(m_pRecordset.CreateInstance(__uuidof(Recordset))))
	{
		m_pRecordset = NULL;
		TRACE(_T("Recordset CreateInstance Failed!"));
	}

	//�����ݿ�
	CString strConnect;
	strConnect.Format(_T("Provider=Microsoft.Ace.Oledb.12.0;Data Source=%s;Jet OLEDB:Database Password=%s"), "demo.accdb", ",.");
	if (!OpenDatabase(strConnect))
	{
		AfxMessageBox(_T("���ݿ��ʧ�ܡ�"));
		return FALSE;
	}

	//�򿪼�¼��
	if (!OpenRecordset(_T("SELECT * FROM OK")))
	{
		AfxMessageBox(_T("��¼����ʧ�ܡ�"));
		return FALSE;
	}


	return TRUE;  // �ӧ�٧ӧ�ѧ� �٧ߧѧ�֧ߧڧ� TRUE, �֧�ݧ� ���ܧ�� �ߧ� ��֧�֧էѧ� ��ݧ֧ާ֧ߧ�� ����ѧӧݧ֧ߧڧ�
}

void CADODlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// ����� �է�ҧѧӧݧ֧ߧڧ� �ܧߧ��ܧ� ��ӧ֧���ӧѧߧڧ� �� �էڧѧݧ�ԧ�ӧ�� ��ܧߧ� �ߧ�اߧ� �ӧ����ݧ�٧�ӧѧ���� ���ڧӧ֧է֧ߧߧ�� �ߧڧا� �ܧ�է��,
//  ����ҧ� �ߧѧ�ڧ��ӧѧ�� �٧ߧѧ���. ���ݧ� ���ڧݧ�ا֧ߧڧ� MFC, �ڧ���ݧ�٧���ڧ� �ާ�է֧ݧ� �է�ܧ�ާ֧ߧ��� �ڧݧ� ���֧է��ѧӧݧ֧ߧڧ�,
//  ���� �ѧӧ��ާѧ�ڧ�֧�ܧ� �ӧ���ݧߧ�֧��� ��ѧҧ��֧� ��ҧݧѧ����.

void CADODlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // �ܧ�ߧ�֧ܧ�� ������ۧ��ӧ� �էݧ� ��ڧ��ӧѧߧڧ�

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// �����ѧӧߧڧӧѧߧڧ� �٧ߧѧ�ܧ� ��� ��֧ߧ��� �ܧݧڧ֧ߧ��ܧ�ԧ� ����ާ��ԧ�ݧ�ߧڧܧ�
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ���ѧ�ڧ��ۧ�� �٧ߧѧ���
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// ���ڧ��֧ާ� �ӧ�٧�ӧѧ֧� ���� ���ߧܧ�ڧ� �էݧ� ���ݧ��֧ߧڧ� ����ҧ�ѧا֧ߧڧ� �ܧ������ ���� ��֧�֧ާ֧�֧ߧڧ�
//  ��ӧ֧�ߧ���ԧ� ��ܧߧ�.
HCURSOR CADODlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

BOOL CADODlg::OpenDatabase(LPCTSTR lpszConnect, long nOptions)
{
	ASSERT(m_pConnection != NULL);
	ASSERT(lpszConnect != NULL);
	ASSERT(AfxIsValidString(lpszConnect));

	//�����ݿ�����
	try
	{
		return SUCCEEDED(m_pConnection->Open(_bstr_t(lpszConnect), 
			_T(""), _T(""), nOptions));
	}
	catch (_com_error& e)
	{
		TRACE(_T("%s\n"), e.ErrorMessage());
		return FALSE;
	}
}

BOOL CADODlg::OpenRecordset(LPCTSTR lpszSource, long nCursorType, long nLockType, long nOptions)
{
	ASSERT(m_pConnection != NULL);
	ASSERT(m_pRecordset != NULL);
	ASSERT(lpszSource != NULL);
	ASSERT(AfxIsValidString(lpszSource));

	//�򿪼�¼��
	try
	{
		return (SUCCEEDED(m_pRecordset->Open(_variant_t(lpszSource),
			m_pConnection.GetInterfacePtr(),
			(CursorTypeEnum)nCursorType, 
			(LockTypeEnum)nLockType,
			nOptions)));
	}
	catch(_com_error e)
	{
		TRACE(_T("%s\n"), e.ErrorMessage());
		return FALSE;
	}
}