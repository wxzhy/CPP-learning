        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <ctype.h>   	// toupper�����ڴ�ͷ�ļ���

        int  main( )
        {
            ifstream  inFile ;       // �����ļ�������
            ofstream  outFile("out.txt") ;  	// ����ļ�������
            char  fileName[81], ch, ch2 ;

            cout << "�������ļ�����  " ;
            cin >> fileName,
            inFile.open (fileName ) ;
            if (inFile.fail ( ) ) 
            {
                cout << "���ܴ��ļ�: " << fileName << endl ;
                exit ( 0 ) ;
            }

            inFile.get(ch) ;                 // �� inFile ��ȡһ���ַ�
            while( !inFile.eof ( ) )       // �����ļ�����
            {
                ch2 = toupper(ch) ;         // ת��Ϊ��д��ĸ
                outFile.put(ch2) ;          // д���ڶ����ļ���
                inFile.get(ch) ;            // �� inFile �ٴζ�ȡһ���ַ�
            }

            inFile.close( ) ;
            outFile.close( ) ;
            cout << "�ļ�ת������! \n" ;

            return 0;
        }