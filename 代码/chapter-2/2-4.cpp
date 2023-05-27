        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        int  main ( )
        {
            fstream  dataFile ;
            float  num= 123.456f ;

            dataFile.open ("numfile.txt", ios::out ) ;
            if ( !dataFile ) 
			{
                cout << "打开文件失败!" << endl ;
                exit ( 0 ) ;
            }

            dataFile << num << endl ;
            dataFile.precision (5) ;
            dataFile << num << endl ;
            dataFile.precision (4) ;
            dataFile << num << endl ;
            dataFile.precision (3) ;
            dataFile << num << endl ;
            dataFile.close( ) ;

            return 0;
        }