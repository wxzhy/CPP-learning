        #ifndef  INTRANGE_H
        #define  INTRANGE_H
        #include  <iostream>
        using namespace std;
        class  intRange 
        {
        private:
             int  input ;		// �û����������
             int  lower ;		// �������ݵ�����
             int  upper ;		// �������ݵ�����
        public:
                // ���涨����쳣����һ��������
             class  OutOfRange {		    };      // ������û�ж����κγ�Ա
                 // ������Ա
             intRange( int  low , int  high )
             {
                 lower = low ;  upper = high ;  
             }
             int  getInput( void )
             {
                 cin >> input ;
                 if( input < lower || input > upper ) 
                    throw  OutOfRange( ) ;
                 return  input ;
            }
        } ;
        #endif
