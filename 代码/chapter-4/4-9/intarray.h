        #ifndef  INTARRAY_H
        #define  INTARRAY_H

        class  IntArray 
        {
        private:
            int  *aptr ;				// 指向存储区的指针
            int  arraySize ;			// 存储数组中元素的个数
            void  memError ( ) ;   // 处理内存分配错误
            void  subError( ) ;		// 处理下标越界
        public:
            IntArray( int ) ;			// 构造函数
            IntArray( const  IntArray  & ) ; 	// 拷贝构造函数
            ~IntArray( ) ;			// 析构函数
            int  size( ) 				// 返回数组对象的元素个数
            {
                return  arraySize ; 
            }
            int  &operator[ ] ( const  int& ) ; 	// 重载[ ] 运算符
        } ;
        #endif
