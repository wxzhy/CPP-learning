        #include  <iostream>
        using namespace std;
        #include  "csstudent.h"

        int  main(  )
        {
            CsStudent  student1 ;
            char   chInput[51] ;	// �����ַ����Ļ�����
            int  intInput ;		// ������������ʱ����

            cout << "�������ѧ����������Ϣ��\n" ;
            cout << "������ " ;
            cin.getline( chInput , 51 ) ;
            student1.setName( chInput ) ;    	// ����ѧ��������
            cout << "ѧ�ţ� " ;
            cin.getline( chInput , 21 ) ;
            student1.setID( chInput ) ;					// ����ѧ����id��
            cout << "��ѧ��ݣ� " ;
            cin >> intInput ;
            student1.setYearAdmitted( intInput ) ;   // ������ѧʱ��
            cout << "��������ͨ������ѧʱ���� " ;
            cin >> intInput ;
            student1.setGenEdHours( intInput ) ;		// �����Ѿ�������ͨ������ѧʱ��
            cout << "��������ѧ�γ̵�ѧʱ���� " ;
            cin >> intInput ;
            student1.setMathHours( intInput ) ;			// �����Ѿ�������ѧ�γ̵�ѧʱ��
            cout << "������������ѧ�γ̵�ѧʱ���� " ;
            cin >> intInput ;
            student1.setCsHours( intInput ) ;				// �����Ѿ�����������ѧ�γ̵�ѧʱ��
            student1.setHours( ) ;    							// �����Ѿ��������ѧʱ��
            cout << "\nѧ����Ϣ����\n" ;
            student1.showInfo( ) ;								// ��ʾѧ������Ϣ

            return 0;
        }
