        #include  <iostream>
        using namespace std;
        #include  "InvoiceItem.h"
        int  main(  )
        {
            InvoiceItem  iteml("���") ;	// ���õڶ������캯��
            InvoiceItem  item2 ; 			// ���õ�һ�����캯��

            iteml.setstorage(1000) ;
            item2.setInformation ( "����" , 200 ) ;
            cout << "��Ʒ��Ϣ�� "<< iteml.getDescription ( ) << "\t" ;
            cout << "������� "<< iteml.getstorage( ) << endl ;
            cout << "��Ʒ��Ϣ�� "<< item2.getDescription ( ) << "\t" ;
            cout << "������� "<< item2.getstorage( ) << endl ;
            return 0;
        }
