        #ifndef  CSSTUDENT_H
        #define  CSSTUDENT_H
        #include  "student.h"

        class  CsStudent  :  public  Student
        {
        private:
            int  mathHours ;		// ��ѧѧʱ
            int  csHours ;		// �������ѧѧʱ
            int  genEdHours ;		// ��ͨ�γ�ѧʱ
        public:
            void  setMathHours( int  mh){  mathHours = mh ;  }
            void  setCsHours( int  csh){  csHours = csh ;  }
            void  setGenEdHours( int  geh){  genEdHours = geh ;  }

                // ���������������Ǵ��麯��
            void  setHours( ){ hoursCompleted = genEdHours+ mathHours+csHours;}
            void  showInfo(  ) ;	// �ú���������csstudent.cpp�ļ���
        } ;
        #endif
