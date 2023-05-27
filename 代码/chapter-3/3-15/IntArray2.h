        #ifndef  INTARRAY2_H
        #define  INTARRAY2_H
        class  IntArray 
        {
        private:
            int 	list[20] ;
            bool 	isValid( int ) ;
        public:      
            IntArray(  ) ;		// 构造函数
            bool 	set ( int , int ) ;
            bool 	get ( int , int & ) ;

                // 下面是新增加的几个函数成员
            int 	linearSearch( int ) ;
            int 	binarySearch( int ) ;
            void 	bubbleSort(  ) ;
            void 	selectionSort(  ) ;
        } ;
        #endif
