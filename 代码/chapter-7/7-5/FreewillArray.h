        #ifndef  FREEWILLARRAY_H
        #define  FREEWILLARRAY_H
        #include  <iostream>
        using namespace std;
        #include  <stdlib.h>

        template  < class  T >
        class  FreewillArray 
        {
        private:
            T  *aptr ;			// 采用模板参数T替换过去的int 
            int  arraySize ;
            void  memError( void ) ;    // 处理内存分配错误
            void  subError( void ) ;    // 处理下标越界错误
        public:
            FreewillArray( void ){  aptr = 0 ;  arraySize = 0 ;}
            FreewillArray( int ) ;       // 构造函数
            FreewillArray( const FreewillArray  & ) ;  // 拷贝构造函数
            ~FreewillArray( void ) ;    	// 析构函数
            int  size( void )  {  return  arraySize ;  }
            T  &operator[ ]( const  int  & );  // 对 [ ] 进行重载
        } ;

        		// FreewillArray类模板的构造函数。设置数组的大小，并对数组分配内存
        template  < class  T >
        FreewillArray  < T > :: FreewillArray( int  s ) 
        {
            arraySize = s ;
            aptr = new T [s] ;
            if( aptr == 0 )    memError( ) ;
            for( int  count = 0 ;  count < arraySize ;  count++ ) 
                *( aptr + count ) = 0 ;
        }

        		// FreewillArray类模板的拷贝构造函数
        template  < class  T >
        FreewillArray  < T > :: FreewillArray( const FreewillArray  &obj ) 
        {
            arraySize = obj.arraySize ;
            aptr = new T [arraySize] ;
            if( aptr == 0 )    memError( ) ;
            for( int  count = 0 ;  count < arraySize ;  count++ ) 
                *( aptr + count ) = *( obj.aptr + count ) ;
        }

        		// FreewillArray类模板的析构函数。
        template  < class  T >
        FreewillArray  < T > :: ~FreewillArray( void ) 
        {
            if( arraySize > 0 ) 
                delete [ ] aptr ;
        }

        		// memError 函数。当内存分配出错时，显示错误信息，并终止程序
        template  < class  T >
        void  FreewillArray  < T > :: memError( void ) 
        {
            cout << "错误：无足够的内存空间.\n" ;
            exit( 0 ) ;
        }

        		// subError 函数成员。当数组下标越界时，显示错误信息，并终止程序
        template  < class  T >
        void  FreewillArray  < T > :: subError( void ) 
        {
            cout << "错误：数组下标越界\n" ;
            exit( 0 ) ;
        }

        		// 重载运算符[ ]，函数的参数是一个下标，在正常情况下，函数返回
        		// 下标指定的数组元素的引用，否则调用subError函数终止程序。
        template  < class  T >
        T  &FreewillArray  < T > :: operator[ ]( const  int  &sub ) 
        {
            if( sub < 0 || sub > arraySize )
                subError( ) ;
            return  aptr[sub] ;
        }
        #endif
