        #include  <iostream>
        using namespace std;
        #include  <stdlib.h>

        int  main ( )
        {
            float  *sales, total = 0, average ;
            int  numDays , count ;

            cout << "��ϣ��������������� ? " ;
            cin >> numDays ;
            sales = new float [numDays] ; 					// �����ڴ�ռ�
            if ( sales == NULL )   						// ������
			{
                cout <<" �����ڴ�ռ�ʧ�� !\n" ;
                exit ( 0 ) ;
            }

                // �Ӽ�����������
            cout << "���������µ�������\n" ;
            for ( count = 0 ; count < numDays ; count++ ) 
			{
                cout << "�� " <<(count + 1) << " ��: " ;
                cin >> sales [count] ;
            }

            for ( count = 0 ; count < numDays ; count++ )  // �����ܵ�������
                total += sales [count] ;    
            average = total / numDays ;   // ������������ƽ��ֵ

                // ��ʾ���
            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "�ܵ�������: " << total << endl ;
            cout << "ƽ��������: " << average << endl ;

            delete [ ]sales ;  	// �ͷſռ�

			return 0;
        }