#pragma once


// CYuvConfDlg 대화 상자

class CYuvConfDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CYuvConfDlg)

public:
	CYuvConfDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CYuvConfDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	// 너비 값
	int m_iWidth;
	// 높이 값
	int m_iHeight;
	// 라디오버튼_1
	int m_iRGB444;
	// 라디오버튼_2
	int m_iYUV420;
	// 라디오버튼_3
	int m_iYUV400;
};
