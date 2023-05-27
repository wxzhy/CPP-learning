        #ifndef  MILEDIS2_H
        #define  MILEDIS2_H
        class  MileDist  	// MileDist 类的声明.
        {
        protected:
            float  miles ;
        public:
            void  setDist( float  d ) {  miles = d ;  }
            float  getDist(  ) {  return  miles ;  }
            float  square(  ){ return  getDist( )*getDist( );  }  //新增加的函数
        } ;
        #endif