#pragma once
#include "afxwin.h"


// Myd0 �Ի���

class Myd0 : public CDialog
{
	DECLARE_DYNAMIC(Myd0)

public:
	Myd0(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~Myd0();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CListBox Lbox;
	virtual BOOL OnInitDialog();
};
