
// 11weekDoc.h : CMy11weekDoc ��Ľӿ�
//


#pragma once
#include "11weekSet.h"


class CMy11weekDoc : public CDocument
{
protected: // �������л�����
	CMy11weekDoc();
	DECLARE_DYNCREATE(CMy11weekDoc)

// ����
public:
	CMy11weekSet m_My11weekSet;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMy11weekDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
