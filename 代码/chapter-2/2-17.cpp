        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main( )
        {
             fstream  file ("digit.txt", ios::in) ;
             char  ch ;

             if ( file.fail ( ) )
			 {
                 cout << "打开文件digit.txt出错! \n" ;
                 exit ( 0 ) ;
             }

             file.seekg (5L, ios::beg) ;
             file.get(ch) ;
             cout << "从文件头开始，5号字节位置上的字符是： "<< ch << endl ;

             file.seekg (-10L, ios::end) ;
             file.get(ch) ;
             cout << "从文件尾开始，10号字节位置上的字符是： "<< ch << endl ;

             file.seekg (3L, ios::cur) ;
             file.get(ch) ;
             cout << "从当前位置偏移3个字节以后，字符是： "<< ch << endl ;

             file.close( ) ;

             return 0;
        }
