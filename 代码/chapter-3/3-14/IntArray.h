        #ifndef  INTARRAY_H
        #define  INTARRAY_H
        class  IntArray {		// IntArray类的定义
        private:
            int   list[20] ;
            bool  isValid( int ) ;
        public:      
            IntArray(  ) ;
            bool 	set ( int , int ) ;
            bool 	get ( int , int & ) ;
        } ;
        #endif
