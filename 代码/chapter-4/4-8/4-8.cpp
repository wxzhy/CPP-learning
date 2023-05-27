        		// 该程序演示了各个重载函数的应用
        #include  <iostream>
        using namespace std;
        #include  "feetinches.h"

        int  main(  )
        {
            FeetInches  first , second;
            float  f ;
            int  i ;

                // 检验流插入符和提取符
            cout << "输入 first 对象\n" ;
            cin >> first ;
            cout << "输入 second 对象\n" ;
            cin >> second ;
            cout << "对象的值是:  " ;
            cout << first << " 和 "<< second<<endl ;

                // 检验符前置++、后置++、
            cout << "\n检验前置 ++ \n" ;
            first = ++second ;       //  前置 ++
            cout << "First 对象: "<< first.getFeet (  ) << " 英尺 , "
                 << first.getInches( ) <<" 英寸 " ;
            cout << "\nSecond对象: "<< second.getFeet (  ) << " 英尺 , " 
                 << second.getInches( ) <<" 英寸\n" ;
            cout << "\n检验后置 ++ \n" ;
            first = second++ ;      //  后置 ++
            cout << "First 对象: "<< first.getFeet (  ) << " 英尺 , "
                 << first.getInches( ) <<" 英寸 " ;
            cout << "\nSecond对象: "<< second.getFeet (  ) << " 英尺 , " 
                 << second.getInches( ) <<" 英寸\n\n" ;
            
			// 检验关系运算符
            cout << "检验关系运算 \n" ;
            if ( first == second )	    // 检验关系运算
                cout << "这两个对象相等 \n" ;
            else if ( first > second )
                cout << "first对象大于second对象\n" ;
            else 
                cout << "first对象小于second对象\n" ;

                // 检验类型转换
            cout << "\n检验类型转换 \n" ;
            f = second ;      // 调用类型转换函数operator  float  ( )
            i = second ;      // 调用类型转换函数operator  int ( )
            cout << "对象的值是：" << second ;
            cout <<" ，等于 " << f << " 英尺，" ;
            cout << "或近似于 " << i << " 英尺 \n" ;

            return 0;
        }
