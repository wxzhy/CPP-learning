        #include  <iostream>
        using namespace std;
        #include  "FeetDist2.h"

        int  main(  )
        {
            FeetDist  feet ;
            float  ft ;

            cout << "请输入以英尺为单位的距离： " ;
            cin >> ft ;
            feet.setDist( ft ) ;
            cout.precision( 1 ) ;
            cout.setf( ios :: fixed ) ;
            cout << feet.getDist( ) << " 英尺等于  " ;
            cout << feet.getMiles( ) << " 英里\n" ;
            cout << feet.getDist( ) << "  英尺的平方等于  " ;
            cout << feet.square( ) << " \n" ;
            return 0;
        }
