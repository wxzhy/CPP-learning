        #include  "account.h"
        #include  "mystring.h"

        class  Customer 
        {
        public:
            MyString 	name ;     // MyString类的对象作为Customer类的成员
            MyString 	address ;
            MyString 	city ;
            MyString 	state ;
            MyString 	zip ;
            Account 	savings ;      // Account类的对象作为Customer类的成员
            Account 	checking ;

            Customer( char  *n , char  *a , char  *c , char  *s , char  *z )
            {
                name = n ;	address = a ; 	city = c ; 	state = s ; 	zip = z ;  
            }
        } ;
