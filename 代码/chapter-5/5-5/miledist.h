        #ifndef  MILEDIST_H
        #define  MILEDIST_H
        class  MileDist  // MileDist 类的声明
        {
        protected:		// 注意此处
            float  miles ;
        public:
            void   setDist( float  d ) {  miles = d ;  }
            float  getDist(  ) {  return  miles ;  }
        } ;
        #endif
