        #include  <iostream>
        using namespace std;
        #include  "InvoiceItem.h"
        int  main(  )
        {
            InvoiceItem  iteml("鼠标") ;	// 调用第二个构造函数
            InvoiceItem  item2 ; 			// 调用第一个构造函数

            iteml.setstorage(1000) ;
            item2.setInformation ( "电脑" , 200 ) ;
            cout << "商品信息： "<< iteml.getDescription ( ) << "\t" ;
            cout << "库存量： "<< iteml.getstorage( ) << endl ;
            cout << "商品信息： "<< item2.getDescription ( ) << "\t" ;
            cout << "库存量： "<< item2.getstorage( ) << endl ;
            return 0;
        }
