        #include  <iostream>
        using namespace std;
        #include  <string.h>  

        class  PersonInfo 
        {
        private:
            char  *name ;
            int  age ;
        public:
            PersonInfo ( char  *n, int  a) 
            {
                name = new  char [ strlen ( n) + 1] ;
                strcpy ( name, n) ;
                age = a ; 
            }

            PersonInfo ( PersonInfo  &obj ) 		// 拷贝构造函数
            {
                name = new  char [ strlen ( obj.name ) + 1] ;
                strcpy ( name, obj.name ) ;
                age = obj.age ; 
            }

            ~PersonInfo ( ) {  delete  [ ] name ;  }
            char  	* getName ( ) {  return  name ;  }
            int  	getAge ( ) {  return  age ;  }

            PersonInfo  operator = (const PersonInfo  &right)  //重载运算符=函数
            {
                delete  [ ] name ;
                name = new  char [ strlen (right.name )+ 1] ;
                strcpy ( name, right.name ) ;
                age = right.age ;

                return  *this ;  
            }
        } ;

        int  main(  )
        { 
            PersonInfo jim("Jim", 20 ) , bob("Bob", 21) ,  clone = jim ;

            cout << "Jim的信息："<< jim.getName( ) << ", "<< jim.getAge( ) << endl ;
            cout << "Bob的信息："<< bob.getName( ) << ", "<< bob.getAge( ) << endl ;
            cout<<"Clone的信息："<<clone.getName( )<<","<<clone.getAge( )<< endl ;

            cout << "\n下面将调用运算符重载函数\n" ;
            clone = bob = jim ;	// 调用重载后的运算符=

            cout << "Jim的信息："<< jim.getName( ) << ", "<< jim.getAge( ) << endl ;
            cout << "Bob的信息："<< bob.getName( ) << ", "<< bob.getAge( ) << endl ;
            cout<<"Clone的信息："<<clone.getName( )<<","<<clone.getAge( )<< endl ;

            return 0;
        }
