        #include  <iostream>
        using namespace std;
        #include  <fstream>

        int  main ( )
        {
            fstream  dataFile ;     // ����һ��fstream�����
            char      fileName[81] ;

            cout << "����Ҫ�򿪵��ļ����֣� " ;
            cin.getline(fileName, 81) ;
            dataFile.open (fileName, ios::out ) ;   
            cout << "���ļ�" << fileName << "\n" ;

            return 0;
        }