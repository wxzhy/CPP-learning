        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main ( )
        {
            fstream  readFile ;
            char   input[81] ;

            readFile.open ("numbers.txt", ios::in ) ;
            if (readFile.fail ( ) ) 
            {
                cout << "���ļ�ʧ��!" << endl ;
                exit ( 0 ) ;
            }

            while( !readFile.eof( ) ) 
            {
                readFile >> input ;
			    if(readFile.fail())
				       break;
                cout << input ;
            }
            readFile.close( ) ;

            return 0;
        }
