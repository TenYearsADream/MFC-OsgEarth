
// DigitalEarth.h : DigitalEarth Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDigitalEarthApp:
// �йش����ʵ�֣������ DigitalEarth.cpp
//

class CDigitalEarthApp : public CWinApp
{
public:
	CDigitalEarthApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	UINT  m_nAppLook;
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDigitalEarthApp theApp;
