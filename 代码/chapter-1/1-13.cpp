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
            cout.precision ( 2 ) ;	// 采用函数成员设置精度
            cout.setf ( ios::fixed | ios::showpoint ); //采用函数成员设置小数点显示
            cout << "第 1 天:" ;
            cout.width(8) ;       // 采用函数成员设置输出项的宽度
            cout << day1 << endl ;
            cout << "第 2 天:" ;
            cout.width(8) ;
            cout << day2 << endl ;
            cout << "第 3 天:" ;
            cout.width(8) ;
            cout << day3 << endl ;
            cout << "总   和:"<< setw(8) << total << endl;	//setw和width效果等同

            return 0;
        }