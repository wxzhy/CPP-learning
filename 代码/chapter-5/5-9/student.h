        #ifndef  STUDENT_H
        #define  STUDENT_H
        #include  <string.h> 

        class  Student 		// ������һ�������࣬�������д��麯��
        {
        protected:
            char name[51] ;    	// ����
            char id[21] ;    			// ѧ��
            int  yearAdmitted ;   // ��ѧ���
            int  hoursCompleted;  // ����ѧʱ��
        public:
            Student(  ){  name[0] = id[0] = yearAdmitted = hoursCompleted = 0 ;  }
            void  setName( char  *n){  strcpy( name , n) ;  }
            void  setID( char  *i){  strcpy( id , i) ;  }
            void  setYearAdmitted( int  y){  yearAdmitted = y ;  }
            virtual   void  setHours(  ) = 0 ;			// ���麯��
            virtual   void  showInfo(  ) = 0 ;		// ���麯��
        } ;
        #endif
