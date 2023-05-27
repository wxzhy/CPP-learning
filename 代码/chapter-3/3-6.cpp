        #include  <iostream>
        using namespace std;
        #include  <string.h>

        class  InvoiceItem 
        { 
        private:
            char  *desc ;
            int    storage ;
        public:
            InvoiceItem(  )   // 内联构造函数
            { 
                desc = new  char [51] ;  
            }

            void  setInformation ( char  *dscr ,  int  un ) 
            { 
                strcpy (desc, dscr) ;
                storage = un ;
            }

            char   *getDescription (  ) {  return  desc ;  }
            int  getstorage(  ) {  return  storage ;  }
        } ;

        int  main(  )
        {
            InvoiceItem  stock ;

            stock.setInformation ("鼠标", 20) ;
            cout << "商品信息： "<< stock.getDescription ( ) << endl ;
            cout << "库存量： "<< stock.getstorage( ) << endl ;

            return 0;
        }
