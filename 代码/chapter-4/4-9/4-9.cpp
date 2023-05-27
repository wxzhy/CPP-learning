        #include  <iostream>
        using namespace std;
        #include  "intarray.h"

        int  main(  )
        {
            IntArray  table( 10 ) ;    // 定义一个IntArray类对象
            int  x ;

            for ( x = 0 ; x < 10 ; x++ )
                table [ x ] = x  ; 
            for ( x = 0 ; x < 10 ; x++ )		// 显示数组中的值
                cout << table [ x ] <<  "  " ;
            cout << endl ;
            for ( x = 0 ; x < 10 ; x++ )		// 采用系统提供的运算符+操作数组元素
               table [ x ] = table [ x ] + 2 ;
            for ( x = 0 ; x < 10 ; x++ )		// 显示数组中的值
                cout << table [ x ] << "  " ;
            cout << endl ;
            for ( x = 0 ; x < 10 ; x++ )		// 采用系统提供的运算符++操作数组元素
                table [x] ++ ;
            for ( x = 0 ; x < 10 ; x++ )		// 显示数组中的值
                cout << table [ x ] <<"  " ;
            cout << endl ;

            cout << "\n访问 table[11]，测试下标越界\n" ;
            table[11] = 0 ;		// 测试数组下标越界

            return 0;
        }
