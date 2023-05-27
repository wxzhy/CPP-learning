            // 本程序验证了多重继承
        #include  <iostream>
        using namespace std;
        #include  <iomanip>
        #include  "inchdist.h"

        int  main(  )
        {
            InchDist  inch ;
            float  in ;

            cout << "输入的距离英寸表示：" ;
            cin >> in ;
            inch.setDist( in) ;
            cout.precision( 1 ) ;
            cout.setf( ios :: fixed ) ;
            cout << inch.getDist( ) << " 英寸等于 " ;
            cout << inch.getFeet( ) << " 英尺.\n" ;
            cout << inch.getDist( ) << " 英寸等于 " ;
            cout << inch.getMiles( ) << " 英里\n" ;

            return 0;
        }
