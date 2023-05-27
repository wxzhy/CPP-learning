        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main ( )
        {
            fstream  file ;
            char   ch , fileName[51] ;

            cout << "请输入文件名： " ;
            cin >> fileName ;
            file.open (fileName, ios::in ) ;
            if ( ! file ) 
			{
                cout << fileName <<"打开文件失败! \n" ;
                exit ( 0 ) ;
            }

            while( !file.eof ( ) ) 
            {
                file.get(ch) ;    // 读取一个字符
                if(file.fail())
				  break;
                cout << ch ;
            }
            file.close( ) ;

            return 0;
        }