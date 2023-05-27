        #include  <iostream>
        using namespace std;
        #include  "test.h"

        int  main(  )
        {
            int  questions , missed ;
            cout << "测试的问题个数? " ;
            cin >> questions ;
            cout << "答错的个数? " ;
            cin >> missed ;

            Test   exam ( questions , missed ) ;           // 定义一个test类对象
            cout.precision ( 2) ;
            cout << "成绩是：" << exam.getScore (  ) << endl ;
            cout << "分数是：" << exam.getLetter (  ) << endl ;

            return 0;
        }
