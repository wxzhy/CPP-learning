        #ifndef  MILEDIS3_H
        #define  MILEDIS3_H

        class  MileDist   	// MileDist 类的声明.
        {
        protected:
            float  miles ;
        public:
            void  setDist( float  d ) {  miles = d ;  }
            virtual   float  getDist(  ) {  return  miles ;  }    // 虚函数
            float  square(  ) {  return  getDist( ) * getDist( ) ;  }
        } ;
        #endif
