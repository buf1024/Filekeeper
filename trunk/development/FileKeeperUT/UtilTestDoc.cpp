
// UtilTestDoc.cpp : CUtilTestDoc ���ʵ��
//

#include "stdafx.h"
#include "UtilTest.h"

#include "UtilTestDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUtilTestDoc

IMPLEMENT_DYNCREATE(CUtilTestDoc, CDocument)

BEGIN_MESSAGE_MAP(CUtilTestDoc, CDocument)
END_MESSAGE_MAP()


// CUtilTestDoc ����/����

CUtilTestDoc::CUtilTestDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CUtilTestDoc::~CUtilTestDoc()
{
}

BOOL CUtilTestDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CUtilTestDoc ���л�

void CUtilTestDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CUtilTestDoc ���

#ifdef _DEBUG
void CUtilTestDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CUtilTestDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CUtilTestDoc ����
