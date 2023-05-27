        #include  "test2.h"

                //  Test 类的构造函数，参数q 代表问题数，m代表答错的题数
        Test  ::  Test ( int  q , int  m )
        {
            float  numericGrade ;

            numQuestions = q ;
            numMissed = m ;
            pointsEach = 100.0f / numQuestions ;
            numericGrade = 100.0f - numMissed * pointsEach ;
            setScore ( numericGrade ) ;
        }

                //  adjustScore函数对score变量进行四舍五入处理，并重新计算letter的值
        void  Test  ::  adjustScore (  )
        {
            if ( ( score - int  ( score ) ) >= 0.5f )  
            {
                score=( int )( score + 0.5 ) ;
                calculateGrade(  );	  // 重新计算letter的值
            }
        }
