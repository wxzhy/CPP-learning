        #include  <iostream>
        #include  <iomanip>    // ע�����ͷ�ļ�
        using namespace std;

        int  main ( )
        {
            int   	intValue = 3928 ;
            float  	floatValue = 91.5 ;
            char   	cStringValue[ ] = " Confucius & Mo-tse" ;

            cout << "(" << setw(5) << intValue << ")" << endl ;
            cout << "(" << setw(8) << floatValue << ")" << endl ;
            cout << "(" << setw(20) << cStringValue << ")" << endl ;

            return 0;
        }
