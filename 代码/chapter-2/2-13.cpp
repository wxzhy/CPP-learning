        #include  <iostream>
        using namespace std;
        #include  <fstream>

        int  main ( )
        { 
            fstream  dataFile("sentence.txt", ios::out ) ;
            char   ch ;

            cout << "��������������ַ����� ! ����! \n" ;
            while ( true ) 
            {
                cin.get(ch) ;
                if (ch == '!' )    // '!'�����������Ƿ��ţ����洢���ļ���
                    break ;
                dataFile.put(ch) ;
            } 

            dataFile.close( ) ;

			return 0;
        }
