        #include  <iostream>
        using namespace std;
        #include ��sale2.h"

        int  main(  )
        {
            Sale  cashier1 ;             // ����ȱʡ�β�ֵ0.05f
            Sale  cashier2(0.06f );     //����ָ���β�ֵ0.06f
            float  amount ;

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "���������۶�: " ;
            cin >> amount ;
            cashier1.calculateSale( amount ) ;
            cashier2.calculateSale( amount ) ;
            cout << "���� 0.05 ��˰�ʼ��������ܶ��� RMB" ;
            cout << cashier1.getTotal( ) << endl ;
            cout << "���� 0.06 ��˰�ʼ��������ܶ��� RMB" ;
            cout << cashier2.getTotal( ) << endl ;
            return 0;
        }
