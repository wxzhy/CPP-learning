        #ifndef  MILEDIST_H
        #define  MILEDIST_H
        class  MileDist  // MileDist �������
        {
        protected:		// ע��˴�
            float  miles ;
        public:
            void   setDist( float  d ) {  miles = d ;  }
            float  getDist(  ) {  return  miles ;  }
        } ;
        #endif
