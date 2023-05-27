        #include  <iostream>
        using namespace std;

        template  < class   T >
        void  swapData( T  &var1 ,T  &var2 ) 
        {
            T   temp ;

            temp = var1 ;    var1 = var2 ;    var2 = temp ;
        }

        int  main(  ) 
        {
            char  firstChar , secondChar  ;
            int     firstInt ,    secondInt  ;
            float  firstFloat , secondFloat  ;

            cout << "输入两个字符：" ;
            cin >>  firstChar  >> secondChar  ;
                // 交换两个字符变量的内容
            swapData( firstChar , secondChar ) ;
            cout << firstChar  <<"  "<< secondChar  << endl ;

            cout << "输入两个整数：" ;
            cin >>  firstInt  >> secondInt ;
                // 交换两个整形变量的内容
            swapData( firstInt , secondInt ) ;
            cout << firstInt  <<" "<< secondInt  << endl ;

            cout << "输入两个浮点数： " ;
            cin >>  firstFloat  >> secondFloat  ;
                // 交换两个浮点类型变量的内容
            swapData( firstFloat , secondFloat ) ;
            cout << firstFloat  <<"  " << secondFloat  << endl ;

			return 0;
        }