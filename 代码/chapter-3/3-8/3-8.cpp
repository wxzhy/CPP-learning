        #include  <iostream>
        using namespace std;
        #include  "sale.h"

        int  main(  )
        {
            Sale  cashier( 0.06f ) ;    // 6% ˰��
            float  amount ;

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "���������۶�: " ;
            cin >> amount ;
            cashier.calculateSale( amount ) ;
            cout << "�����ܶ��� RMB" ;
            cout << cashier.getTotal( ) << endl ;

            return 0;
        }