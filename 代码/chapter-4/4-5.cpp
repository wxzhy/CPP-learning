       #include  "iostream"
        using namespace std;

        class  PersonInfo 
        {
        public:
            PersonInfo ( ) {    cout<<"调用构造函数\n" ;  }
            PersonInfo (PersonInfo  &obj ) {  cout<<"调用拷贝构造函数\n" ;  }
            ~PersonInfo ( ) {    cout<<"调用析构函数\n" ;    }
        } ;

        PersonInfo  getPerson (  )
        {
            PersonInfo  person ;
            return  person ;    // 函数的返回值是对象
        }


       int  main(  )
       {
           PersonInfo  student ;
           student = getPerson ( ) ;    // 将函数的返回值赋值给其它对象

           return 0;
       }
