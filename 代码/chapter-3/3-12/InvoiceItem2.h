        #ifndef   INVOICEITEM2_H
        #define  INVOICEITEM2_H
        #include  <string.h>
        class  InvoiceItem    // ����InvoiceItem��
        {
        private:
            char  *desc ;
            int  storage ;
        public:
            InvoiceItem ( int  size = 51)    // ����һ��int���βεĹ��캯��
            { 
                desc = new  char [ size] ;  
            }
            InvoiceItem ( char  *d )       // ����һ��char* ���βεĹ��캯��
            { 
                desc = new  char [ strlen (d)+1] ;
                strcpy (desc, d) ; 
            }
            InvoiceItem ( char  *d , int  u)  // �������������Ĺ��캯��
            { 
                desc = new  char [strlen (d)+1] ;  
                strcpy (desc, d) ;
                storage = u ; 
            }
            ~InvoiceItem(  ) 	// ��������
            { 
                delete[ ] desc ; 
            }
            void  setInformation ( char *d, int  u)
            { 
                strcpy (desc, d) ; 
                storage = u ; 
            }
            void  	setstorage ( int  u ) 	{  storage = u ;  }
            char  	*getDescription (  )	{  return  desc ;  }
            int  	getstorage(  ) 		{  return  storage ;  }
        } ;
         #endif
