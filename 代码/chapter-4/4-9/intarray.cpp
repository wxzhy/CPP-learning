        #include  <iostream>
        using namespace std;
        #include  <stdlib.h>
        #include  "intarray.h"

        		// IntArray ��Ĺ��캯������������ռ�Ĵ�С������ռ䲢��ʼ����
        IntArray::IntArray ( int  s )
        {
            arraySize = s ;
            aptr = new int [s] ;
            if (aptr == 0 )
                memError ( ) ;
                for ( int  count = 0 ; count < arraySize ; count++ )
                    *(aptr + count ) = 0 ;
        }

        		//  IntArray �Ŀ������캯��
        IntArray::IntArray( const  IntArray  &obj )
        {
            arraySize = obj.arraySize ;
            aptr = new int [arraySize] ;
            if (aptr == 0 )
                memError ( ) ;
            for ( int  count = 0 ; count < arraySize ; count++ )
                *(aptr + count ) = *(obj.aptr + count ) ;
        }

        		//  IntArray �����������
        IntArray::~IntArray( )
        {
            if (arraySize > 0 )
                delete  [ ] aptr ;
            arraySize=0 ;		// ����������Ԫ�ظ����ı�������
        }

        		//  memError �����������ڴ�������ʾ������Ϣ����ֹ����
        void  IntArray::memError ( )
        {
            cout << "�����ڴ�������\n" ;
            exit ( 0 ) ;
        }

        		//  subError ���������������±�Խ�����ʾ������Ϣ����ֹ����
        void  IntArray::subError( )
        {
            cout << "���������±�Խ��\n" ;
            exit ( 0 ) ;
        }

        		//  ����[ ]������������Ĳ������������±꣬����ֵ������Ԫ�ص�����
        int  &IntArray::operator[ ] ( const  int  &sub )
        {
            if ( sub<0 || sub >= arraySize )
                subError( ) ;
            return  aptr[sub] ;
        }
