        #include  <iostream>
        using namespace std;
        #include  <string.h>

        class  InvoiceItem 
        { 
        private:
            char  *desc ;
            int  storage ; 
        public:
            InvoiceItem(  )       // 构造函数
            { 
                desc = new  char[51] ;  
                cout << "调用构造函数\n" ;
            }
            ~InvoiceItem(  ) 	// 析构函数
            { 
                delete  [ ]desc ;		// 释放内存空间
                cout << "调用析构函数\n" ;
            }
            void  setInformation ( char  *dscr ,  int  un ) 
            { 
                strcpy (desc, dscr) ;
                storage = un ;
            }
            char  *getDescription (  ){  return  desc ;  }
            int  getstorage(  ) {  return  storage ;  }
        } ;

        int  main(  )
        {
            InvoiceItem  stock ;

            stock. setInformation ("鼠标", 20) ;
            cout << "商品信息： "<< stock.getDescription ( ) << endl ;
            cout << "库存量： "<< stock.getstorage( ) << endl ;
            return 0;
        }
