
// ADODlg.h : §æ§Ñ§Û§Ý §Ù§Ñ§Ô§à§Ý§à§Ó§Ü§Ñ
//

#pragma once


// §Õ§Ú§Ñ§Ý§à§Ô§à§Ó§à§Ö §à§Ü§ß§à CADODlg
class CADODlg : public CDialogEx
{
// §³§à§Ù§Õ§Ñ§ß§Ú§Ö
public:
	CADODlg(CWnd* pParent = NULL);	// §ã§ä§Ñ§ß§Õ§Ñ§â§ä§ß§í§Û §Ü§à§ß§ã§ä§â§å§Ü§ä§à§â

// §¥§Ñ§ß§ß§í§Ö §Õ§Ú§Ñ§Ý§à§Ô§à§Ó§à§Ô§à §à§Ü§ß§Ñ
	enum { IDD = IDD_ADO_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// §á§à§Õ§Õ§Ö§â§Ø§Ü§Ñ DDX/DDV


// §²§Ö§Ñ§Ý§Ú§Ù§Ñ§è§Ú§ñ
protected:
	HICON m_hIcon;

	// §³§à§Ù§Õ§Ñ§ß§ß§í§Ö §æ§å§ß§Ü§è§Ú§Ú §ã§ç§Ö§Þ§í §ã§à§à§Ò§ë§Ö§ß§Ú§Û
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
