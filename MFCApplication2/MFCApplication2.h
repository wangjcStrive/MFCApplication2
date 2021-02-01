
// MFCApplication2.h : main header file for the MFCApplication2 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFCApplication2App:
// See MFCApplication2.cpp for the implementation of this class
//

class CMFCApplication2App : public CWinAppEx
{
public:
	CMFCApplication2App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	afx_msg void OnAddNew();
	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication2App theApp;
