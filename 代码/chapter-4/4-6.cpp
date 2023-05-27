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

            PersonInfo ( PersonInfo  &obj )    // 拷贝构造函数
            {
                name = new  char [ strlen ( obj.name ) + 1] ;
                strcpy ( name, obj.name ) ;
                age = obj.age ; 
            }

            ~PersonInfo ( ) {  delete  [ ] name ;  }
            char  * getName ( ) {  return  name ;  }
            int getAge ( ) {  return  age ;  }
            
			void  operator = (  const PersonInfo &right )     // 重载=运算符
            {
                delete  [ ] name ;
                name = new  char [ strlen (right.name ) + 1] ;
                strcpy ( name, right.name ) ;
                age = right.age ; 
            }
        } ;


        int  main(  )
        {   
            PersonInfo  jim("Jim", 20 ) , bob("Bob", 21) , 
                             clone = jim ;   // jim初始化clone要调用拷贝构造函数

            cout << "Jim的信息："<< jim.getName( ) << ", "<< jim.getAge( ) << endl ;
            cout << "Bob的信息："<< bob.getName( ) << ", "<< bob.getAge( ) << endl ;
            cout << "Clone的信息："<< clone.getName( ) << ", "<< clone.getAge( ) << endl ;

            cout << "\n下面将调用运算符重载函数实现对象的信息交换\n" ;
            clone = bob ;    	 	// 调用重载的运算符函数=
            bob = jim ;
            jim=clone ;
            cout << "Jim的信息："<< jim.getName( ) << ", "<< jim.getAge( ) << endl ;
            cout<< "Bob的信息："<< bob.getName( )<<", "<< bob.getAge( ) << endl ;
            cout<<"Clone的信息："<< clone.getName()<< ","<<clone.getAge()<< endl ;
           
			return 0;
        }