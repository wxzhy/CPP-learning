        #include  <iostream>
        using namespace std;
        #include  "sale.h"

        int  main(  )
        {
            Sale  cashier( 0.06f ) ;    // 6% 税率
            float  amount ;

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "请输入销售额: " ;
            cin >> amount ;
            cashier.calculateSale( amount ) ;
            cout << "销售总额是 RMB" ;
            cout << cashier.getTotal( ) << endl ;

            return 0;
        }