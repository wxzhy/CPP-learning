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
                cout << "���ļ�people.dat����! \n" ;
                exit ( 0 ) ;
            }

            do {
                cout << "��ǰλ�ã�" << file.tellg( ) << endl ;
                cout << "������һ��������ļ�ͷ��ƫ����: " ;
                cin >> offset ;
                file.seekg (offset, ios::beg) ;
                file.get(ch) ;
                cout << "��ǰ���ַ�Ϊ: "<< ch << endl ;
                cout << "������(Y/N)��?  " ;
                cin >> again ;
            } while ( toupper ( again ) == 'Y' ) ;

            file.close( ) ;
            return 0;
        }