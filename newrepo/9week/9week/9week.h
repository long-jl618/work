
// 9week.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMy9weekApp: 
// �йش����ʵ�֣������ 9week.cpp
//

class CMy9weekApp : public CWinApp
{
public:
	CMy9weekApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMy9weekApp theApp;