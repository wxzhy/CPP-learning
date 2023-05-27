        #ifndef  DATETIME_H
        #define  DATETIME_H
        #include  "string.h"
        #include  "date.h" 		 //Date 类定义在此文件中
        #include  "time.h" 		 //Time 类定义在此文件中

		class  DateTime : public  Date , public  Time  	 // 注意此行的定义
        {
		protected:
            char   dTString[20] ;
		public:
            DateTime( int , int , int , int , int , int ) ;
            void  getDateTime( char  *str){  strcpy( str , dTString) ;  }
        } ;
        #endif
