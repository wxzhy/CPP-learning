        #ifndef  INTARRAY_H
        #define  INTARRAY_H

        class  IntArray 
        {
        private:
            int  *aptr ;				// ָ��洢����ָ��
            int  arraySize ;			// �洢������Ԫ�صĸ���
            void  memError ( ) ;   // �����ڴ�������
            void  subError( ) ;		// �����±�Խ��
        public:
            IntArray( int ) ;			// ���캯��
            IntArray( const  IntArray  & ) ; 	// �������캯��
            ~IntArray( ) ;			// ��������
            int  size( ) 				// ������������Ԫ�ظ���
            {
                return  arraySize ; 
            }
            int  &operator[ ] ( const  int& ) ; 	// ����[ ] �����
        } ;
        #endif
