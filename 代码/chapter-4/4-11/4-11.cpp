        #include  <iostream>
        using namespace std;
        #include  "customer.h"
        int  main( )
        {
            Customer  ZhangSan("ZhangSan","29YuDaoStreet", "Nanjing", 
"Jiangsu", "210016");

            ZhangSan.savings.makeDeposit (1000 ) ;
            ZhangSan.checking.makeDeposit (500 ) ;
            ZhangSan.savings.calcInterest (  ) ;
            ZhangSan.checking.calcInterest ( ) ;

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;
            cout << "邮编： "<< ZhangSan.zip << endl ;
            cout << "省： "<< ZhangSan.state << endl ;
            cout << "城市： "<< ZhangSan.city << endl ;
            cout << "街道地址： "<< ZhangSan.address << endl ;
            cout << "客户名： "<< ZhangSan.name << endl ;
            cout << "储蓄额： " << ZhangSan.savings.getBalance ( ) << endl ;
            cout << "利息： " << ZhangSan.savings.getInterest (  ) << endl ;
            cout << "结余： " << ZhangSan.checking.getBalance ( ) << endl ;
            cout << "核算利息： " << ZhangSan.checking.getInterest (  ) << endl ;
            return 0;
        }
