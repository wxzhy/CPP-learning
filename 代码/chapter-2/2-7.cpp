        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main ( )
        {
            fstream  dataFile ;
            char   name [81] ;

            dataFile.open ("demofile.txt", ios::in) ;
            if ( ! dataFile ) 
            {
                cout << "打开文件失败!" << endl ;
                exit ( 0 ) ;
            }
            cout << "文件打开成功 ! \n" ;
            cout << "现在从文件中读取数据 !\n" ;
            while ( ! dataFile.eof ( ) ) 	// 测试是否达到文件尾
            {
                dataFile >> name ;
				if(dataFile.fail())    // 判断上一行的读取是否失败，若失败将结束循环
					break;
                cout << name << "    " ;
            }
            dataFile.close( ) ;

            return 0;
        }