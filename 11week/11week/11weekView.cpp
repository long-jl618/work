
// 11weekView.cpp : CMy11weekView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "11week.h"
#endif

#include "11weekSet.h"
#include "11weekDoc.h"
#include "11weekView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11weekView

IMPLEMENT_DYNCREATE(CMy11weekView, CRecordView)

BEGIN_MESSAGE_MAP(CMy11weekView, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy11weekView ����/����

CMy11weekView::CMy11weekView()
	: CRecordView(IDD_MY11WEEK_FORM)
	, ID(0)
	, name(_T(""))
	, sno(_T(""))
	, age(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CMy11weekView::~CMy11weekView()
{
}

void CMy11weekView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CMy11weekView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CMy11weekView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_My11weekSet;
	CRecordView::OnInitialUpdate();

}


// CMy11weekView ��ӡ

BOOL CMy11weekView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CMy11weekView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CMy11weekView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CMy11weekView ���

#ifdef _DEBUG
void CMy11weekView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CMy11weekView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CMy11weekDoc* CMy11weekView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy11weekDoc)));
	return (CMy11weekDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy11weekView ���ݿ�֧��
CRecordset* CMy11weekView::OnGetRecordset()
{
	return m_pSet;
}



// CMy11weekView ��Ϣ�������
