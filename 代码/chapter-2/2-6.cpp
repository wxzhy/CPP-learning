        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        int  main ( )
        {
            fstream  dataFile ;
            char name[81] ;

            dataFile.open ("demofile.txt", ios::in) ;
            if ( !dataFile ) 
            {
                cout << "打开文件失败!" << endl ;
                exit ( 0 ) ;
            }
            cout << "文件打开成功 ! \n" ;
            cout << "现在从文件中读取数据 !\n " ;
            for ( int  count = 0 ; count < 4 ; count++ ) 
            {
    	            dataFile >> name ;
                cout << name << "    " ;
            }
            dataFile.close( ) ;
            cout << "\n结束运行。";

            return 0;
        }