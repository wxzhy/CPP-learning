        #include  <iostream>
        using namespace std;
        #include  <iomanip>
        #include  "InvoiceItem2.h"

        int  main(  )
        {
            InvoiceItem items[5]={
InvoiceItem("鼠标",100),InvoiceItem("电脑",20), 
                                 InvoiceItem("硬盘", 300), InvoiceItem("光驱", 50), 
                                 InvoiceItem("主板", 200) } ;

            cout << "\t\t 商品库信息\n" ;
            for ( int  i = 0 ; i < 5 ; i++ ) {
                cout << setw(17) << items[i].getDescription ( ) ;
                cout << setw(12) << items[i].getstorage( )  << endl ;
            }
            return 0;
        }
