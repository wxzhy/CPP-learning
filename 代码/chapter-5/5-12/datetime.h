        #ifndef  DATETIME_H
        #define  DATETIME_H
        #include  "string.h"
        #include  "date.h" 		 //Date �ඨ���ڴ��ļ���
        #include  "time.h" 		 //Time �ඨ���ڴ��ļ���

		class  DateTime : public  Date , public  Time  	 // ע����еĶ���
        {
		protected:
            char   dTString[20] ;
		public:
            DateTime( int , int , int , int , int , int ) ;
            void  getDateTime( char  *str){  strcpy( str , dTString) ;  }
        } ;
        #endif
