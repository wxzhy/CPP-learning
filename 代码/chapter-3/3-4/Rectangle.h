        #ifndef  RECTANGLE_H
        #define  RECTANGLE_H

        class  Rectangle 		// Rectangle类的定义
        {
        private:
            float  width, length,  area ;
            void  calculateArea(  ) {  area = width * length ; }
        public:
            void  setData ( float , float ) ;            // 函数原型
            float  getWidth(  ) {  return  width ; }     // 内联函数成员
            float  getLength(  ) {  return  length ; }   // 内联函数成员
            float  getArea(  ) {  return  area ; }        // 内联函数成员
        };

        #endif