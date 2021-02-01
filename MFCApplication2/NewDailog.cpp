// NewDailog.cpp : implementation file
//

#include "pch.h"
#include "MFCApplication2.h"
#include "NewDailog.h"
#include "afxdialogex.h"


// NewDailog dialog

IMPLEMENT_DYNAMIC(NewDailog, CDialogEx)

NewDailog::NewDailog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

NewDailog::~NewDailog()
{
}

void NewDailog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(NewDailog, CDialogEx)
END_MESSAGE_MAP()


// NewDailog message handlers
