#include<afxdb.h>
#include<iostream>
using namespace std;

	//��ʾ���ݿ��е����м�¼
void show( CRecordset  &rs )
{
	CString  varid;     // �洢�����ݿ��ж�����ֶ�ֵ
	CString  sql=_T("SELECT * FROM student order by [no]");
	rs.Open(CRecordset::forwardOnly,sql);

	cout << "ѧ��\t����\t�Ա�\t�ɼ�" << endl;
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


	//���������ѧ�Ų�ѯ��Ӧ�ļ�¼
void query( CRecordset  &rs)
{
	char      stNo[10];
	CString  varid;

	cout << "������ѧ�ţ�";
	cin >> stNo ;

	CString  sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s' order by [no]", stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(rs.IsBOF( )&&rs.IsEOF( ))     // IsBOF�ж��Ƿ��׼�¼֮ǰ��IsEOF�Ƿ�β
	{
		   cout << "û���ҵ��˼�¼!" << endl;
	}else   // �ҵ�����Ӧ�ļ�¼
	{
			cout << "ѧ��\t����\t�Ա�\t�ɼ�" << endl;
			while(!rs.IsEOF( ))
			{
				for(int i=0;i<4;i++)   // ������ʾ4���ֶ�ֵ
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


	//ɾ������ѧ�Ŷ�Ӧ�ļ�¼
void  delRecord( CDatabase &db, CRecordset  &rs)
{
	char  stNo[10];

	cout << "������ѧ�ţ�";
	cin >> stNo ;

	CString sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s'",stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(rs.IsBOF( )&&rs.IsEOF( ))
	{
		 cout << "û���ҵ��˼�¼!" << endl;
	}else
	{
		  sql.Format("DELETE * FROM student WHERE [no]='%s'",stNo);
		  db.ExecuteSQL(sql);
		 cout << "�ѳɹ�ɾ���ü�¼!" << endl;
	}
	rs.Close( );
}

	//���һ���¼�¼
void addRecord( CDatabase &db, CRecordset  &rs)
{
	char  stNo[10], stName[10], stGender[3];
	float  stScore;

	cout << "������ѧ�ţ�";
	cin >> stNo ;

	CString  sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s' order by [no]", stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(!rs.IsBOF( ) || !rs.IsEOF( ))     // �ж����ݿ����Ƿ������Ӧ�ļ�¼
	{
		   cout << "��¼���ظ�����������!!!" << endl;
		   	rs.Close( );
		   return ;   // �������˵�
	}

	cout << "������������" ;
	cin >> stName ;

	cout << "�������Ա�" ;
	cin >> stGender ;

	cout << "������ɼ���" ;
	cin >> stScore ;

	sql.Format("INSERT INTO student VALUES ('%s','%s','%s',%f)",stNo,stName,stGender,stScore);
	db.ExecuteSQL(sql);
	rs.Close( );
}


	//����ѧ�Ų��Ҳ��޸���Ӧ�ļ�¼
void modifyRecord(CDatabase &db,  CRecordset  &rs )
{
	int  subChoice;
	char  stNo[10],  newData[10];
	CString  attribute;    // attribute��Ҫ�޸ĵ��Ǹ��ֶ�

	cout << "������ѧ�ţ�";
	cin >> stNo ;

	cout << "��ѡ��Ҫ�޸ĵ����ԣ�" << endl;
	cout << "1.ѧ��" << endl;
	cout << "2.����" << endl;
	cout << "3.�Ա�" << endl;
	cout << "4.�ɼ�" << endl;
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
	cout << "�������޸ĺ�����ݣ�" ;
	cin >> newData ;

	CString sql;
	sql.Format("SELECT * FROM student WHERE [no]='%s'",stNo);
	rs.Open(CRecordset::forwardOnly,sql);
	if(rs.IsBOF( )&&rs.IsEOF( ))
	{
			cout << "û�ҵ��˼�¼!" << endl;
	}else
	{
			sql.Format("UPDATE student SET %s='%s' WHERE [no]='%s'",attribute,newData,stNo);
			db.ExecuteSQL(sql);
	}
	rs.Close( );	
}

	//������
int main( )
{
	CDatabase   db;
	CRecordset  rs(&db);	
	int choice;
	CString  strdsn;
	bool loop=true;   // ѭ�����Ʊ���

	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
	db.Open(NULL,false,false,strdsn,true);

	while( loop )
	{	
		cout << "\n\t\tѧ����Ϣ����ϵͳ" << endl;
		cout << "\t1.��ʾȫ����¼" << endl;
		cout << "\t2.��ѧ�Ų�ѯ" << endl;
		cout << "\t3.���Ӽ�¼" << endl;
		cout << "\t4.ɾ����¼" << endl;
		cout << "\t5.�޸ļ�¼" << endl;
		cout << "\t0.�˳�ϵͳ" << endl << endl;

		cout << "��ѡ��";
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
				cout << "ллʹ��!" << endl;
				db.Close( );
				loop = false ;  // loop����Ϊfalse����ʾҪ����ѭ��
				break;
			default:
				cout << "�����������������!" << endl;
				break;
		}
	}

	return 0;
}