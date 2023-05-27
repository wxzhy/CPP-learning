        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        struct  Info	    // ����һ���ṹ��
        {
            char	name [21] ;
            int	age ;
            char	address[51] ;
            char	phone [14] ;
            char	email[51] ;
        } ;
            // ����ԭ��
        long  byteNum( int ) ;
        void  showRec(Info) ;
        int  main( )
        {
            fstream  people ( "people.dat", ios::in | ios::binary ) ;
            Info  person ;

            if (people.fail ( ) ) 
            {
                cout << "���ļ�people.dat����! \n" ;
                exit ( 0 ) ;
            }

            cout << "������ 1 �ż�¼:\n" ;
            people.seekg ( byteNum( 1 ), ios::beg) ;
            people.read ( ( char *)&person, sizeof (person) ) ;
            showRec(person) ;

            cout << "������ 0 �ż�¼:\n" ;
            people.seekg (byteNum(0), ios::beg) ;
            people.read ( ( char *)&person, sizeof (person) ) ;
            showRec(person) ;
            people.close( ) ;
            return 0;
        }

        		// byteNum�������ؼ�¼�����ļ���ƫ����
        long  byteNum ( int  recNum )
        {
            return  sizeof (Info) * recNum ;
        }

        		// showRec������ʾ�����ṹ������еĸ�����
        void  showRec(Info  person)
        {
            cout <<  "����:  " ;
            cout << person.name << endl ;
            cout << "����: " ;
            cout << person.age << endl ;
            cout << "��ַ:  " ;
            cout << person.address << endl ;
            cout << "�绰: " ;
            cout << person.phone << endl ;
            cout << "E-mail: " ;
            cout << person.email << endl ;
        }