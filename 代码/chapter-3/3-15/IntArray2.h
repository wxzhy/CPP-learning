        #ifndef  INTARRAY2_H
        #define  INTARRAY2_H
        class  IntArray 
        {
        private:
            int 	list[20] ;
            bool 	isValid( int ) ;
        public:      
            IntArray(  ) ;		// ���캯��
            bool 	set ( int , int ) ;
            bool 	get ( int , int & ) ;

                // �����������ӵļ���������Ա
            int 	linearSearch( int ) ;
            int 	binarySearch( int ) ;
            void 	bubbleSort(  ) ;
            void 	selectionSort(  ) ;
        } ;
        #endif
