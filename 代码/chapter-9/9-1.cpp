#include<afxdb.h>
#include<iostream>
using namespace std;

int main()
{
		// CDatabase�����ʾ������Դ�����ӣ�����db����ͨ����������ݿ�
	CDatabase db;		
	CRecordset rs(&db);	//CRecordset�����ʾһ����¼��
	CString varid;
	CString strdsn;		//���������ַ���

		//��ʽ�������ַ�����Access���ݿ�����D�̸�Ŀ¼�£��û����������Ϊadmin
	strdsn.Format("ODBC;DSN=myDB;UID=admin;PWD=admin;DBQ=d:\\myDB.mdb");
		//ͨ��ODBC�������������ݿ⣬����������������MSDN
	db.Open(NULL,false,false,strdsn,true);
	CString sql=_T("SELECT * from student order by [no]"); 	//����SQL���
		//��ѯstudent����forwardOnly��ʽ��ʱ���α�ֻ���ڼ�¼������ǰ�ƶ�
	rs.Open(CRecordset::forwardOnly,sql); 

	cout << "   ���\t����\t�Ա�\t����\n";      
	int i=0;
	while(!rs.IsEOF())
	{
		rs.GetFieldValue((short )0,varid);		//����ǰ��¼��1�е�ֵ��������varid
		cout << ++i << "��"<< varid << "\t";       
		rs.GetFieldValue((short )1,varid);		//����ǰ��¼��2�е�ֵ��������varid
		cout << varid << "\t";       
		rs.GetFieldValue((short )2,varid);		//����ǰ��¼��3�е�ֵ��������varid
		cout << varid << "\t";       
		rs.GetFieldValue((short )3,varid);		//����ǰ��¼��4�е�ֵ��������varid
		cout << varid << endl;							

		rs.MoveNext();    //�α궨λ����һ����¼
	}
	rs.Close();		//�رռ�¼��
	db.Close();		//�ر����ݿ�
	
	return 0;
}