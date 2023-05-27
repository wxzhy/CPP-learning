        #include  <iostream>
        using namespace std;
        #include  <ctype.h>
        #include  "account.h"
        #include  "chrange.h"

        void  displayMenu (  ) ;
        void  makeDeposit ( Account  & ) ;
        void  withdraw ( Account  & ) ;

        const  char  *Msg = "请输入 a ~ g 之间的字母:" ;    // 出错信息
        int  main(  )
        {
            Account  savings ;                    // 定义一个Account对象
            CharRange  input ( 'A',  'G',  Msg ) ;    // 输入有效性检验对象
            char  choice ;                        // 用户输入的变量

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            do {
                displayMenu ( ) ;
                choice = input.getChar( ) ;
                switch ( choice ) {
                    case  'A':    cout << "当前的余额是 RMB" ;
                                cout << savings.getBalance ( ) << endl ;
                                break ;
                    case  'B':    cout << "已经交易过 " ;
                                cout << savings.getTransactions ( ) << " 次。\n" ;
                                break ;
                    case  'C':    cout << "这个时期的利息是: RMB" ;
                                cout << savings.getInterest ( ) << endl ;
                                break ;
                    case  'D':    makeDeposit ( savings) ;
                                break ;
                    case  'E':    withdraw ( savings) ;
                                break ;
                    case  'F':    savings.calculateInterest ( ) ;
                                cout << "利息已计算结束. \n" ;
    	            }
            } while(choice != 'G') ;
            return 0;
        }

             // displayMenu函数，屏幕上显示操作菜单
        void  displayMenu (  )
        {
            cout << "\n\na) 显示帐号余额\t\t\t" ;
            cout << "b ) 显示交易数\n" ;
            cout << "c) 显示当前时期所获利息\t\t" ;
            cout << "d) 存款\n" ;
            cout << "e ) 取款\t\t\t" ;
            cout << "f) 将利息加入余额\n" ;
            cout << "g) 退出程序\n\n" ;
            cout << "请输入你的选择:" ;
        }

              // makeDeposit函数，采用一个Account引用做参数，执行存款操作
        void  makeDeposit ( Account  &acnt )
        {
            float  amount ;

            cout << "请输入存款数:  " ;
            cin >> amount ;
            cin.ignore( ) ;				// 忽略后面的换行符
            acnt.makeDeposit ( amount ) ;
        }

        // withdraw 函数采用一个Account引用做参数，执行取款操作。
        void  withdraw ( Account  &acnt )
        {
            float  amount ;

            cout << "请输入取款数:  " ;
            cin >> amount ;
            cin.ignore( ) ;
            if ( !acnt.withdraw ( amount ) )
                cout << "错误：取款额大于余额.\n\n" ;
        }
