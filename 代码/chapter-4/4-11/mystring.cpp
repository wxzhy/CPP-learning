        #include  <iostream>
        using namespace std;
        #include  <string.h>         // ��Ҫʹ��һЩ�ַ�������⺯��
        #include  <stdlib.h>         // exit (  ) �����ڴ��ļ���
        #include  "mystring.h"

        		//  memError����������ڴ����ʧ�ܣ�����exit ( ) ������ֹ����
        void  MyString::memError ( )
        {
            cout << "�ڴ������� \n" ;
            exit ( 0 ) ;
        }
        		//  MyString���캯�������ò���sptr��ʼ�����ݳ�Աstr 
        MyString::MyString( const  char  *sptr )
        {
            len = strlen ( sptr ) ;
            str = new  char[len + 1] ;
            if ( str == NULL )    memError ( ) ;
            strcpy ( str , sptr ) ;
        }
        		//  �������캯��
        MyString::MyString ( MyString  &right )
        {
            str = new  char[right.length( ) + 1] ;
            if ( str == NULL )   memError ( ) ;
            strcpy ( str , right.getValue( ) ) ;
            len = right.length( ) ;
        }
        		//  ����=������������ֵ��=��ߵ�MyString��������˸ú���������
        		//  �ұߵ�MyString�������������ݸ����ú���������ֵ�ǵ��ö���
        MyString  MyString::operator = ( MyString  &right )
        {
            if ( len != 0 )  delete  [ ] str ;
            str = new  char[right.length( ) + 1] ;
            if ( str == NULL )  memError ( ) ;
            strcpy ( str , right.getValue( ) ) ;
            len = right.length( ) ;
            return  *this ;    // ���ص��ö�����
        }
        		//  ����=������������ֵ��=��ߵ�MyString��������˸ú����������ұ�
        		//  �ַ������ݸ����ú���������ֵ�ǵ��ö�������
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
        		//  ����+=������������ֵ��=��ߵ�MyString��������˸ú���������
        		//  �ұ�MyString�������������ݸ����ú��������������ַ���str����
        		//  ����ǰ����str�ĺ��棬����ֵ�ǵ��ö�������
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
        		//  ����+=�������� 
        		//  ����ֵ��=��ߵ�MyString��������˸ú����������ұ��ַ������ݸ�
        		//  ���ú��������Ѳ������ӵ���ǰ����str�ĺ��棬����ֵ�ǵ��ö���
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
        //  ����==��������
     	   //  ������ö���Ͳ��������str������ͬ������true�����򷵻�false��
        bool  MyString::operator == ( MyString  &right )
        {
            return  strcmp ( str , right.getValue( ) )==0 ? true : false ;
        }
        //  ����==��������
        //  �����ö���Ͳ���right��������ͬ������true�����򷵻�false��
        bool  MyString::operator ==( const  char  *right )
        {
            return  strcmp ( str , right )==0 ? true : false ;
        }
        //  ����!=�����������!=�����߶���MyString���󣬽����øú�����
        //  ������ǵ����ݲ�ͬ������true�����򷵻�false��
        bool  MyString::operator != ( MyString  &right )
        {
            return  strcmp ( str , right.getValue( ) ) == 0 ?  false : true ;
        }
        //  ����!=�����������!=���ұ���һ��char*�ַ����������øú�����
        //  ������ǵ����ݲ�ͬ������true�����򷵻�false��
        bool  MyString::operator != (  const  char  *right )
        {
            return  strcmp ( str , right ) == 0 ? false : true ;
        }
        //  ����> �����������>���ұ���һ��MyString���󣬽����øú�����
        //  ������ö����str����right.str������true�����򷵻�false��
        bool  MyString::operator > ( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) > 0 )
                return  true ;
            else    return  false ;
        }

        //  ���� > �����������>���ұ���һ��char* �ַ����������øú�����
        //  ������ö����str����right������true�����򷵻�false��
        bool  MyString::operator > ( const  char  *right )
        {
            if ( strcmp ( str , right ) > 0 )
                return  true ;
            else    return  false ;
        }

        //  ����< �����������<���ұ���һ��MyString���󣬽����øú�����
        //  ������ö����strС��right.str������true�����򷵻�false��
        bool  MyString::operator < ( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) < 0 )
                return  true ;
            else    return  false ;
        }

        //  ����< �����������<���ұ���һ��char* �ַ����������øú�����
        //  ������ö����strС��right������true�����򷵻�false��
        bool  MyString::operator < ( const  char  *right )
        {
            if ( strcmp ( str , right ) < 0 )
                return  true ;
            else    return  false ;
        }

        //  ���� >= �����������>=���ұ���һ��MyString���󣬽����øú�����
        //  ������ö����str���ڻ����right.str������true�����򷵻�false��
        bool  MyString::operator >=( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) >= 0 )
                return  true ;
            else   
				return  false ;
        }

        //  ���� >= �����������>=���ұ���һ��char* �ַ����������øú�����
        //  ������ö����str���ڻ����right������true�����򷵻�false��
        bool  MyString::operator >=( const  char  *right )
        {
            if ( strcmp ( str , right ) >= 0 )
                return  true ;
            else    
				return  false ;
        }

        //  ����<= �����������<=���ұ���һ��MyString���󣬽����øú�����
        //  ������ö����strС�ڻ����right.str������true�����򷵻�false��
        bool  MyString::operator <=( MyString  &right )
        {
            if ( strcmp ( str , right.getValue( ) ) <= 0 )
                return  true ;
            else  
				return  false ;
        }

        //  ����<= �����������<=���ұ���һ��char* �ַ����������øú�����
     	   //  ������ö����strС�ڻ����right������true�����򷵻�false��
        bool  MyString::operator <=( const  char  *right )
        {
            if ( strcmp ( str , right ) <= 0 )
                return  true ;
            else   return  false ;
        }

	        //  �����������<<������һ������
        ostream  &operator << ( ostream  &strm , MyString  &obj )
        {
            strm << obj.str ;

            return  strm ;    // ����ǰ�����󷵻�
        }

        //  ��������ȡ��>>
        istream  &operator >> (istream  &strm , MyString  &obj )  // ����һ������
        {
            strm.getline (obj.str ,obj.len) ;
            strm.ignore ( ) ;

            return  strm ;    // ����ǰ�����󷵻�
        }