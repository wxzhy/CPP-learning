        #ifndef  TEST_H
        #define  TEST_H
        #include  "grade.h"  		// �������Grade �������.
        class  Test  :  public  Grade 	//  Test �������
        {
        private:
            int   	numQuestions ;
            float   	pointsEach ;
            int   	numMissed ;
        public:
            Test ( int , int ) ;
        } ;
        #endif
