#pragma once


// NewDailog dialog

class NewDailog : public CDialogEx
{
	DECLARE_DYNAMIC(NewDailog)

public:
	NewDailog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~NewDailog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
