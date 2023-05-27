        #include  <iostream>
        using namespace std;
        #include  <stdlib.h>
        #include  "intarray.h"

        		// IntArray 类的构造函数，设置数组空间的大小，分配空间并初始化。
        IntArray::IntArray ( int  s )
        {
            arraySize = s ;
            aptr = new int [s] ;
            if (aptr == 0 )
                memError ( ) ;
                for ( int  count = 0 ; count < arraySize ; count++ )
                    *(aptr + count ) = 0 ;
        }

        		//  IntArray 的拷贝构造函数
        IntArray::IntArray( const  IntArray  &obj )
        {
            arraySize = obj.arraySize ;
            aptr = new int [arraySize] ;
            if (aptr == 0 )
                memError ( ) ;
            for ( int  count = 0 ; count < arraySize ; count++ )
                *(aptr + count ) = *(obj.aptr + count ) ;
        }

        		//  IntArray 类的析构函数
        IntArray::~IntArray( )
        {
            if (arraySize > 0 )
                delete  [ ] aptr ;
            arraySize=0 ;		// 将代表数组元素个数的变量清零
        }

        		//  memError 函数，用于内存分配错，显示错误信息，终止程序
        void  IntArray::memError ( )
        {
            cout << "错误：内存分配出错\n" ;
            exit ( 0 ) ;
        }

        		//  subError 函数，用于数组下标越界错，显示错误信息，终止程序
        void  IntArray::subError( )
        {
            cout << "错误：数组下标越界\n" ;
            exit ( 0 ) ;
        }

        		//  重载[ ]运算符，函数的参数代表数组下标，返回值是数组元素的引用
        int  &IntArray::operator[ ] ( const  int  &sub )
        {
            if ( sub<0 || sub >= arraySize )
                subError( ) ;
            return  aptr[sub] ;
        }
