        #include  <iostream>
        using namespace std;
        #include  "SearchArray.h"

        int  main(  ) 
        {
            SearchArray<int >  intTable( 10 ) ;
            SearchArray<float  >  floatTable( 10 ) ;
            int  x , result ;

                // 在数组中存储值
            for( x = 0 ;  x < 10 ;  x++ ){
                intTable[x] = x +3 ;
                floatTable[x] = x + 1.6f  ;
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

                // 在数组中查找特定的值
            cout << "在intTable中找元素6\n" ;
            result = intTable.findItem( 6 ) ;
            if( result == -1 ) 
                cout << "在intTable中没有找到元素6\n" ;
            else
                cout << "\t元素6的下标是： " << result << endl ;

            cout << "在floatTable中查找 9.6\n" ;
            result = floatTable.findItem( 9.6f ) ;
            if( result == -1 ) 
                cout << "\t在floatTable中没有找到9.6\n" ;
            else
                cout << "\t元素 9.6 的下标是： " << result << endl ;

            return 0;
        }