        #include  <iostream>
        using namespace std;
        #include  "FeetDist2.h"

        int  main(  )
        {
            FeetDist  feet ;
            float  ft ;

            cout << "��������Ӣ��Ϊ��λ�ľ��룺 " ;
            cin >> ft ;
            feet.setDist( ft ) ;
            cout.precision( 1 ) ;
            cout.setf( ios :: fixed ) ;
            cout << feet.getDist( ) << " Ӣ�ߵ���  " ;
            cout << feet.getMiles( ) << " Ӣ��\n" ;
            cout << feet.getDist( ) << "  Ӣ�ߵ�ƽ������  " ;
            cout << feet.square( ) << " \n" ;
            return 0;
        }
