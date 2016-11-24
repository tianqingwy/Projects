
// ADODlg.h : ��ѧۧ� �٧ѧԧ�ݧ�ӧܧ�
//

#pragma once


// �էڧѧݧ�ԧ�ӧ�� ��ܧߧ� CADODlg
class CADODlg : public CDialogEx
{
// ����٧էѧߧڧ�
public:
	CADODlg(CWnd* pParent = NULL);	// ���ѧߧէѧ��ߧ�� �ܧ�ߧ����ܧ���

// ���ѧߧߧ�� �էڧѧݧ�ԧ�ӧ�ԧ� ��ܧߧ�
	enum { IDD = IDD_ADO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// ���էէ֧�اܧ� DDX/DDV


// ���֧ѧݧڧ٧ѧ�ڧ�
protected:
	HICON m_hIcon;

	// ����٧էѧߧߧ�� ���ߧܧ�ڧ� ���֧ާ� ����ҧ�֧ߧڧ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	_ConnectionPtr m_pConnection;
	_RecordsetPtr m_pRecordset;
public:
	BOOL OpenDatabase(LPCTSTR lpszConnect, long nOptions=adConnectUnspecified);
	BOOL CloseDatabase();
	BOOL OpenRecordset(LPCTSTR lpszSource, long nCursorType=adOpenDynamic, long nLockType=adLockOptimistic, long nOptions=adCmdText);
	BOOL CloseRecorset();
};
