#include  <iostream>
#include  <fstream>
#include  <cstdlib>
using namespace std;

int  main( )
{
    fstream  dataFile ;

    dataFile.open("demofile.txt", ios::out );
    if( !dataFile )
    {
		cout << "���ļ�ʧ��!" << endl ;
		exit( 0 );
    }
    cout << "���ļ��ɹ� ! \n" ;

    cout << "�������ļ�д���� ! \n" ;
    dataFile << "Confucius\n" ;
    dataFile << "Mo-tse\n" ;
    dataFile << "Einstein\n" ;
    dataFile << "Shakespeare\n" ;
    dataFile.close( );    
	cout << "д�ļ����� !\n" ;

    return 0;
}