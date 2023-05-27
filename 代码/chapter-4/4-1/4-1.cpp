        #include  <iostream>
        using namespace std;

        #include  "budget.h"      // 包含Budget 类
        float  Budget::CorpBudget = 0 ;   // 定义Budget类中的静态成员

        int  main(  )
        {
            Budget  divisions[4] ;
            int  count ;
            float  bud ;

            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "输入子公司 " << ( count + 1) << " 预算额：" ;
                cin >> bud ;
                divisions [count].addBudget ( bud ) ;
            }

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;

            cout << "\n 公司预算如下:\n" ;
            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "\t 子公司 " << ( count + 1) << "预算RMB " ;
                cout << divisions[count].getDivBudget (  ) << endl ;
            }
            cout << "\t 公司总预算 RMB " ;
            cout << divisions[0].getCorpBudget (  ) << endl ;

            return 0;
        }
