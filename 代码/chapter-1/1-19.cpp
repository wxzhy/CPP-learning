        #include  <iostream>
        using namespace std;

            // 下面是 doubleNum 和 getNum 函数的原型，它们的参数都是一个引用。
        void  doubleNum ( int  & ) ;
        void  getNum ( int  & ) ;

        int  main ( )
        {   
            int  value ;

            getNum ( value ) ;			// 在函数调用时没有符号&
            doubleNum ( value ) ;
            cout << "乘以 2 以后的结果是：" << value << endl ; 

            return 0;
        }

        //*******************************************************************
        // getNum函数。函数参数是一个引用，从键盘上读一个值并存储到userNum
        //*******************************************************************
        void  getNum ( int  &userNum )
        {
            cout << "请输入一个数: " ;
            cin >> userNum ;
        }

        //*******************************************************************
        // doubleNum 函数。函数参数是一个引用，在函数内将该参数乘以2。
        //*******************************************************************
        void  doubleNum ( int  &refVar)
        {
            refVar *= 2 ;
        }
