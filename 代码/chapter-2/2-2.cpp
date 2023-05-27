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
		cout << "打开文件失败!" << endl ;
		exit( 0 );
    }
    cout << "打开文件成功 ! \n" ;

    cout << "下面向文件写数据 ! \n" ;
    dataFile << "Confucius\n" ;
    dataFile << "Mo-tse\n" ;
    dataFile << "Einstein\n" ;
    dataFile << "Shakespeare\n" ;
    dataFile.close( );    
	cout << "写文件结束 !\n" ;

    return 0;
}