        #include  <iostream>
        using namespace std;
        #include  "test.h"

        int  main(  )
        {
            int  questions , missed ;
            cout << "���Ե��������? " ;
            cin >> questions ;
            cout << "���ĸ���? " ;
            cin >> missed ;

            Test   exam ( questions , missed ) ;           // ����һ��test�����
            cout.precision ( 2) ;
            cout << "�ɼ��ǣ�" << exam.getScore (  ) << endl ;
            cout << "�����ǣ�" << exam.getLetter (  ) << endl ;

            return 0;
        }
