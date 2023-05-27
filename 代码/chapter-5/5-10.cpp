        #include  <iostream>
        using namespace std;

        class  Base 
        {
        public:
            void  show(  ){  cout << "基类的函数成员 show( )\n" ;  }
        } ;

        class  Derived  :  public  Base 
        {
        public:
            void  show(  ){  cout << "子类的函数成员 show( )\n" ;  }
        } ;

        int  main(  )
        {
            Base  *bptr ;
            Derived  dobject ;

            bptr = &dobject ;
            bptr->show( ) ;	// 采用基类指针调用函数，仍将访问基类中的函数

            return 0;
        }
