		#include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main( )
        {
            fstream  file("bfile.dat", ios::out | ios::binary) ;   // ������ģʽ
            int  buffer[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;

            cout << "�������ļ���д���� ... \n" ;
            file.write ( ( char*)buffer, sizeof ( buffer ) ) ;
            file.close( ) ;
            cout << "д���ݳɹ�! \n\n" ;

            file.open ("bfile.dat", ios::in) ;     // �ٴδ��ļ�
            if ( file.fail ( ) )
			{
                cout<<"���ļ�ʧ��!" ;
                exit ( 0 ) ;
            }

            cout << "���ļ���ȡ����! \n" ;
            file.read ( ( char*)buffer, sizeof ( buffer ) ) ;
            for ( int  count = 0 ; count < 10 ; count++ )
                  cout << buffer [count] << "  " ;
			cout << endl;
            file.close( ) ;

            return 0;
        }