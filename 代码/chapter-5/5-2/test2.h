        #ifndef  TEST2_H
        #define  TEST2_H
        #include  "grade2.h"

        class  Test  :  public  Grade  //  Test �������
        {
        private:
            int  	numQuestions ;
            float  	pointsEach ;
            int  	numMissed ;
        public:
            Test ( int , int ) ;
            void  adjustScore (  ) ;
        } ;
        #endif
