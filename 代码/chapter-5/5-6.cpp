        #include  <iostream>
        using namespace std;

        class  Base 
        {
        public:
            void  showMsg(  ) {  cout << "This is the Base class .\n" ;  }
        } ;

        class  Derived  :  public  Base 
        {
        public:
            void  showMsg(  ) {  cout << "This is the Derived class .\n" ;  }
        } ;

        int  main(  )
        {
            Base  b ;
            Derived  d ;

            b.showMsg( ) ;
            d.showMsg( ) ;
            return 0;
        }
