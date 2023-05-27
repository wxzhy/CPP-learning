        #include  <iostream>
        #include  <string> 
        using namespace std;

        void  RMBFormat( string & ) ;

        int  main( )
        {
            string  input ;

                // 输入人民币的数量
            cout << "按照 nnnnn.nn 格式输入人民币的数量: " ;
            cin >> input ;
            RMBFormat(input) ;
            cout << "格式化结果:  " ;
            cout << input << endl ;

            return 0;
        }

        		//函数的参数是一个string引用，它将一个普通字符串按照人民币的形式格式化。
        void  RMBFormat( string  &currency)
        {
            int  dp ;

            dp = currency.find('.') ; 	// 查找其中的点
            if(dp > 3)        // 插入分号
                for( int  x = dp - 3 ; x > 0 ; x -= 3)
                    currency.insert(x, ",") ;
            currency.insert( 0 , "RMB") ;	   // 插入人民币符号
        }
