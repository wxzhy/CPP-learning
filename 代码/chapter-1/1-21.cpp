        #include  <iostream>
        using namespace std;

            // 下面给出了三个函数的原型
        void  getChoice ( char  & ) ;
        float  calcWeeklyPay ( int , float ) ;
        float  calcWeeklyPay ( float ) ;

        int  main ( )
        {   
            char  selection ;
            int  worked ;
            float  rate , yearly ;

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "请选择计算工资的方式\n" ;
            cout << "(H) 计算计时工资 \n" ;
            cout << "(S) 计算员工的工资\n" ;

            getChoice( selection) ;
            switch( selection) {
                case    'H' :
                case    'h' : 	
                    cout << "已经工作多少小时? " ;
                    cin >> worked ;
                    cout << "每小时的报酬是多少? " ;
                    cin >> rate ;
                    cout << "本周毛收入为：" ;
                    cout << calcWeeklyPay(worked, rate ) ;
                    break ;
                case    'S' :
                case    's' : 	
                    cout << "年薪为多少? " ;
                    cin >> yearly ;
                    cout << "本周毛收入为：" ;
                    cout << calcWeeklyPay(yearly) ;
                    break ;
            }
            return 0;
        }

        //*******************************************************************
        // getChoice 函数
        // 函数的参数是一个 char 类型的引用，要求用户输入字符 H、h 或 S、s
        //*******************************************************************
        void  getChoice ( char &letter)
        {
            do {
               cout << "请输入 H 或 S： " ;
               cin >> letter ;
            } while(letter != 'H'  && letter  != 'h'  && letter  != 'S'  && letter != 's') ;
        }

        //*******************************************************************
        // 定义重载函数calcWeeklyPay
        // 计算计时员工的周薪，采用工作时数 * 单位小时工资，返回周薪
        //*******************************************************************
        float  calcWeeklyPay ( int  hours, float  payRate )
        {
            return  hours * payRate ;
        }

        //*******************************************************************
        // 定义重载函数calcWeeklyPay，功能是计算员工的周薪
        // 参数是该员工的年薪，返回值是年薪除以52的值
        //*******************************************************************
        float  calcWeeklyPay ( float  annSalary )
        {
             return  annSalary / 52.0f ;
        }