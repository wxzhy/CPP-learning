        #include  <iostream>
        using namespace std;
        #include "Rectangle.h"      // 包含Rectangle类的定义

        int  main ( void )
        {
            Rectangle  box ;
            float  wide , boxLong ;

            cout<< "计算矩形的面积\n" ;
            cout << "输入矩形的宽：" ;
            cin >> wide ;
            cout << "输入矩形的长：" ;
            cin >> boxLong ;
            box.setData(wide , boxLong) ;
            box.calculateArea( ) ;
            cout << "矩形参数：" ;
            cout << "宽："<< box.getWidth( ) << ",  " ;
            cout << "长："<< box.getLength( ) << ",  " ;
            cout << "面积："<< box.getArea( ) << endl ;

            return 0;
        }