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

                // �������������+��-
            FeetInches  operator + ( const  FeetInches  & ); 	// ����+ �����
            FeetInches  operator - ( const  FeetInches  & ); 	// ����- �����-

                // �������������++��--
            FeetInches  operator ++ ( ) ;  			// ����ǰ��++�����
            FeetInches  operator ++ ( int ) ; 		// ���غ���++�����

                // ���ع�ϵ�����
            bool  operator > ( const  FeetInches  & );  
            bool  operator < ( const  FeetInches  & ) ;
            bool  operator ==( const  FeetInches  & ) ;

                // �����������
            friend  ostream  &operator << ( ostream  &, FeetInches  & );
            friend  istream  &operator >> (istream  &, FeetInches  & );

                // ��������ת�������
            operator  float  (  ) ;
            operator  int (  ) {  return  feet ;  }   // �ض�inches���ֵ�ֵ
        } ;
        #endif
