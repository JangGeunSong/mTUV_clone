// CYuvConfDlg.cpp: 구현 파일
//

#include "pch.h"
#include "mYUV.h"
#include "CYuvConfDlg.h"
#include "afxdialogex.h"


// CYuvConfDlg 대화 상자

IMPLEMENT_DYNAMIC(CYuvConfDlg, CDialogEx)

CYuvConfDlg::CYuvConfDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CYuvConfDlg::~CYuvConfDlg()
{
}

void CYuvConfDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CYuvConfDlg, CDialogEx)
END_MESSAGE_MAP()


// CYuvConfDlg 메시지 처리기
