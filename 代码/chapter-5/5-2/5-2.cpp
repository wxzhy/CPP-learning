        #include  <iostream>
        using namespace std;
        #include  "test2.h"

        int  main(  )
        {
            int  questions , missed ;

            cout << "���Ե��������? " ;
            cin >> questions ;
            cout << "���ĸ���? " ;
            cin >> missed ;

            Test   exam ( questions , missed ) ;  // ����һ��Test�����

            cout.precision  ( 2) ;
            cout.setf ( ios :: fixed ) ;
            cout << "����ǰ�ķ����� "<< exam.getScore (  ) << endl ;
            cout << "����ǰ�ķ�ֵ�� "<< exam.getLetter (  ) << endl ;
            exam. adjustScore (  ) ;
            cout << "������ķ����� "<< exam.getScore (  ) << endl ;
            cout << "������ķ�ֵ�� "<< exam.getLetter (  ) << endl ;

            return 0;
        }
