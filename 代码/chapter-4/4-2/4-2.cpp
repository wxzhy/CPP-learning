        #include  <iostream>
        using namespace std;
        #include  "budget2.h"    // Budget�ඨ���ڴ��ļ���

        int  main(  )
        {
            float  amount ;
            int    count ;
            float  bud ;

            cout << "�����ܹ�˾��Ԥ�㣺" ;
            cin >> amount ;
            Budget::mainOffice( amount ) ;	// ���þ�̬�ĺ�����Ա
            Budget  divisions[4] ;

            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "�����ӹ�˾ " << ( count + 1) << " Ԥ��" ;
                cin >> bud ;
                divisions [count].addBudget ( bud ) ;
            }

            cout.precision (2 ) ;
            cout.setf ( ios::showpoint | ios::fixed ) ;

            cout << "\n��˾Ԥ������:\n" ;
            for ( count = 0 ; count < 4 ; count++ ) 
            {
                cout << "\t �ӹ�˾ " << ( count + 1) << "Ԥ��RMB " ;
                cout << divisions[count].getDivBudget (  ) << endl ;
            }
            cout << "\t ��˾�����ܹ�˾����Ԥ�� RMB " ;
            cout << divisions[0].getCorpBudget (  ) << endl ; 

            return 0;
        }
