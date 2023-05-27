        #include  <iostream>
        using namespace std;
        #include  <iomanip>

		int  main ( )
        {
            char  word [5] ;	

            cout << "请输入一个单词: " ;
            cin >> setw(5) >> word ;
            cout << "你输入的是：" << word << endl ;

			return 0;
        }
