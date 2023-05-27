        #ifndef   INVOICEITEM2_H
        #define  INVOICEITEM2_H
        #include  <string.h>
        class  InvoiceItem    // 定义InvoiceItem类
        {
        private:
            char  *desc ;
            int  storage ;
        public:
            InvoiceItem ( int  size = 51)    // 具有一个int型形参的构造函数
            { 
                desc = new  char [ size] ;  
            }
            InvoiceItem ( char  *d )       // 具有一个char* 型形参的构造函数
            { 
                desc = new  char [ strlen (d)+1] ;
                strcpy (desc, d) ; 
            }
            InvoiceItem ( char  *d , int  u)  // 具有两个参数的构造函数
            { 
                desc = new  char [strlen (d)+1] ;  
                strcpy (desc, d) ;
                storage = u ; 
            }
            ~InvoiceItem(  ) 	// 析构函数
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
