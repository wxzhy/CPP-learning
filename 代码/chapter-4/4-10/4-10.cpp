        #include  <iostream>
        using namespace std;
        #include  "mystring.h"

        int  main(  )
        {
            MyString  obj1("I ") , obj2("love ") ;
            MyString  obj3("China") ;
            MyString  obj4 = obj1 ;			// 调用拷贝构造函数
            char str[ ] = "!" ;

            cout << "对象 1: "<< obj1 << endl ;
            cout << "对象 2: "<< obj2 << endl ;
            cout << "对象 3: "<< obj3 << endl ;
            cout << "对象 4: "<< obj4 << endl ;
            cout << "字符数组: "<< str << endl ;

                // 演示对象 += 操作
            obj1 += obj2 ;
            obj1 += obj3 ;
            obj1 += str ;
            cout << "对象 1: "<< obj1 << "\n\n" ;

                // 演示关系运算
            if ( obj1 == str )
                  cout << obj1 << " 等于字符数组 "<< str << endl ;
            else   cout << obj1 << " 不等于字符数组 "<< str << endl ;
            if ( obj3  ==  "China" )
                  cout << obj3 << " 等于 China\n" ;
            else   
                  cout << obj3 << " 不等于 China\n" ;
            if ( obj1 > obj2 )
                  cout << obj1 << " 大于 "<< obj2 << endl ;
            else   
                  cout << obj1 << " 不大于 "<< obj2 << endl ;   
            if ( obj1 >= obj2 )
                  cout << obj1 << " 大于或等于 "<< obj2 << endl ;
            else   
                  cout << obj1 << " 小于 "<< obj2 << endl ;
            return 0;
        }
