        #include  <iostream>
        using namespace std;

        int  main ( )
        {
            char  sentence [81] ;			// 81个字符的位置

            cout << "请输入一个句子：" ;
            cin.getline( sentence , 81) ;
            cout << "你输入的是：" << sentence << endl ;

			return 0;
        }
