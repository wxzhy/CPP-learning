        #include  <iostream>
        using namespace std;

        #include  "budget.h"      // ����Budget ��
        float  Budget::CorpBudget = 0 ;   // ����Budget���еľ�̬��Ա

        int  main(  )
        {
            Budget  divisions[4] ;
            int  count ;
            float  bud ;

            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "�����ӹ�˾ " << ( count + 1) << " Ԥ��" ;
                cin >> bud ;
                divisions [count].addBudget ( bud ) ;
            }

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;

            cout << "\n ��˾Ԥ������:\n" ;
            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "\t �ӹ�˾ " << ( count + 1) << "Ԥ��RMB " ;
                cout << divisions[count].getDivBudget (  ) << endl ;
            }
            cout << "\t ��˾��Ԥ�� RMB " ;
            cout << divisions[0].getCorpBudget (  ) << endl ;

            return 0;
        }
