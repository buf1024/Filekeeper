
// UtilTest.h : UtilTest Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CUtilTestApp:
// �йش����ʵ�֣������ UtilTest.cpp
//

class CUtilTestApp : public CWinApp
{
public:
	CUtilTestApp();

	void RunUnitTest();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CUtilTestApp theApp;
