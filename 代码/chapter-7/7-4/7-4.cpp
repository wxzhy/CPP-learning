        #include  <iostream>
        using namespace std;
        #include  "freewillArray.h"

        int  main(  ) 
        {
            FreewillArray <int> intTable(10);  // intTable和floatTable都是对象
            FreewillArray <float> floatTable(10);
            int  x ;

                // 在数组中存储值
            for( x = 0 ;  x < 10 ;  x++ )
			{
                intTable[x] = x ;
                floatTable[x] = x ;
            }

                // 显示数组中的值
            cout << "intTable中的值是：\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << intTable[x] << "  " ;
            cout << endl ;
            cout << "floatTable中的值是：\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << floatTable[x] << "  " ;
            cout << endl ;

                // 对数组元素采用内嵌+操作
            for( x = 0 ;  x < 10 ;  x++ )
			{
                intTable[x] = intTable[x] + 1 ;
                floatTable[x] = floatTable[x] + 1.5f ;
            }

                // 显示数组中的值
            cout << "intTable中的值是：\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << intTable[x] << "  " ;
            cout << endl ;
            cout << "floatTable中的值是：\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << floatTable[x] << "  " ;
            cout << endl ;

                // 对数组元素采用内嵌++操作
            for( x = 0 ;  x < 10 ;  x++ )
			{
                intTable[x]++ ;
                floatTable[x]++ ;
            }

                // 显示数组中的值
            cout << "intTable中的值是：\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << intTable[x] << "  " ;
            cout << endl ;

            cout << "floatTable中的值是：\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << floatTable[x] << "  " ;
            cout << endl ;

            return 0;
        }
