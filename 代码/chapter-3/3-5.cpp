        #include  <iostream>
        using namespace std;

        class  Demo 
        {
        public:
            Demo(  )    // 构造函数
            { 
                cout << "目前在构造函数中!"<<endl ;
            }
        } ;

        int  main ( void )
        {
            Demo  demoObj ;            // 定义一个对象demoObj
            cout << "主函数运行结束! \n" ;

            return 0;
        }
