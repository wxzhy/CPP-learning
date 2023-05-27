        #ifndef  FEETDIST_H
        #define  FEETDIST_H
        #include  "miledist.h"

        class  FeetDist  :  public  MileDist  	// FeetDist ÀàµÄÉùÃ÷
        {
        protected:
            float  feet ;
        public:
            void  setDist( float ) ;
            float  getDist(  ) {  return  feet ;  }
            float  getMiles(  ) {  return  miles ;  }
        } ;
        #endif
