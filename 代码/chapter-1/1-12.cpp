        #include  <iostream>
        using namespace std;
        #include  <iomanip>

        int  main ( )
        {
            double  day1, day2, day3, total ;

            cout << "输入第 1 天的销售量：" ;
            cin >> day1 ;
            cout << "输入第 2 天的销售量：" ;
            cin >> day2 ;
            cout << "输入第 3 天的销售量：" ;
            cin >> day3 ;
            total = day1 + day2 + day3 ;
            cout << "\n销售数据\n" ;
            cout << setprecision (5) ;
            cout << "第 1 天:"<< setw(8) << day1 << endl ;
            cout << "第 2 天:"<< setw(8) << day2 << endl ;
            cout << "第 3 天:"<< setw(8) << day3 << endl ;
            cout << "总   和:"<< setw(8) << total << endl ;

            return 0;
        }
