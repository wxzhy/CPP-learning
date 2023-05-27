        #include  "test.h"

        		//  Test类的构造函数，参数q 代表问题的个数，m代表答错的题数
        Test  ::  Test ( int  q  ,  int  m )
        {
            float  numericGrade ;

            numQuestions = q ;
            numMissed = m ;
            pointsEach = 100.0f / numQuestions ;
            numericGrade = 100.0f - numMissed * pointsEach ;
            setScore ( numericGrade ) ;
        }
