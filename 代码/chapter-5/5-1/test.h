        #ifndef  TEST_H
        #define  TEST_H
        #include  "grade.h"  		// 必须包含Grade 类的声明.
        class  Test  :  public  Grade 	//  Test 类的声明
        {
        private:
            int   	numQuestions ;
            float   	pointsEach ;
            int   	numMissed ;
        public:
            Test ( int , int ) ;
        } ;
        #endif
