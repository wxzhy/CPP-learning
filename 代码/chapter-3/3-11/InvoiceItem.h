        #ifndef  INVOICEITEM_H
        #define  INVOICEITEM_H
        #include  <string.h>

        class  InvoiceItem       // ����InvoiceItem��
        {
        private:
            char  *desc ;
            int  storage ;
        public:
            InvoiceItem ( int  size = 51)    // ��һ�����캯������һ��int�Ͳ���
            { 
                desc = new  char [ size] ;  
            }
            InvoiceItem ( char  *d ) 	// �ڶ������캯������һ��char* �Ͳ���
            { 
                desc = new  char [ strlen (d)+1] ;
                strcpy (desc, d) ; 
            }
            ~InvoiceItem(  )    	// ��������
            { 
                delete[ ] desc ; 
            }
            void  setInformation ( char *d, int  u)
            { 
                strcpy (desc, d) ; 
                storage = u ; 
            }
            void  setstorage ( int  u)  { storage = u ;  }
            char  *getDescription (  ){  return  desc ;  }
            int  getstorage(  ) 	{  return  storage ;  }
        } ;
