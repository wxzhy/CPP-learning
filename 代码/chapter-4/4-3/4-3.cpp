        #include  <iostream>
        using namespace std;
        #include  <iomanip>
        #include  "budget3.h"

        int  main(  )
        {
            float  amount ;
            int  count ;
            float  bud ;
            Budget  divisions[4] ;
            Aux  auxOffices[4] ;

            cout << "输入总公司的预算：" ;
            cin >> amount ;
            Budget::mainOffice( amount ) ;

            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "输入子公司 " << ( count + 1) << " 预算额：" ;
                cin >> bud ;
                divisions[count].addBudget ( bud ) ;
                cout << "输入子公司 " ;
                cout << ( count + 1) << " 的辅助办公室预算：" ;
                cin >> bud ;
                auxOffices[count].addBudget ( bud , divisions[count] ) ;
            }

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;
            cout << "\n公司预算如下:\n" ;
            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "\t 子公司 " << ( count + 1) << "预算RMB " ;
                cout << divisions[count].getDivBudget (  ) ;
                cout << " , 辅助办公室预算RBM " 
                    << auxOffices[count].getDivBudget ( ) << endl ;
            }

            cout << "\t 公司（含总公司）总预算 RMB " ;
            cout << divisions[0].getCorpBudget (  ) << endl ;

            return 0;
        }
