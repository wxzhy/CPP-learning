        #include  <iostream>
        using namespace std;
        #include  <string.h>

        class  InvoiceItem 
        { 
        private:
            char  *desc ;
            int    storage ;
        public:
            InvoiceItem(  )   // �������캯��
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

            stock.setInformation ("���", 20) ;
            cout << "��Ʒ��Ϣ�� "<< stock.getDescription ( ) << endl ;
            cout << "������� "<< stock.getstorage( ) << endl ;

            return 0;
        }
