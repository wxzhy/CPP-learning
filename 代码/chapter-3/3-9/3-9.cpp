        #include  <iostream>
        using namespace std;
        #include “sale2.h"

        int  main(  )
        {
            Sale  cashier1 ;             // 采用缺省形参值0.05f
            Sale  cashier2(0.06f );     //采用指定形参值0.06f
            float  amount ;

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "请输入销售额: " ;
            cin >> amount ;
            cashier1.calculateSale( amount ) ;
            cashier2.calculateSale( amount ) ;
            cout << "采用 0.05 的税率计算销售总额是 RMB" ;
            cout << cashier1.getTotal( ) << endl ;
            cout << "采用 0.06 的税率计算销售总额是 RMB" ;
            cout << cashier2.getTotal( ) << endl ;
            return 0;
        }
