        #ifndef  MILEDIS3_H
        #define  MILEDIS3_H

        class  MileDist   	// MileDist �������.
        {
        protected:
            float  miles ;
        public:
            void  setDist( float  d ) {  miles = d ;  }
            virtual   float  getDist(  ) {  return  miles ;  }    // �麯��
            float  square(  ) {  return  getDist( ) * getDist( ) ;  }
        } ;
        #endif
