        #include  <iostream>
        using namespace std;

        int  square( int ) ;			// 函数原型
        float  square( float ) ;		// 函数原型

        int  main ( )
        {   
            int  userInt ;
            float  userFloat  ;

            cout.precision ( 2 ) ;
            cout << "请输入一个整数和浮点数: " ;
            cin >> userInt >> userFloat  ;
            cout << "它们的平方为： " ;
            cout << square(userInt) <<" 和 " << square(userFloat ) << endl ;
            return 0;
        }

        //*******************************************************************
        // 定义重载函数square，参数为int，返回值是int参数的平方
        //*******************************************************************
        int  square ( int  number )
        {
            return  number * number ;
        }

        //*******************************************************************
        // 定义重载函数square，参数为float，返回值是float参数的平方
        //*******************************************************************
        float  square ( float  number )
        {
            return  number * number ;
        }