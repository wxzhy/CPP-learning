        #include  <iostream>
        using namespace std;
        #include  <iomanip>
        int  main ( )
        {
            double  day1, day2, day3, total ;

            cout << "����� 1 �����������" ;
            cin >> day1 ;
            cout << "����� 2 �����������" ;
            cin >> day2 ;
            cout << "����� 3 �����������" ;
            cin >> day3 ;
            total = day1 + day2 + day3 ;
            cout << "\n��������\n" ;
            cout.precision ( 2 ) ;	// ���ú�����Ա���þ���
            cout.setf ( ios::fixed | ios::showpoint ); //���ú�����Ա����С������ʾ
            cout << "�� 1 ��:" ;
            cout.width(8) ;       // ���ú�����Ա���������Ŀ��
            cout << day1 << endl ;
            cout << "�� 2 ��:" ;
            cout.width(8) ;
            cout << day2 << endl ;
            cout << "�� 3 ��:" ;
            cout.width(8) ;
            cout << day3 << endl ;
            cout << "��   ��:"<< setw(8) << total << endl;	//setw��widthЧ����ͬ

            return 0;
        }