        #include  <iostream>
        using namespace std;
        #include  "test2.h"

        int  main(  )
        {
            int  questions , missed ;

            cout << "测试的问题个数? " ;
            cin >> questions ;
            cout << "答错的个数? " ;
            cin >> missed ;

            Test   exam ( questions , missed ) ;  // 定义一个Test类对象

            cout.precision  ( 2) ;
            cout.setf ( ios :: fixed ) ;
            cout << "调整前的分数： "<< exam.getScore (  ) << endl ;
            cout << "调整前的分值： "<< exam.getLetter (  ) << endl ;
            exam. adjustScore (  ) ;
            cout << "调整后的分数： "<< exam.getScore (  ) << endl ;
            cout << "调整后的分值： "<< exam.getLetter (  ) << endl ;

            return 0;
        }
