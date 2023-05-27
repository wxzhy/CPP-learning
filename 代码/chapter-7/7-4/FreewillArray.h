        #ifndef  FREEWILLARRAY_H
        #define  FREEWILLARRAY_H
        #include  <iostream>
        using namespace std;
        #include  <stdlib.h>

        template  < class  T >
        class  FreewillArray 
        {
        private:
            T  *aptr ;			// ����ģ�����T�滻��ȥ��int 
            int  arraySize ;
            void  memError( void ) ;    // �����ڴ�������
            void  subError( void ) ;    // �����±�Խ�����
        public:
            FreewillArray( void ){  aptr = 0 ;  arraySize = 0 ;}
            FreewillArray( int ) ;       // ���캯��
            FreewillArray( const FreewillArray  & ) ;  // �������캯��
            ~FreewillArray( void ) ;    	// ��������
            int  size( void )  {  return  arraySize ;  }
            T  &operator[ ]( const  int  & );  // �� [ ] ��������
        } ;

        		// FreewillArray��ģ��Ĺ��캯������������Ĵ�С��������������ڴ�
        template  < class  T >
        FreewillArray  < T > :: FreewillArray( int  s ) 
        {
            arraySize = s ;
            aptr = new T [s] ;
            if( aptr == 0 )    memError( ) ;
            for( int  count = 0 ;  count < arraySize ;  count++ ) 
                *( aptr + count ) = 0 ;
        }

        		// FreewillArray��ģ��Ŀ������캯��
        template  < class  T >
        FreewillArray  < T > :: FreewillArray( const FreewillArray  &obj ) 
        {
            arraySize = obj.arraySize ;
            aptr = new T [arraySize] ;
            if( aptr == 0 )    memError( ) ;
            for( int  count = 0 ;  count < arraySize ;  count++ ) 
                *( aptr + count ) = *( obj.aptr + count ) ;
        }

        		// FreewillArray��ģ�������������
        template  < class  T >
        FreewillArray  < T > :: ~FreewillArray( void ) 
        {
            if( arraySize > 0 ) 
                delete [ ] aptr ;
        }

        		// memError ���������ڴ�������ʱ����ʾ������Ϣ������ֹ����
        template  < class  T >
        void  FreewillArray  < T > :: memError( void ) 
        {
            cout << "�������㹻���ڴ�ռ�.\n" ;
            exit( 0 ) ;
        }

        		// subError ������Ա���������±�Խ��ʱ����ʾ������Ϣ������ֹ����
        template  < class  T >
        void  FreewillArray  < T > :: subError( void ) 
        {
            cout << "���������±�Խ��\n" ;
            exit( 0 ) ;
        }

        		// ���������[ ]�������Ĳ�����һ���±꣬����������£���������
        		// �±�ָ��������Ԫ�ص����ã��������subError������ֹ����
        template  < class  T >
        T  &FreewillArray  < T > :: operator[ ]( const  int  &sub ) 
        {
            if( sub < 0 || sub > arraySize )
                subError( ) ;
            return  aptr[sub] ;
        }
        #endif
