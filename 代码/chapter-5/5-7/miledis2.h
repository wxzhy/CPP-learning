        #ifndef  MILEDIS2_H
        #define  MILEDIS2_H
        class  MileDist  	// MileDist �������.
        {
        protected:
            float  miles ;
        public:
            void  setDist( float  d ) {  miles = d ;  }
            float  getDist(  ) {  return  miles ;  }
            float  square(  ){ return  getDist( )*getDist( );  }  //�����ӵĺ���
        } ;
        #endif