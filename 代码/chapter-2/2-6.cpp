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
                cout << "���ļ�ʧ��!" << endl ;
                exit ( 0 ) ;
            }
            cout << "�ļ��򿪳ɹ� ! \n" ;
            cout << "���ڴ��ļ��ж�ȡ���� !\n " ;
            for ( int  count = 0 ; count < 4 ; count++ ) 
            {
    	            dataFile >> name ;
                cout << name << "    " ;
            }
            dataFile.close( ) ;
            cout << "\n�������С�";

            return 0;
        }