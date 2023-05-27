        #ifndef  MYSTRING_H
        #define  MYSTRING_H
        #include  <iostream>
        using namespace std;

            // ������MyString��Ķ��壬���Ǵ����ַ�����һ��������������
        class  MyString 
        {
        private:
            char   *str ;
            int  len ;
            void  memError ( ) ;
        public:
            MyString( ) {  str = NULL ;  len = 0 ;  }
            MyString(  const  char  * ) ;
            MyString ( MyString  & ) ; 		// �������캯��
            ~MyString( ) {  if ( len != 0 )  delete  [ ] str ;  }
            int  length( ) {  return  len ;  }    	// ��ȡ����
            char   *getValue( ) {  return  str ;  } ;	// ��ȡ�ַ���
                // ���ظ�ֵ�����
            MyString  operator +=( MyString  & ) ;
            char   *operator +=( const  char  * ) ;
            MyString  operator = ( MyString  & ) ;
            char   *operator = (  const  char  * ) ;
                // ���ع�ϵ�����
            bool   operator == ( MyString  & ) ;
            bool    operator ==( const  char  * ) ;
            bool   operator != ( MyString  & ) ;
            bool   operator != (  const  char  * ) ;
            bool   operator > ( MyString  & ) ;
            bool   operator > ( const  char  * ) ;
            bool   operator < ( const  char  * ) ;
            bool   operator < ( MyString  & ) ;
            bool   operator >=( MyString  & ) ;
            bool   operator >=( const  char  * ) ;
            bool   operator <=( const  char  * ) ;
            bool   operator <=( MyString  & ) ;
                // ���������������ȡ��������������������Ϊ��Ԫ
            friend  ostream  &operator << ( ostream  & , MyString  & ) ;  
            friend  istream  &operator >> (istream  & , MyString  & ) ;
        } ;
        #endif
