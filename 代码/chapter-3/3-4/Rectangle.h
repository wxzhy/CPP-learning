        #ifndef  RECTANGLE_H
        #define  RECTANGLE_H

        class  Rectangle 		// Rectangle��Ķ���
        {
        private:
            float  width, length,  area ;
            void  calculateArea(  ) {  area = width * length ; }
        public:
            void  setData ( float , float ) ;            // ����ԭ��
            float  getWidth(  ) {  return  width ; }     // ����������Ա
            float  getLength(  ) {  return  length ; }   // ����������Ա
            float  getArea(  ) {  return  area ; }        // ����������Ա
        };

        #endif