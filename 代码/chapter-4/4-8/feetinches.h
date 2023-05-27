        #ifndef  FEETINCHES_H
        #define  FEETINCHES_H
        #include  <iostream>
        using namespace std;

        class  FeetInches 
        {
        private:
            int  feet ;
            int  inches ;
            void  simplify( ) ;
        public:
            FeetInches ( int  f = 0, int  i = 0 ) 
            {
                feet = f ; 
                inches = i ; 
                simplify( ) ;  
            }

            void  setData ( int  f , int  i )   
            { 
                feet = f ; 
                inches = i ; 
                simplify( ) ;  
            }

            int   getFeet ( ) {  return  feet ;  }
            int   getInches ( ) {  return  inches ;  }

                // 重载算术运算符+和-
            FeetInches  operator + ( const  FeetInches  & ); 	// 重载+ 运算符
            FeetInches  operator - ( const  FeetInches  & ); 	// 重载- 运算符-

                // 重载算术运算符++和--
            FeetInches  operator ++ ( ) ;  			// 重载前置++运算符
            FeetInches  operator ++ ( int ) ; 		// 重载后置++运算符

                // 重载关系运算符
            bool  operator > ( const  FeetInches  & );  
            bool  operator < ( const  FeetInches  & ) ;
            bool  operator ==( const  FeetInches  & ) ;

                // 重载流运算符
            friend  ostream  &operator << ( ostream  &, FeetInches  & );
            friend  istream  &operator >> (istream  &, FeetInches  & );

                // 重载类型转换运算符
            operator  float  (  ) ;
            operator  int (  ) {  return  feet ;  }   // 截断inches部分的值
        } ;
        #endif
