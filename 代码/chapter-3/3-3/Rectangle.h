        #ifndef  RECTANGLE_H
        #define  RECTANGLE_H
	   class  Rectangle 
        {
        private:
            float  width, length,  area ;
            void  calculateArea(  );    // ע�⣺�ú���Ŀǰ��˽�е�
        public:
            void  setData ( float , float ) ;
            float  getWidth(  ) ;
            float  getLength(  ) ;
            float  getArea(  ) ;
        } ;
        #endif