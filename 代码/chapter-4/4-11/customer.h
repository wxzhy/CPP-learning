        #include  "account.h"
        #include  "mystring.h"

        class  Customer 
        {
        public:
            MyString 	name ;     // MyString��Ķ�����ΪCustomer��ĳ�Ա
            MyString 	address ;
            MyString 	city ;
            MyString 	state ;
            MyString 	zip ;
            Account 	savings ;      // Account��Ķ�����ΪCustomer��ĳ�Ա
            Account 	checking ;

            Customer( char  *n , char  *a , char  *c , char  *s , char  *z )
            {
                name = n ;	address = a ; 	city = c ; 	state = s ; 	zip = z ;  
            }
        } ;
