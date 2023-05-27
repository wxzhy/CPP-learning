        #ifndef  INVOICEITEM_H
        #define  INVOICEITEM_H
        #include  <string.h>

        class  InvoiceItem       // 定义InvoiceItem类
        {
        private:
            char  *desc ;
            int  storage ;
        public:
            InvoiceItem ( int  size = 51)    // 第一个构造函数具有一个int型参数
            { 
                desc = new  char [ size] ;  
            }
            InvoiceItem ( char  *d ) 	// 第二个构造函数具有一个char* 型参数
            { 
                desc = new  char [ strlen (d)+1] ;
                strcpy (desc, d) ; 
            }
            ~InvoiceItem(  )    	// 析构函数
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
