
// UtilTest.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "UtilTest.h"
#include "MainFrm.h"

#include "UtilTestDoc.h"
#include "UtilTestView.h"

#include <cppunit.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUtilTestApp

BEGIN_MESSAGE_MAP(CUtilTestApp, CWinApp)
	ON_COMMAND(ID_APP_ABOUT, &CUtilTestApp::OnAppAbout)
	// �����ļ��ı�׼�ĵ�����
	ON_COMMAND(ID_FILE_NEW, &CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CWinApp::OnFileOpen)
	// ��׼��ӡ��������
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinApp::OnFilePrintSetup)
END_MESSAGE_MAP()


// CUtilTestApp ����

CUtilTestApp::CUtilTestApp()
{

	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}

// Ψһ��һ�� CUtilTestApp ����

CUtilTestApp theApp;


// CUtilTestApp ��ʼ��

BOOL CUtilTestApp::InitInstance()
{
	CWinApp::InitInstance();
	RunUnitTest();
	return FALSE;
}



// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

// �������жԻ����Ӧ�ó�������
void CUtilTestApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// CUtilTestApp ��Ϣ�������



void CUtilTestApp::RunUnitTest()
{
	CppUnit::MfcUi::TestRunner runner;
	CppUnit::TestFactoryRegistry& reg = CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest(reg.makeTest());
	runner.run();
}

