#include<afxdb.h>
#include<iostream>
using namespace std;

int main()
{
	CDatabase db;
	CRecordset rs(&db);	
	CString strdsn;

	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
	db.Open(NULL,false,false,strdsn,true);
		//���Ҷ�λ��noΪ2001�ļ�¼
	CString sql=_T("SELECT * FROM student WHERE [no]='2001'  ");
	rs.Open(CRecordset::forwardOnly,sql);
		//���жϸü�¼�Ƿ���ڣ�Ȼ����ִ��ɾ������
	if(rs.IsBOF()&&rs.IsEOF())
	{
		cout << "û�ҵ��˼�¼!" << endl;
	}else
	{
			//ִ��DELETE��䣬ɾ��noֵΪ2001�ļ�¼
		sql=_T("DELETE FROM student WHERE [no]='2001'  ");
		db.ExecuteSQL(sql);
	}

	rs.Close();
	db.Close();

	return 0;
}