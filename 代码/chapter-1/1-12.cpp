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
            cout << setprecision (5) ;
            cout << "�� 1 ��:"<< setw(8) << day1 << endl ;
            cout << "�� 2 ��:"<< setw(8) << day2 << endl ;
            cout << "�� 3 ��:"<< setw(8) << day3 << endl ;
            cout << "��   ��:"<< setw(8) << total << endl ;

            return 0;
        }
