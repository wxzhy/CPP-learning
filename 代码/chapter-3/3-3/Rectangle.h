        #ifndef  RECTANGLE_H
        #define  RECTANGLE_H
	   class  Rectangle 
        {
        private:
            float  width, length,  area ;
            void  calculateArea(  );    // 注意：该函数目前是私有的
        public:
            void  setData ( float , float ) ;
            float  getWidth(  ) ;
            float  getLength(  ) ;
            float  getArea(  ) ;
        } ;
        #endif