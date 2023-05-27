        #ifndef  RECT_H
        #define  RECT_H
        class  Rectangle     // Rectangle ÀàµÄÉùÃ÷
        {
        protected:
            float  width, length, area ;
        public:
            Rectangle (  ) {  width = length = area = 0.0 ;  }
            Rectangle ( float , float ) ;
            float  getArea (  ) {  return  area ;  }
            float  getLen (  ) {  return  length ;  }
            float  getWidth (  ) {  return  width ;  }
        } ;
        #endif
