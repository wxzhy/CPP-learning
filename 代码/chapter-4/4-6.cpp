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

            PersonInfo ( PersonInfo  &obj )    // �������캯��
            {
                name = new  char [ strlen ( obj.name ) + 1] ;
                strcpy ( name, obj.name ) ;
                age = obj.age ; 
            }

            ~PersonInfo ( ) {  delete  [ ] name ;  }
            char  * getName ( ) {  return  name ;  }
            int getAge ( ) {  return  age ;  }
            
			void  operator = (  const PersonInfo &right )     // ����=�����
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
                             clone = jim ;   // jim��ʼ��cloneҪ���ÿ������캯��

            cout << "Jim����Ϣ��"<< jim.getName( ) << ", "<< jim.getAge( ) << endl ;
            cout << "Bob����Ϣ��"<< bob.getName( ) << ", "<< bob.getAge( ) << endl ;
            cout << "Clone����Ϣ��"<< clone.getName( ) << ", "<< clone.getAge( ) << endl ;

            cout << "\n���潫������������غ���ʵ�ֶ������Ϣ����\n" ;
            clone = bob ;    	 	// �������ص����������=
            bob = jim ;
            jim=clone ;
            cout << "Jim����Ϣ��"<< jim.getName( ) << ", "<< jim.getAge( ) << endl ;
            cout<< "Bob����Ϣ��"<< bob.getName( )<<", "<< bob.getAge( ) << endl ;
            cout<<"Clone����Ϣ��"<< clone.getName()<< ","<<clone.getAge()<< endl ;
           
			return 0;
        }