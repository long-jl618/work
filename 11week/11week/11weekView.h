
// 11weekView.h : CMy11weekView ��Ľӿ�
//

#pragma once

class CMy11weekSet;

class CMy11weekView : public CRecordView
{
protected: // �������л�����
	CMy11weekView();
	DECLARE_DYNCREATE(CMy11weekView)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY11WEEK_FORM };
#endif
	CMy11weekSet* m_pSet;

// ����
public:
	CMy11weekDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CMy11weekView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString sno;
	CString age;
	CString phone;
};

#ifndef _DEBUG  // 11weekView.cpp �еĵ��԰汾
inline CMy11weekDoc* CMy11weekView::GetDocument() const
   { return reinterpret_cast<CMy11weekDoc*>(m_pDocument); }
#endif

