        #include  <iostream>
        using namespace std;

        class  Base 
        {
        public:
            void  show(  ){  cout << "����ĺ�����Ա show( )\n" ;  }
        } ;

        class  Derived  :  public  Base 
        {
        public:
            void  show(  ){  cout << "����ĺ�����Ա show( )\n" ;  }
        } ;

        int  main(  )
        {
            Base  *bptr ;
            Derived  dobject ;

            bptr = &dobject ;
            bptr->show( ) ;	// ���û���ָ����ú������Խ����ʻ����еĺ���

            return 0;
        }
