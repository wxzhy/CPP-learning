        #include  <iostream>
        using namespace std;
        #include  <fstream>

		int  main ( )
        {
            fstream  dataFile ;

            dataFile.open ("demofile.txt", ios::out ) ; 
            dataFile << "Confucius\n" ; 
            dataFile << "Mo-tse\n" ; 
            dataFile.close( ) ;                      // �ر��ļ�
            dataFile.open ("demofile.txt", ios::app) ;    // �ٴδ��ļ�
            dataFile << "Einstein\n" ;         // ׷������
            dataFile << "Shakespeare\n" ;
            dataFile.close( ) ;     // �ر��ļ�

            return 0;
        }	