        #include  <iostream>
        using namespace std;
        #include  <fstream>

		int  main ( )
        {
            fstream  dataFile ;

            dataFile.open ("demofile.txt", ios::out ) ; 
            dataFile << "Confucius\n" ; 
            dataFile << "Mo-tse\n" ; 
            dataFile.close( ) ;                      // 关闭文件
            dataFile.open ("demofile.txt", ios::app) ;    // 再次打开文件
            dataFile << "Einstein\n" ;         // 追加数据
            dataFile << "Shakespeare\n" ;
            dataFile.close( ) ;     // 关闭文件

            return 0;
        }	