        #include  "test.h"

        		//  Test��Ĺ��캯��������q ��������ĸ�����m�����������
        Test  ::  Test ( int  q  ,  int  m )
        {
            float  numericGrade ;

            numQuestions = q ;
            numMissed = m ;
            pointsEach = 100.0f / numQuestions ;
            numericGrade = 100.0f - numMissed * pointsEach ;
            setScore ( numericGrade ) ;
        }
