
// testMFCDlg.h: 头文件
//

#pragma once


// CtestMFCDlg 对话框
class CtestMFCDlg : public CDialogEx
{
// 构造
public:
	CtestMFCDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TESTMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMfcbutton1();
	afx_msg void OnBnClickedMfcbutton2();
	afx_msg void OnBnClickedMfcbutton3();
	afx_msg void OnBnClickedMfcbutton21();
	afx_msg void OnBnClickedMfcbutton22();
	afx_msg void OnBnClickedMfcbutton33();
	afx_msg void OnBnClickedMfcbutton4();
	afx_msg void OnBnClickedMfcbutton5();
	afx_msg void OnBnClickedMfcbutton6();
	afx_msg void OnBnClickedMfcbutton7();
	afx_msg void OnBnClickedMfcbutton8();
	afx_msg void OnBnClickedMfcbutton9();
	afx_msg void OnBnClickedMfcbutton16();
	afx_msg void OnBnClickedMfcbutton17();
	afx_msg void OnBnClickedMfcbutton10();
	afx_msg void OnBnClickedMfcbutton12();
	afx_msg void OnBnClickedMfcbutton11();
	afx_msg void OnBnClickedMfcbutton18();
	afx_msg void OnBnClickedMfcbutton13();
	afx_msg void OnBnClickedMfcbutton14();
	afx_msg void OnBnClickedMfcbutton15();
	afx_msg void OnBnClickedMfcbutton19();
	afx_msg void OnEnChangeEdit1();
};
