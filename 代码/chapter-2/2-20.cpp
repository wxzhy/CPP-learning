        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>  
        #include  <iomanip>  

        struct  Info    		// ����һ���ṹ��
        {
            char	name [21] ;
            int	    age ;
            char	address[51] ;
            char	phone [14] ;
            char	email[51] ;
        } ;

            //  ����ԭ��
        void	createFile(fstream  & );	// �����ļ�
        void	editFile(fstream  & );		// �޸��ļ�
        void	showFile(fstream  & );	// ��ʾ�ļ�

        int  main (void)
        {
            int  	choice;
            fstream  people("Info.dat", ios::in | ios::out | ios::binary);

            if ( people.fail ( ))            
			{
                cout << "���ļ�Info.dat����! \n" ;
                exit ( 0 ) ;
            }

            while( true )
            {
                cout<<"\n\t 1. Create   2.Show   3.Edit   4.Exit\n";
                cin>>choice;
                switch ( choice )
                {
                    case 1: 
                        createFile(people ); 
                        break;
                    case 2: 
                        showFile(people ); 	
                        break;
                    case 3: 
                        editFile(people );
                        break;
                    case 4: 
                        exit ( 0 );
               }
            }
            people.close( );
            return 0;
        }

            // �����createFile��������5���ռ�¼�����ļ�
        void  createFile ( fstream  & file )
        {
            Info  record={"",0,"","",""};

            for(int count = 0; count < 5; count++ )      // д�ռ�¼
            {
                cout << "д��¼: " << count << endl;
                file.write ((char *)&record, sizeof (record));
            }
            file.flush( );
        }

            // showFile����������ʾ�ļ�������
        void  showFile(fstream  & file )
        { 
            Info  person={"",0,"","",""} ;

            file.clear( );      // ��������
            file.seekg( 0L,ios::beg);
            
            while( !file.eof ( ) ) 
            {
                file.read ( ( char *)&person, sizeof (person) ) ;
                if(file.fail())
					break;
                cout <<  "����:  " << person.name;
                cout << setw(20)<< "�� ��: " << person.age ;
                cout << setw(20)<< "��ַ:  " << person.address<< endl;
                cout << "�绰: " << person.phone ;
                cout << setw(21)<< "E-mail: " << person.email << endl ; 
            
            }
        }

            // ����ĺ���ͨ������дָ�룬�����޸�����һ����¼
        void  editFile(fstream  & file )
        {
            Info  person ;
            long  recNum ;

            file.clear( ); 
            cout << "�����޸��ĸ��� (0 - 4) ? " ;
            cin >> recNum ;
            cin.ignore( ) ;        // �Թ�����Ļ��з�
            file.seekg (recNum * sizeof (person), ios::beg); // ������ָ��
            file.read ( ( char *)&person, sizeof (person));  // ����ԭ��������

                // ��ʾԭ������
            cout <<  "����:  " ;
            cout << person.name;
            cout << setw(20)<< "��  ��: " ;
            cout << person.age ;
            cout << setw(20)<< "��ַ:  " ;
            cout << person.address<< endl;
            cout << "�绰: " ;
            cout << person.phone ;
            cout << setw(21)<< "E-mail: " ;
            cout << person.email << endl << endl ;

                // ����������
            cout << "���������������Ϣ: \n" ;
            cout <<  "����:  " ;
            cin.getline(person.name, 21) ;
            cout << "����: " ;
            cin >> person.age ;
            cin.ignore( ) ;    // �Թ����з�

            cout << "��ϵ��ַ: " ;
            cin.getline(person.address, 51) ;
            cout << "��ϵ�绰: " ;
            cin.getline(person.phone, 14) ;
            cout << "E-mail: " ;
            cin.getline(person.email, 51) ;

            file.seekp ( recNum * sizeof (person), ios::beg) ;   // ����дָ��
            file.write ( ( char *)&person, sizeof (person) ) ;   // ����д��¼

            file.flush( );
        }