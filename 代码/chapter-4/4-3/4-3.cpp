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

            cout << "�����ܹ�˾��Ԥ�㣺" ;
            cin >> amount ;
            Budget::mainOffice( amount ) ;

            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "�����ӹ�˾ " << ( count + 1) << " Ԥ��" ;
                cin >> bud ;
                divisions[count].addBudget ( bud ) ;
                cout << "�����ӹ�˾ " ;
                cout << ( count + 1) << " �ĸ����칫��Ԥ�㣺" ;
                cin >> bud ;
                auxOffices[count].addBudget ( bud , divisions[count] ) ;
            }

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;
            cout << "\n��˾Ԥ������:\n" ;
            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "\t �ӹ�˾ " << ( count + 1) << "Ԥ��RMB " ;
                cout << divisions[count].getDivBudget (  ) ;
                cout << " , �����칫��Ԥ��RBM " 
                    << auxOffices[count].getDivBudget ( ) << endl ;
            }

            cout << "\t ��˾�����ܹ�˾����Ԥ�� RMB " ;
            cout << divisions[0].getCorpBudget (  ) << endl ;

            return 0;
        }
