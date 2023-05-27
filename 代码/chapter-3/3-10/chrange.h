        #ifndef  CHARRANGE_H
        #define  CHARRANGE_H
        class  CharRange
        { 
        private:
            char   *errMsg ;   // 出错信息
            char   input ;     // 用户输入值
            char   lower ;     // 有效字符的低界
            char   upper ;     //有效字符的高界
        public:
            CharRange ( char , char , const  char  * ) ;
            char   getChar(  ) ;
        } ;
        #endif
