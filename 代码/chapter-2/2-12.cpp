        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main ( )
        {
            fstream  file ;
            char   ch , fileName[51] ;

            cout << "�������ļ����� " ;
            cin >> fileName ;
            file.open (fileName, ios::in ) ;
            if ( ! file ) 
			{
                cout << fileName <<"���ļ�ʧ��! \n" ;
                exit ( 0 ) ;
            }

            while( !file.eof ( ) ) 
            {
                file.get(ch) ;    // ��ȡһ���ַ�
                if(file.fail())
				  break;
                cout << ch ;
            }
            file.close( ) ;

            return 0;
        }