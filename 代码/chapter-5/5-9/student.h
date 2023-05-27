        #ifndef  STUDENT_H
        #define  STUDENT_H
        #include  <string.h> 

        class  Student 		// 该类是一个抽象类，它包含有纯虚函数
        {
        protected:
            char name[51] ;    	// 姓名
            char id[21] ;    			// 学号
            int  yearAdmitted ;   // 入学年份
            int  hoursCompleted;  // 已修学时数
        public:
            Student(  ){  name[0] = id[0] = yearAdmitted = hoursCompleted = 0 ;  }
            void  setName( char  *n){  strcpy( name , n) ;  }
            void  setID( char  *i){  strcpy( id , i) ;  }
            void  setYearAdmitted( int  y){  yearAdmitted = y ;  }
            virtual   void  setHours(  ) = 0 ;			// 纯虚函数
            virtual   void  showInfo(  ) = 0 ;		// 纯虚函数
        } ;
        #endif
