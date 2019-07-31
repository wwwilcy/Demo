
// testMFCDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "testMFC.h"
#include "testMFCDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CtestMFCDlg 对话框



CtestMFCDlg::CtestMFCDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TESTMFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CtestMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CtestMFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_MFCBUTTON21, &CtestMFCDlg::OnBnClickedMfcbutton21)
	ON_BN_CLICKED(IDC_MFCBUTTON22, &CtestMFCDlg::OnBnClickedMfcbutton22)
	ON_BN_CLICKED(IDC_MFCBUTTON33, &CtestMFCDlg::OnBnClickedMfcbutton33)
	ON_BN_CLICKED(IDC_MFCBUTTON4, &CtestMFCDlg::OnBnClickedMfcbutton4)
	ON_BN_CLICKED(IDC_MFCBUTTON5, &CtestMFCDlg::OnBnClickedMfcbutton5)
	ON_BN_CLICKED(IDC_MFCBUTTON6, &CtestMFCDlg::OnBnClickedMfcbutton6)
	ON_BN_CLICKED(IDC_MFCBUTTON7, &CtestMFCDlg::OnBnClickedMfcbutton7)
	ON_BN_CLICKED(IDC_MFCBUTTON8, &CtestMFCDlg::OnBnClickedMfcbutton8)
	ON_BN_CLICKED(IDC_MFCBUTTON9, &CtestMFCDlg::OnBnClickedMfcbutton9)
	ON_BN_CLICKED(IDC_MFCBUTTON16, &CtestMFCDlg::OnBnClickedMfcbutton16)
	ON_BN_CLICKED(IDC_MFCBUTTON17, &CtestMFCDlg::OnBnClickedMfcbutton17)
	ON_BN_CLICKED(IDC_MFCBUTTON10, &CtestMFCDlg::OnBnClickedMfcbutton10)
	ON_BN_CLICKED(IDC_MFCBUTTON12, &CtestMFCDlg::OnBnClickedMfcbutton12)
	ON_BN_CLICKED(IDC_MFCBUTTON11, &CtestMFCDlg::OnBnClickedMfcbutton11)
	ON_BN_CLICKED(IDC_MFCBUTTON18, &CtestMFCDlg::OnBnClickedMfcbutton18)
	ON_BN_CLICKED(IDC_MFCBUTTON13, &CtestMFCDlg::OnBnClickedMfcbutton13)
	ON_BN_CLICKED(IDC_MFCBUTTON14, &CtestMFCDlg::OnBnClickedMfcbutton14)
	ON_BN_CLICKED(IDC_MFCBUTTON15, &CtestMFCDlg::OnBnClickedMfcbutton15)
	ON_BN_CLICKED(IDC_MFCBUTTON19, &CtestMFCDlg::OnBnClickedMfcbutton19)
	ON_EN_CHANGE(IDC_EDIT1, &CtestMFCDlg::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CtestMFCDlg 消息处理程序

BOOL CtestMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CtestMFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CtestMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CtestMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CtestMFCDlg::OnBnClickedMfcbutton21()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1,str);
	GetDlgItemText(IDC_EDIT1,str+_T("1"));	
}


void CtestMFCDlg::OnBnClickedMfcbutton22()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("2"));
}


void CtestMFCDlg::OnBnClickedMfcbutton33()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("3"));
}


void CtestMFCDlg::OnBnClickedMfcbutton4()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("4"));
}


void CtestMFCDlg::OnBnClickedMfcbutton5()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("5"));
}


void CtestMFCDlg::OnBnClickedMfcbutton6()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("6"));
}


void CtestMFCDlg::OnBnClickedMfcbutton7()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("7"));
}


void CtestMFCDlg::OnBnClickedMfcbutton8()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("8"));
}


void CtestMFCDlg::OnBnClickedMfcbutton9()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("9"));
}


void CtestMFCDlg::OnBnClickedMfcbutton16()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("0"));
}


void CtestMFCDlg::OnBnClickedMfcbutton17()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("."));
}


void CtestMFCDlg::OnBnClickedMfcbutton10()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("+"));
}


void CtestMFCDlg::OnBnClickedMfcbutton12()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("-"));
}


void CtestMFCDlg::OnBnClickedMfcbutton11()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("*"));
}


void CtestMFCDlg::OnBnClickedMfcbutton18()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("/"));
}


void CtestMFCDlg::OnBnClickedMfcbutton13()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("C"));
}


void CtestMFCDlg::OnBnClickedMfcbutton14()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("BACKSPACE"));
}


void CtestMFCDlg::OnBnClickedMfcbutton15()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("%"));
}


void CtestMFCDlg::OnBnClickedMfcbutton19()
{
	// TODO: 在此添加控件通知处理程序代码
	CString str = NULL;
	GetDlgItemText(IDC_EDIT1, str);
	GetDlgItemText(IDC_EDIT1, str + _T("="));
}


void CtestMFCDlg::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}
