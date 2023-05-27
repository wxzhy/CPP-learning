     #include  <iostream>
        using namespace std;
        int  main ( )
        {
            int   whole ;
            float  fractional ;
            char  letter ;

            cout << "请输入一个整数、一个浮点数和一个字符：" ;
            cin >> whole >> fractional >> letter ;
            cout << "整数："<< whole << endl ;
            cout << "浮点数："<< fractional << endl ;
            cout << "字符："<< letter << endl ;

            return 0;
        }