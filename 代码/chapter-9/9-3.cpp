// 【例9-3】修改student表中no为2001的记录，将其score改为90。
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

		//定位至no为2001的记录
	CString   sql=_T("SELECT * FROM student WHERE [no]=2001");
	rs.Open(CRecordset::forwardOnly,sql);
		//先判断该记录是否存在，然后再执行修改操作
	if(rs.IsBOF()&&rs.IsEOF())
	{
		cout << "没找到此记录!" << endl;
	}else
	{
			//执行UPDATE语句，将no为2001记录中的score改为90
		sql=_T("UPDATE student SET score=90 WHERE [no]=2001");
		db.ExecuteSQL(sql);
	}

	rs.Close();
	db.Close();

	return 0;
}