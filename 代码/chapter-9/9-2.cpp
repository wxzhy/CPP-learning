#include<afxdb.h>
#include<iostream>
using namespace std;

int main()
{
	CDatabase db;
	CRecordset rs(&db);	
	CString strdsn;		//���������ַ���

		//��ʽ�������ַ�����Access���ݿ�����D�̸�Ŀ¼�£��û����������Ϊadmin
	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
	db.Open(NULL,false,false,strdsn,true);
		
		//����SQL���
	CString str1 = _T("INSERT INTO student VALUES (2005,'�ܲ�','��',97)");
	CString str2 = _T("INSERT INTO student VALUES (2006,'����','��',99)");
	db.ExecuteSQL(str1);		//ִ��insert��� 
	db.ExecuteSQL(str2);
	
	rs.Close();      //�رռ�¼�������ݿ�
	db.Close();

	return 0;
}