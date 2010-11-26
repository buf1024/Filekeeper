
// UtilTestView.cpp : CUtilTestView ���ʵ��
//

#include "stdafx.h"
#include "UtilTest.h"

#include "UtilTestDoc.h"
#include "UtilTestView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CUtilTestView

IMPLEMENT_DYNCREATE(CUtilTestView, CView)

BEGIN_MESSAGE_MAP(CUtilTestView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CUtilTestView ����/����

CUtilTestView::CUtilTestView()
{
	// TODO: �ڴ˴���ӹ������

}

CUtilTestView::~CUtilTestView()
{
}

BOOL CUtilTestView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CUtilTestView ����

void CUtilTestView::OnDraw(CDC* /*pDC*/)
{
	CUtilTestDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CUtilTestView ��ӡ

BOOL CUtilTestView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CUtilTestView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CUtilTestView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CUtilTestView ���

#ifdef _DEBUG
void CUtilTestView::AssertValid() const
{
	CView::AssertValid();
}

void CUtilTestView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CUtilTestDoc* CUtilTestView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CUtilTestDoc)));
	return (CUtilTestDoc*)m_pDocument;
}
#endif //_DEBUG


// CUtilTestView ��Ϣ�������
