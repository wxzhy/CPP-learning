        #include "IntArray.h"
        #include  <iostream>
        using namespace std;

        int  main(  )
        {
            IntArray  numbers ;
            int  val , x ;

                // 将 1 存储在数组中，同时显示20个'*'
            for(x = 0 ; x < 20 ; x++ ) 
                if ( numbers.set(x, 1 ) )
                    cout << "* " ;
            cout << endl ; 

                // 输出数组中的 20 个元素
            for(x = 0 ; x < 20 ; x++ )   
               if ( numbers.get(x, val ) )
                    cout << val << "  " ;
            cout << endl ;

                // 进行越界检验：将3存储在下标为100的位置
            if ( numbers.set(100, 3) )
                cout << "对下标为 100 的元素空间设置成功!\n" ;
            return 0;
        }
