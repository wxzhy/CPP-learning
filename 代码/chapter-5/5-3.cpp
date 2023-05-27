        #include  <iostream>
        using namespace std;

        class  BaseDemo	  // BaseDemo 类
        {
        public:
            BaseDemo (  )   	// 构造函数
            {
                cout << "调用基类 BaseDemo的构造函数 \n" ; 
            }

            ~BaseDemo (  )  	// 析构函数
            {
                cout << "调用基类 BaseDemo的析构函数 \n" ; 
            }
        } ;


        class  DerivedDemo  :  public  BaseDemo 
        {
        public:
            DerivedDemo (  )   	// 构造函数
            {
                cout << "调用子类 DerivedDemo 的构造函数 \n" ; 
            }

            ~DerivedDemo (  )   	// 析构函数
            {
                cout << "调用子类 DerivedDemo 的析构函数 \n" ; 
            }
        } ;

        int  main(  )
        {
            cout << "下面定义一个 DerivedDemo 类对象 \n" ;

            DerivedDemo   object ;       // 定义一个对象            
			cout << "\n下面将要结束程序 \n" ;

            return 0;
        }
