        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <ctype.h> 

        int  main( )
        {
            fstream   file("digit.txt", ios::in) ;
            long     offset ;
            char     ch, again ;

            if ( file.fail ( ) ) 
            {
                cout << "打开文件people.dat出错! \n" ;
                exit ( 0 ) ;
            }

            do {
                cout << "当前位置：" << file.tellg( ) << endl ;
                cout << "请输入一个相对于文件头的偏移量: " ;
                cin >> offset ;
                file.seekg (offset, ios::beg) ;
                file.get(ch) ;
                cout << "当前的字符为: "<< ch << endl ;
                cout << "继续吗(Y/N)　?  " ;
                cin >> again ;
            } while ( toupper ( again ) == 'Y' ) ;

            file.close( ) ;
            return 0;
        }