            // ��������֤�˶��ؼ̳�
        #include  <iostream>
        using namespace std;
        #include  <iomanip>
        #include  "inchdist.h"

        int  main(  )
        {
            InchDist  inch ;
            float  in ;

            cout << "����ľ���Ӣ���ʾ��" ;
            cin >> in ;
            inch.setDist( in) ;
            cout.precision( 1 ) ;
            cout.setf( ios :: fixed ) ;
            cout << inch.getDist( ) << " Ӣ����� " ;
            cout << inch.getFeet( ) << " Ӣ��.\n" ;
            cout << inch.getDist( ) << " Ӣ����� " ;
            cout << inch.getMiles( ) << " Ӣ��\n" ;

            return 0;
        }
