        #include  <iostream>
        using namespace std;
        #include  <iomanip>
        #include  "InvoiceItem2.h"

        int  main(  )
        {
            InvoiceItem items[5]={
InvoiceItem("���",100),InvoiceItem("����",20), 
                                 InvoiceItem("Ӳ��", 300), InvoiceItem("����", 50), 
                                 InvoiceItem("����", 200) } ;

            cout << "\t\t ��Ʒ����Ϣ\n" ;
            for ( int  i = 0 ; i < 5 ; i++ ) {
                cout << setw(17) << items[i].getDescription ( ) ;
                cout << setw(12) << items[i].getstorage( )  << endl ;
            }
            return 0;
        }
