#include<afxdb.h>
#include<iostream>
using namespace std;

int main()
{
		// CDatabase对象表示到数据源的连接，定义db对象，通过其操作数据库
	CDatabase db;		
	CRecordset rs(&db);	//CRecordset对象表示一个记录集
	CString varid;
	CString strdsn;		//定义连接字符串

		//格式化连接字符串，Access数据库存放在D盘根目录下，用户名与密码均为admin
	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
		//通过ODBC驱动建立打开数据库，具体参数含义请查阅MSDN
	db.Open(NULL,false,false,strdsn,true);
	CString sql=_T("SELECT * from student order by [no]"); 	//定义SQL语句
		//查询student表，以forwardOnly方式打开时，游标只能在记录集中向前移动
	rs.Open(CRecordset::forwardOnly,sql); 

	cout << "   编号\t姓名\t性别\t分数\n";      
	int i=0;
	while(!rs.IsEOF())
	{
		rs.GetFieldValue((short )0,varid);		//将当前记录第1列的值赋给变量varid
		cout << ++i << "："<< varid << "\t";       
		rs.GetFieldValue((short )1,varid);		//将当前记录第2列的值赋给变量varid
		cout << varid << "\t";       
		rs.GetFieldValue((short )2,varid);		//将当前记录第3列的值赋给变量varid
		cout << varid << "\t";       
		rs.GetFieldValue((short )3,varid);		//将当前记录第4列的值赋给变量varid
		cout << varid << endl;							

		rs.MoveNext();    //游标定位至下一条记录
	}
	rs.Close();		//关闭记录集
	db.Close();		//关闭数据库
	
	return 0;
}