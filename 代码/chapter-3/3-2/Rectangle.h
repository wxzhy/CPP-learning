        #ifndef  RECTANGLE_H
        #define  RECTANGLE_H
        class  Rectangle 		// Rectangle��Ķ���
        {
        private:
            float  width ;
            float  length ;
            float  area ;
        public:
            void  setData ( float , float ) ;
            void  calculateArea(  ) ;
            float  getWidth(  ) ;
            float  getLength(  ) ;
            float  getArea(  ) ;
        } ;
        #endif