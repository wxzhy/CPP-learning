        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <string.h>
            // ��������������ԭ��
        bool  openFileIn ( fstream  &, char [51] ) ;
        void  showContents ( fstream  & ) ;
        int  main ( )
        {
            fstream  dataFile ;

            if ( !openFileIn (dataFile,"demofile.txt") )  
            {
                cout << "���ļ�ʧ��!" << endl ;
                exit ( 0 ) ;
            }
            cout << "�ļ��򿪳ɹ� ! \n" ;
            cout << "���ڴ��ļ��ж�ȡ���� !\n" ;
            showContents(dataFile ) ;
            dataFile.close( ) ;
            return 0;
        }

        // ���ļ��������롣����ɹ�������tue��ʧ�ܷ���false��
        bool  openFileIn ( fstream  &file, char  name[ ] )
        {
            file.open (name, ios::in) ;
            return  file.fail ( ) ? false : true;
        }

        //  ͨ��ѭ�����ļ��ж�ȡ���ݣ�����ʾ����Ļ�ϡ�
        void  showContents ( fstream  &file )
        {
            char  name [81] ;

            while( !file.eof( ) ) 
            {
                file >> name ;
                if(file.fail())
                    break;
                cout << name << "    " ;
            }
        }
