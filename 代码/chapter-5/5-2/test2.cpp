        #include  "test2.h"

                //  Test ��Ĺ��캯��������q ������������m�����������
        Test  ::  Test ( int  q , int  m )
        {
            float  numericGrade ;

            numQuestions = q ;
            numMissed = m ;
            pointsEach = 100.0f / numQuestions ;
            numericGrade = 100.0f - numMissed * pointsEach ;
            setScore ( numericGrade ) ;
        }

                //  adjustScore������score���������������봦�������¼���letter��ֵ
        void  Test  ::  adjustScore (  )
        {
            if ( ( score - int  ( score ) ) >= 0.5f )  
            {
                score=( int )( score + 0.5 ) ;
                calculateGrade(  );	  // ���¼���letter��ֵ
            }
        }
