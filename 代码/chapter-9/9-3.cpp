// ����9-3���޸�student����noΪ2001�ļ�¼������score��Ϊ90��
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

		//��λ��noΪ2001�ļ�¼
	CString   sql=_T("SELECT * FROM student WHERE [no]=2001");
	rs.Open(CRecordset::forwardOnly,sql);
		//���жϸü�¼�Ƿ���ڣ�Ȼ����ִ���޸Ĳ���
	if(rs.IsBOF()&&rs.IsEOF())
	{
		cout << "û�ҵ��˼�¼!" << endl;
	}else
	{
			//ִ��UPDATE��䣬��noΪ2001��¼�е�score��Ϊ90
		sql=_T("UPDATE student SET score=90 WHERE [no]=2001");
		db.ExecuteSQL(sql);
	}

	rs.Close();
	db.Close();

	return 0;
}