        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        void  showState ( fstream  & ) ;

        int  main ( )
        { 
            fstream testFile("stuff.dat", ios::out ) ;

            if ( testFile.fail ( ) ) 
            {
                cout << "���ļ�ʧ��! \n" ;
                exit ( 0 ) ;
            }

            int  num= 10 ;
            cout << "���ļ���д����! \n" ;
            testFile << num ;       // ͨ��testFile���ļ�дһ������
            showState ( testFile ) ;
            testFile.close( ) ;     // �ر��ļ�
            testFile.open ("stuff.dat", ios::in) ; // ���ļ���

            if ( testFile.fail ( ) ) 
			{
                cout << "���ļ�ʧ��! \n" ;
                exit ( 0 ) ;
            }
            cout << "\n���ļ��ж�һ������! \n" ;
            testFile >> num ;      // ���ļ��ж�һ������
            showState ( testFile ) ;
            cout << "\n�ٶ�һ������! \n" ;
            testFile >> num ;     // �����ֳ�����
            showState ( testFile ) ;
            testFile.close( ) ;        // �ر��ļ�

            return 0;
        }

        // ���ؼ���״̬�����ķ���ֵ��������clear( )����������
        void  showState ( fstream  &file )
        { 
            cout << "��ǰ�ļ���״̬λ����:\n" ;
            cout <<"  eof bit: "<< file.eof ( ) << "    " ;
            cout <<"  fail bit: "<< file.fail ( ) << "    " ;
            cout <<"  bad bit: "<< file.bad( ) << "    " ;
            cout <<"  good bit: "<< file.good( ) << endl ;

            file.clear( ) ;    // ���������λ
        }