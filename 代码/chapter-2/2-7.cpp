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
                cout << "���ļ�ʧ��!" << endl ;
                exit ( 0 ) ;
            }
            cout << "�ļ��򿪳ɹ� ! \n" ;
            cout << "���ڴ��ļ��ж�ȡ���� !\n" ;
            while ( ! dataFile.eof ( ) ) 	// �����Ƿ�ﵽ�ļ�β
            {
                dataFile >> name ;
				if(dataFile.fail())    // �ж���һ�еĶ�ȡ�Ƿ�ʧ�ܣ���ʧ�ܽ�����ѭ��
					break;
                cout << name << "    " ;
            }
            dataFile.close( ) ;

            return 0;
        }