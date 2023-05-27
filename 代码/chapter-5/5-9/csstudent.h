        #ifndef  CSSTUDENT_H
        #define  CSSTUDENT_H
        #include  "student.h"

        class  CsStudent  :  public  Student
        {
        private:
            int  mathHours ;		// 数学学时
            int  csHours ;		// 计算机科学学时
            int  genEdHours ;		// 普通课程学时
        public:
            void  setMathHours( int  mh){  mathHours = mh ;  }
            void  setCsHours( int  csh){  csHours = csh ;  }
            void  setGenEdHours( int  geh){  genEdHours = geh ;  }

                // 下面两个函数不是纯虚函数
            void  setHours( ){ hoursCompleted = genEdHours+ mathHours+csHours;}
            void  showInfo(  ) ;	// 该函数定义在csstudent.cpp文件中
        } ;
        #endif
