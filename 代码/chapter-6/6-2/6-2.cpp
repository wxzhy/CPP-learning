        #include  <iostream>
        using namespace std;
        #include  "intRange.h"
        int  main(  ) 
        {
            intRange  range( 5 , 10 ) ;
            int  userValue ;

            cout << "����һ��5 - 10֮���ֵ�� " ;
            try  {
                userValue = range.getInput( ) ;
                cout << "��������� " << userValue << endl ;
            }catch( intRange :: OutOfRange ){
                cout << "����ֵԽ��\n" ;
            }
            cout << "�������\n" ;
            return 0;
        }
