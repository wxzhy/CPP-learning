        #include  <iostream>
        using namespace std;
        #include  "budget2.h"    // Budget类定义在此文件中

        int  main(  )
        {
            float  amount ;
            int    count ;
            float  bud ;

            cout << "输入总公司的预算：" ;
            cin >> amount ;
            Budget::mainOffice( amount ) ;	// 调用静态的函数成员
            Budget  divisions[4] ;

            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "输入子公司 " << ( count + 1) << " 预算额：" ;
                cin >> bud ;
                divisions [count].addBudget ( bud ) ;
            }

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;

            cout << "\n公司预算如下:\n" ;
            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "\t 子公司 " << ( count + 1) << "预算RMB " ;
                cout << divisions[count].getDivBudget (  ) << endl ;
            }
            cout << "\t 公司（含总公司）总预算 RMB " ;
            cout << divisions[0].getCorpBudget (  ) << endl ; 

            return 0;
        }
