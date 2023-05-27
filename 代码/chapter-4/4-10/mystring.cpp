        #include  <iostream>
        using namespace std;
        #include  <string.h>         // 需要使用一些字符串处理库函数
        #include  <stdlib.h>         // exit (  ) 函数在此文件中
        #include  "mystring.h"

        		//  memError函数，如果内存分配失败，调用exit ( ) 函数终止程序
        void  MyString::memError ( )
        {
            cout << "内存分配出错 \n" ;
            exit ( 0 ) ;
        }
        		//  MyString构造函数，采用参数sptr初始化数据成员str 
        MyString::MyString( const  char  *sptr )
        {
            len = strlen ( sptr ) ;
            str = new  char[len + 1] ;
            if ( str == NULL )    memError ( ) ;
            strcpy ( str , sptr ) ;
        }
        		//  拷贝构造函数
        MyString::MyString ( MyString  &right )
        {
            str = new  char[right.length( ) + 1] ;
            if ( str == NULL )   memError ( ) ;
            strcpy ( str , right.getValue( ) ) ;
            len = right.length( ) ;
        }
        		//  重载=操作符，当赋值号=左边的MyString对象调用了该函数，将把
        		//  右边的MyString对象做参数传递给调用函数。返回值是调用对象。
        MyString  MyString::operator = ( MyString  &right )
        {
            if ( len != 0 )  delete  [ ] str ;
            str = new  char[right.length( ) + 1] ;
            if ( str == NULL )  memError ( ) ;
            strcpy ( str , right.getValue( ) ) ;
            len = right.length( ) ;
            return  *this ;    // 返回调用对象本身
        }
        		//  重载=操作符。当赋值号=左边的MyString对象调用了该函数，将把右边
        		//  字符串传递给调用函数，返回值是调用对象自身。
        char  *MyString::operator = (  const  char  *right )
        {
            if ( len != 0 )    
                 delete  [ ] str ;
            len = strlen (right ) ;
            str = new  char[len + 1] ;
            if ( str == NULL )    
                 memError ( ) ;
            strcpy ( str , right ) ;
            return  str ;
        }
        		//  重载+=操作符。当赋值号=左边的MyString对象调用了该函数，将把
        		//  右边MyString对象做参数传递给调用函数，并把它的字符串str连接
        		//  到当前对象str的后面，返回值是调用对象自身。
        MyString MyString::operator +=( MyString  &right )
        {
            char  *temp = str ;

            str = new  char [ strlen ( str ) + right.length( ) + 1] ;
            if ( str == NULL )	
                 memError ( ) ;
            strcpy ( str , temp) ;
            strcat ( str , right.getValue( ) ) ;
            if ( len != 0 )  	
                 delete  [ ] temp ;
            len = strlen ( str ) ;
            return  *this ;
        }
        		//  重载+=操作符。 
        		//  当赋值号=左边的MyString对象调用了该函数，将把右边字符串传递给
        		//  调用函数，并把参数连接到当前对象str的后面，返回值是调用对象。
        char  *MyString::operator +=( const  char  *right )
        {
            char  *temp = str ;

            str = new  char [ strlen ( str ) + strlen (right ) + 1] ;
            if ( str == NULL )
                memError ( ) ;
            strcpy ( str , temp) ;
            strcat ( str , right ) ;
            if ( len != 0 )
                delete  [ ] temp ;
            return  str ;
        }
        //  重载==操作符。
     	   //  如果调用对象和参数对象的str内容相同，返回true，否则返回false。
        bool  MyString::operator == ( MyString  &right )
        {
            return  strcmp ( str , right.getValue( ) )==0 ? true : false ;
        }
        //  重载==操作符。
        //  若调用对象和参数right的内容相同，返回true，否则返回false。
        bool  MyString::operator ==( const  char  *right )
        {
            return  strcmp ( str , right )==0 ? true : false ;
        }
        //  重载!=操作符。如果!=号两边都是MyString对象，将调用该函数。
        //  如果它们的内容不同，返回true，否则返回false。
        bool  MyString::operator != ( MyString  &right )
        {
            return  strcmp ( str , right.getValue( ) ) == 0 ?  false : true ;
        }
        //  重载!=操作符。如果!=号右边是一个char*字符串，将调用该函数。
        //  如果它们的内容不同，返回true，否则返回false。
        bool  MyString::operator != (  const  char  *right )
        {
            return  strcmp ( str , right ) == 0 ? false : true ;
        }
        //  重载> 操作符。如果>号右边是一个MyString对象，将调用该函数。
        //  如果调用对象的str大于right.str，返回true，否则返回false。
        bool  MyString::operator > ( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) > 0 )
                return  true ;
            else    return  false ;
        }

        //  重载 > 操作符。如果>号右边是一个char* 字符串，将调用该函数。
        //  如果调用对象的str大于right，返回true，否则返回false。
        bool  MyString::operator > ( const  char  *right )
        {
            if ( strcmp ( str , right ) > 0 )
                return  true ;
            else    return  false ;
        }

        //  重载< 操作符。如果<号右边是一个MyString对象，将调用该函数。
        //  如果调用对象的str小于right.str，返回true，否则返回false。
        bool  MyString::operator < ( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) < 0 )
                return  true ;
            else    return  false ;
        }

        //  重载< 操作符。如果<号右边是一个char* 字符串，将调用该函数。
        //  如果调用对象的str小于right，返回true，否则返回false。
        bool  MyString::operator < ( const  char  *right )
        {
            if ( strcmp ( str , right ) < 0 )
                return  true ;
            else    return  false ;
        }

        //  重载 >= 操作符。如果>=号右边是一个MyString对象，将调用该函数。
        //  如果调用对象的str大于或等于right.str，返回true，否则返回false。
        bool  MyString::operator >=( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) >= 0 )
                return  true ;
            else   
				return  false ;
        }

        //  重载 >= 操作符。如果>=号右边是一个char* 字符串，将调用该函数。
        //  如果调用对象的str大于或等于right，返回true，否则返回false。
        bool  MyString::operator >=( const  char  *right )
        {
            if ( strcmp ( str , right ) >= 0 )
                return  true ;
            else    
				return  false ;
        }

        //  重载<= 操作符。如果<=号右边是一个MyString对象，将调用该函数。
        //  如果调用对象的str小于或等于right.str，返回true，否则返回false。
        bool  MyString::operator <=( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) <= 0 )
                return  true ;
            else  
				return  false ;
        }

        //  重载<= 操作符。如果<=号右边是一个char* 字符串，将调用该函数。
     	   //  如果调用对象的str小于或等于right，返回true，否则返回false。
        bool  MyString::operator <=( const  char  *right )
        {
            if ( strcmp ( str , right ) <= 0 )
                return  true ;
            else   return  false ;
        }

	        //  重载流插入符<<，返回一个引用
        ostream  &operator << ( ostream  &strm , MyString  &obj )
        {
            strm << obj.str ;

            return  strm ;    // 将当前流对象返回
        }

        //  重载流提取符>>
        istream  &operator >> (istream  &strm , MyString  &obj )  // 返回一个引用
        {
            strm.getline (obj.str ,obj.len) ;
            strm.ignore ( ) ;

            return  strm ;    // 将当前流对象返回
        }