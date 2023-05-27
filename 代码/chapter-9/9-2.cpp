#include<afxdb.h>
#include<iostream>
using namespace std;

int main()
{
	CDatabase db;
	CRecordset rs(&db);	
	CString strdsn;		//定义连接字符串

		//格式化连接字符串，Access数据库存放在D盘根目录下，用户名与密码均为admin
	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
	db.Open(NULL,false,false,strdsn,true);
		
		//定义SQL语句
	CString str1 = _T("INSERT INTO student VALUES (2005,'曹操','男',97)");
	CString str2 = _T("INSERT INTO student VALUES (2006,'孔明','男',99)");
	db.ExecuteSQL(str1);		//执行insert语句 
	db.ExecuteSQL(str2);
	
	rs.Close();      //关闭记录集和数据库
	db.Close();

	return 0;
}