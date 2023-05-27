        #include  <iostream>
        using namespace std;
        #include  "IntArray.h"
             //  IntArray 类的构造函数，对list 中的每个元素初始化
        IntArray::IntArray(  )
        {
            for ( int  i = 0 ; i < 20 ; i++ )
                list[ i ] = 0 ;
        }
            //  isValid 函数，检验参数 element 是否为有效的下标
        bool  IntArray::isValid ( int  element)
        {
            bool   status = true ;

            if ( element < 0 || element > 19) 
            {
                cout << "错误: "<< element << " 不是一个有效的数组下标.\n" ;
                status = false ;
            }
            return  status ;
        }
           // set 函数向指定的数组位置存储一个值。如果存储成功返回true，否则返回false
        bool  IntArray::set ( int  element,  int  value )
        {
            bool  status = false ;

            if ( isValid ( element ) ) 
            {
                list[element] = value ;
                status = true ;
            }
            return  status ;
        }
              // get 函数获得数组中指定位置的值，成功返回true，失败返回false
        bool  IntArray::get ( int  element , int  &value )
        {
            bool   status = false ;

            if ( isValid(element ) ) 
            {
                value = list [element] ;
                status = true ;
            }
            return  status ;
        }
