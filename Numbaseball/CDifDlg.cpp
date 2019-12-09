// CDifDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Numbaseball.h"
#include "CDifDlg.h"
#include "afxdialogex.h"


// CDifDlg 대화 상자

IMPLEMENT_DYNAMIC(CDifDlg, CDialogEx)

CDifDlg::CDifDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{
	
}

CDifDlg::~CDifDlg()
{
}

void CDifDlg::DoDataExchange(CDataExchange* pDX)
{
	((CButton*)GetDlgItem(IDC_RADIO1))->SetCheck(1);
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDifDlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CDifDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CDifDlg 메시지 처리기
#include "NumbaseballDlg.h"

void CDifDlg::OnBnClickedButton1()
{
	CNumbaseballDlg* p = (CNumbaseballDlg*)GetParent();

	if (IsDlgButtonChecked(IDC_RADIO1)) {
		p->hard = 4;
	}
	else if (IsDlgButtonChecked(IDC_RADIO2)) {
		p->hard = 5;
	}
	else if(IsDlgButtonChecked(IDC_RADIO3))
	{
		p->hard = 6;
	}
	else {
		p->hard = 4;
	}

	DestroyWindow();
}
