        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <ctype.h>

		struct  Info 
        {
            char	name [21] ;
            int		age ;
            char	address[51] ;
            char	phone [14] ;
            char	email[51] ;
        } ;

        int  main( )
        {
            fstream  people("people.dat", ios::out | ios::binary) ;
            Info  person ;
            char  again ;

            if (people.fail ( ) ) 
            {
                cout << "���ļ�people.dat����! \n" ;
                exit ( 0 ) ;
            }

            do {
                cout << "���������������: \n" ;
                cout <<  "����:  " ;
                cin.getline(person.name, 21) ;
                cout << "����: " ;
                cin >> person.age ;
                cin.ignore( ) ;                // �Թ����з�

                cout << "��ϵ��ַ: " ;
                cin.getline(person.address, 51) ;
                cout << "��ϵ�绰: " ;
                cin.getline(person.phone, 14) ;
                cout << "E-mail: " ;
                cin.getline(person.email, 51) ;

                people .write ( ( char *)&person, sizeof (person) ) ;

                cout << "��Ҫ������һ��ͬѧ�������� ? " ;
                cin >> again ;
                cin.ignore( ) ;
            } while ( toupper ( again ) == 'Y' ) ;
            people.close( ) ;                // �ر��ļ�

                // �������ٴδ��ļ����ж�ȡ����
            cout << "\n\n*** ������ʾ�����˵����� ***\n" ;
            people.open ("people.dat", ios::in | ios::binary) ;
            if (people.fail ( ) ) 
            {
                cout << "���ļ�people.dat����! \n" ;
                exit ( 0 ) ;
            }

            people.read ( ( char *)&person, sizeof (person) ) ;
            while ( !people.eof ( ) ) 
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

                cout << "\n�����������ʾ��һ���˵ļ�¼!\n" ;
                cin.get(again) ;
                people.read ( ( char *)&person, sizeof (person) ) ;
            }

            cout << "��ʾ��� ! \n" ;
            people.close( ) ;

            return 0;
        }