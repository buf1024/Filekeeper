
// UtilTestDoc.h : CUtilTestDoc ��Ľӿ�
//


#pragma once


class CUtilTestDoc : public CDocument
{
protected: // �������л�����
	CUtilTestDoc();
	DECLARE_DYNCREATE(CUtilTestDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CUtilTestDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


