        #ifndef  INTARRAY_H
        #define  INTARRAY_H
        class  IntArray {		// IntArray��Ķ���
        private:
            int   list[20] ;
            bool  isValid( int ) ;
        public:      
            IntArray(  ) ;
            bool 	set ( int , int ) ;
            bool 	get ( int , int & ) ;
        } ;
        #endif
