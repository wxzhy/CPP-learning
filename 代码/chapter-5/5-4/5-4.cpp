        #include  <iostream>
        using namespace std;
        #include  "cube.h"

        int  main(  )
        {
            float  cubeWide , cubeLong , cubeHigh ;

            cout << "输入方体的参数：\n" ;
            cout << "宽： " ;
            cin >> cubeWide ;
            cout << "长： " ;
            cin >> cubeLong ;
            cout << "高： " ;
            cin >> cubeHigh ;

                // 注意：子类构造函数向基类构造函数传递参数
            Cube  box ( cubeWide , cubeLong , cubeHigh) ;
            cout << "方体参数如下：\n" ;
            cout << "宽： " << box.getWidth ( ) << endl ;
            cout << "长： " << box.getLen ( ) << endl ;
            cout << "高： " << box.getHeight ( ) << endl ;
            cout << "面积： " << box.getArea ( ) << endl ;
            cout << "体积： " << box.getVol ( ) << endl ;

            return 0;
        }
