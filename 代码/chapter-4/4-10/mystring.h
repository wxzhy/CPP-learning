        #ifndef  MYSTRING_H
        #define  MYSTRING_H
        #include  <iostream>
        using namespace std;

            // 下面是MyString类的定义，它是处理字符串的一个抽象数据类型
        class  MyString 
        {
        private:
            char   *str ;
            int  len ;
            void  memError ( ) ;
        public:
            MyString( ) {  str = NULL ;  len = 0 ;  }
            MyString(  const  char  * ) ;
            MyString ( MyString  & ) ; 		// 拷贝构造函数
            ~MyString( ) {  if ( len != 0 )  delete  [ ] str ;  }
            int  length( ) {  return  len ;  }    	// 获取串长
            char   *getValue( ) {  return  str ;  } ;	// 获取字符串
                // 重载赋值运算符
            MyString  operator +=( MyString  & ) ;
            char   *operator +=( const  char  * ) ;
            MyString  operator = ( MyString  & ) ;
            char   *operator = (  const  char  * ) ;
                // 重载关系运算符
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
                // 重载流插入符和提取符，流操作符必须重载为友元
            friend  ostream  &operator << ( ostream  & , MyString  & ) ;  
            friend  istream  &operator >> (istream  & , MyString  & ) ;
        } ;
        #endif
