#include<afxdb.h>
#include<iostream>
using namespace std;

	//显示数据库中的所有记录
void show( CRecordset  &rs )
{
	CString  varid;     // 存储从数据库中读入的字段值
	CString  sql=_T("SELECT * FROM student order by [no]");
	rs.Open(CRecordset::forwardOnly,sql);

	cout << "学号\t姓名\t性别\t成绩" << endl;
	while(!rs.IsEOF( ))
	{
		for(int i=0;i<4;i++)
		{
			rs.GetFieldValue(( short )i,varid);
			cout <<  varid << "\t";
		}
		cout << endl;
		rs.MoveNext( );
	}
	rs.Close( );
}


	//根据输入的学号查询对应的记录
void query( CRecordset  &rs)
{
	char      stNo[10];
	CString  varid;

	cout << "请输入学号：";
	cin >> stNo ;

	CString  sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s' order by [no]", stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(rs.IsBOF( )&&rs.IsEOF( ))     // IsBOF判断是否到首记录之前，IsEOF是否到尾
	{
		   cout << "没有找到此记录!" << endl;
	}else   // 找到了相应的记录
	{
			cout << "学号\t姓名\t性别\t成绩" << endl;
			while(!rs.IsEOF( ))
			{
				for(int i=0;i<4;i++)   // 依次显示4个字段值
				{
					rs.GetFieldValue(( short )i,varid);
					cout <<  varid << "\t";
				}
				cout << endl;				
				rs.MoveNext( );
			}
	}

	rs.Close( );
}


	//删除输入学号对应的记录
void  delRecord( CDatabase &db, CRecordset  &rs)
{
	char  stNo[10];

	cout << "请输入学号：";
	cin >> stNo ;

	CString sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s'",stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(rs.IsBOF( )&&rs.IsEOF( ))
	{
		 cout << "没有找到此记录!" << endl;
	}else
	{
		  sql.Format("DELETE * FROM student WHERE [no]='%s'",stNo);
		  db.ExecuteSQL(sql);
		 cout << "已成功删除该记录!" << endl;
	}
	rs.Close( );
}

	//添加一条新记录
void addRecord( CDatabase &db, CRecordset  &rs)
{
	char  stNo[10], stName[10], stGender[3];
	float  stScore;

	cout << "请输入学号：";
	cin >> stNo ;

	CString  sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s' order by [no]", stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(!rs.IsBOF( ) || !rs.IsEOF( ))     // 判断数据库中是否存在相应的记录
	{
		   cout << "记录号重复，不可增加!!!" << endl;
		   	rs.Close( );
		   return ;   // 返回主菜单
	}

	cout << "请输入姓名：" ;
	cin >> stName ;

	cout << "请输入性别：" ;
	cin >> stGender ;

	cout << "请输入成绩：" ;
	cin >> stScore ;

	sql.Format("INSERT INTO student VALUES ('%s','%s','%s',%f)",stNo,stName,stGender,stScore);
	db.ExecuteSQL(sql);
	rs.Close( );
}


	//根据学号查找并修改相应的记录
void modifyRecord(CDatabase &db,  CRecordset  &rs )
{
	int  subChoice;
	char  stNo[10],  newData[10];
	CString  attribute;    // attribute是要修改的那个字段

	cout << "请输入学号：";
	cin >> stNo ;

	cout << "请选择要修改的属性：" << endl;
	cout << "1.学号" << endl;
	cout << "2.姓名" << endl;
	cout << "3.性别" << endl;
	cout << "4.成绩" << endl;
	cin >> subChoice;
	switch(subChoice)
	{
		case 1:
			attribute=_T("no");
			break;
		case 2:
			attribute=_T("name");
			break;
		case 3:
			attribute=_T("gender");
			break;
		case 4:
			attribute=_T("score");
			break;
	}
	cout << "请输入修改后的数据：" ;
	cin >> newData ;

	CString sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s'",stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(rs.IsBOF( )&&rs.IsEOF( ))
	{
			cout << "没找到此记录!" << endl;
	}else
	{
			sql.Format("UPDATE student SET %s='%s' WHERE [no]='%s'",attribute,newData,stNo);
			db.ExecuteSQL(sql);
	}
	rs.Close( );	
}

	//主函数
int main( )
{
	CDatabase   db;
	CRecordset  rs(&db);	
	int choice;
	CString  strdsn;
	bool loop=true;   // 循环控制变量

	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
	db.Open(NULL,false,false,strdsn,true);

	while( loop )
	{	
		cout << "\n\t\t学生信息管理系统" << endl;
		cout << "\t1.显示全部记录" << endl;
		cout << "\t2.按学号查询" << endl;
		cout << "\t3.增加记录" << endl;
		cout << "\t4.删除记录" << endl;
		cout << "\t5.修改记录" << endl;
		cout << "\t0.退出系统" << endl << endl;

		cout << "请选择：";
		cin >> choice;
		switch (choice)
		{
			case 1:
				show( rs);
				break;
			case 2:
				query( rs );
				break;
			case 3:
				addRecord(db, rs );
				break;
			case 4:
				delRecord( db, rs );
				break;
			case 5:
				modifyRecord( db, rs );
				break;
			case 0:
				cout << "谢谢使用!" << endl;
				db.Close( );
				loop = false ;  // loop设置为false，表示要结束循环
				break;
			default:
				cout << "输入错误，请重新输入!" << endl;
				break;
		}
	}

	return 0;
}