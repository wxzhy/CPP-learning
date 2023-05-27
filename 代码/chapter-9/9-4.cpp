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
		//查找定位至no为2001的记录
	CString sql=_T("SELECT * FROM student WHERE [no]='2001'  ");
	rs.Open(CRecordset::forwardOnly,sql);
		//先判断该记录是否存在，然后再执行删除操作
	if(rs.IsBOF()&&rs.IsEOF())
	{
		cout << "没找到此记录!" << endl;
	}else
	{
			//执行DELETE语句，删除no值为2001的记录
		sql=_T("DELETE FROM student WHERE [no]='2001'  ");
		db.ExecuteSQL(sql);
	}

	rs.Close();
	db.Close();

	return 0;
}