        #ifndef  CHARRANGE_H
        #define  CHARRANGE_H
        class  CharRange
        { 
        private:
            char   *errMsg ;   // ������Ϣ
            char   input ;     // �û�����ֵ
            char   lower ;     // ��Ч�ַ��ĵͽ�
            char   upper ;     //��Ч�ַ��ĸ߽�
        public:
            CharRange ( char , char , const  char  * ) ;
            char   getChar(  ) ;
        } ;
        #endif
