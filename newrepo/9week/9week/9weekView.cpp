
// 9weekView.cpp : CMy9weekView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "9week.h"
#endif

#include "9weekDoc.h"
#include "9weekView.h"
#include"Myd0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy9weekView

IMPLEMENT_DYNCREATE(CMy9weekView, CView)

BEGIN_MESSAGE_MAP(CMy9weekView, CView)
	ON_COMMAND(ID_Open, &CMy9weekView::OnOpen)
END_MESSAGE_MAP()

// CMy9weekView ����/����

CMy9weekView::CMy9weekView()
{
	// TODO:  �ڴ˴���ӹ������

}

CMy9weekView::~CMy9weekView()
{
}

BOOL CMy9weekView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMy9weekView ����

void CMy9weekView::OnDraw(CDC* /*pDC*/)
{
	CMy9weekDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMy9weekView ���

#ifdef _DEBUG
void CMy9weekView::AssertValid() const
{
	CView::AssertValid();
}

void CMy9weekView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy9weekDoc* CMy9weekView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy9weekDoc)));
	return (CMy9weekDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy9weekView ��Ϣ�������


void CMy9weekView::OnOpen()
{
	Myd0 dlg;
	dlg.DoModal();
	// TODO:  �ڴ���������������
}
