        #include  <iostream>
        using namespace std;
        #include  "cube.h"

        int  main(  )
        {
            float  cubeWide , cubeLong , cubeHigh ;

            cout << "���뷽��Ĳ�����\n" ;
            cout << "�� " ;
            cin >> cubeWide ;
            cout << "���� " ;
            cin >> cubeLong ;
            cout << "�ߣ� " ;
            cin >> cubeHigh ;

                // ע�⣺���๹�캯������๹�캯�����ݲ���
            Cube  box ( cubeWide , cubeLong , cubeHigh) ;
            cout << "����������£�\n" ;
            cout << "�� " << box.getWidth ( ) << endl ;
            cout << "���� " << box.getLen ( ) << endl ;
            cout << "�ߣ� " << box.getHeight ( ) << endl ;
            cout << "����� " << box.getArea ( ) << endl ;
            cout << "����� " << box.getVol ( ) << endl ;

            return 0;
        }
