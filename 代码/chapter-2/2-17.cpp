        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        int  main( )
        {
             fstream  file ("digit.txt", ios::in) ;
             char  ch ;

             if ( file.fail ( ) )
			 {
                 cout << "���ļ�digit.txt����! \n" ;
                 exit ( 0 ) ;
             }

             file.seekg (5L, ios::beg) ;
             file.get(ch) ;
             cout << "���ļ�ͷ��ʼ��5���ֽ�λ���ϵ��ַ��ǣ� "<< ch << endl ;

             file.seekg (-10L, ios::end) ;
             file.get(ch) ;
             cout << "���ļ�β��ʼ��10���ֽ�λ���ϵ��ַ��ǣ� "<< ch << endl ;

             file.seekg (3L, ios::cur) ;
             file.get(ch) ;
             cout << "�ӵ�ǰλ��ƫ��3���ֽ��Ժ��ַ��ǣ� "<< ch << endl ;

             file.close( ) ;

             return 0;
        }
