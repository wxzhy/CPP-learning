		#include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main( )
        {
            fstream  file("bfile.dat", ios::out | ios::binary) ;   // 二进制模式
            int  buffer[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;

            cout << "首先向文件中写数据 ... \n" ;
            file.write ( ( char*)buffer, sizeof ( buffer ) ) ;
            file.close( ) ;
            cout << "写数据成功! \n\n" ;

            file.open ("bfile.dat", ios::in) ;     // 再次打开文件
            if ( file.fail ( ) )
			{
                cout<<"打开文件失败!" ;
                exit ( 0 ) ;
            }

            cout << "打开文件读取数据! \n" ;
            file.read ( ( char*)buffer, sizeof ( buffer ) ) ;
            for ( int  count = 0 ; count < 10 ; count++ )
                  cout << buffer [count] << "  " ;
			cout << endl;
            file.close( ) ;

            return 0;
        }