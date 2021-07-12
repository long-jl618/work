
// 11weekSet.cpp : CMy11weekSet ���ʵ��
//

#include "stdafx.h"
#include "11week.h"
#include "11weekSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy11weekSet ʵ��

// ���������� 2020��5��12��, 9:39

IMPLEMENT_DYNAMIC(CMy11weekSet, CRecordset)

CMy11weekSet::CMy11weekSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_ID = 0;
	m_1 = L"";
	m_2 = L"";
	m_3 = L"";
	m_4 = L"";
	m_nFields = 5;
	m_nDefaultType = snapshot;
}
//#error ��ȫ����: �����ַ������ܰ������롣
// �������ַ����п��ܰ������������/��������Ҫ
// ��Ϣ�����ڲ鿴��������ַ������ҵ������밲ȫ
// �йص�������Ƴ� #error��������Ҫ���������
// ��Ϊ������ʽ��ʹ���������û������֤��
CString CMy11weekSet::GetDefaultConnect()
{
	return _T("DSN=\x6570\x636e\x6e90\x2014\x5b66\x751f\x4fe1\x606f;DBQ=E:\\office\\Database2.mdb;DriverId=25;FIL=MS Access;MaxBufferSize=2048;PageTimeout=5;UID=admin;");
}

CString CMy11weekSet::GetDefaultSQL()
{
	return _T("[ѧ����Ϣ��]");
}

void CMy11weekSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// RFX_Text() �� RFX_Int() �������������
// ��Ա���������ͣ����������ݿ��ֶε����͡�
// ODBC �����Զ�����ֵת��Ϊ�����������
	RFX_Long(pFX, _T("[ID]"), m_ID);
	RFX_Text(pFX, _T("[�ֶ�1]"), m_1);
	RFX_Text(pFX, _T("[�ֶ�2]"), m_2);
	RFX_Text(pFX, _T("[�ֶ�3]"), m_3);
	RFX_Text(pFX, _T("[�ֶ�4]"), m_4);

}
/////////////////////////////////////////////////////////////////////////////
// CMy11weekSet ���

#ifdef _DEBUG
void CMy11weekSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CMy11weekSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

