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
            cout << "�ʱࣺ "<< ZhangSan.zip << endl ;
            cout << "ʡ�� "<< ZhangSan.state << endl ;
            cout << "���У� "<< ZhangSan.city << endl ;
            cout << "�ֵ���ַ�� "<< ZhangSan.address << endl ;
            cout << "�ͻ����� "<< ZhangSan.name << endl ;
            cout << "���� " << ZhangSan.savings.getBalance ( ) << endl ;
            cout << "��Ϣ�� " << ZhangSan.savings.getInterest (  ) << endl ;
            cout << "���ࣺ " << ZhangSan.checking.getBalance ( ) << endl ;
            cout << "������Ϣ�� " << ZhangSan.checking.getInterest (  ) << endl ;
            return 0;
        }
