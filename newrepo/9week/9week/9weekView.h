
// 9weekView.h : CMy9weekView ��Ľӿ�
//

#pragma once


class CMy9weekView : public CView
{
protected: // �������л�����
	CMy9weekView();
	DECLARE_DYNCREATE(CMy9weekView)

// ����
public:
	CMy9weekDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy9weekView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpen();
};

#ifndef _DEBUG  // 9weekView.cpp �еĵ��԰汾
inline CMy9weekDoc* CMy9weekView::GetDocument() const
   { return reinterpret_cast<CMy9weekDoc*>(m_pDocument); }
#endif

