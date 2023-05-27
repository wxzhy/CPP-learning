        #include  <iostream>
        using namespace std;

            // 下面是一个函数原型，给出了参数缺省值
        void  displayStars ( int = 10, int = 1) ;

        int  main ( )
        {
            displayStars( ) ;
            displayStars(5) ;
            displayStars(7, 3) ;

            return 0;
        }

        //*******************************************************************
        // displayStars函数的定义，函数参数cols的缺省值是10，rows的缺省值是1
        // 显示一个由星号构成的矩形。
        //*******************************************************************
        void  displayStars ( int  cols, int  rows)
        {
            for ( int  down = 0 ; down < rows ; down++ ) {
                for ( int  across = 0 ; across < cols ; across++ )
                    cout << "*" ;

                cout << endl ;
            }
        }
