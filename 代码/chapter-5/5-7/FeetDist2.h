        #ifndef  FEETDIST2_H
        #define  FEETDIST2_H
        #include  "miledis2.h"

        class  FeetDist  :  public  MileDist 		// FeetDist �������
        {
        protected:
            float  feet ;
        public:
            void  setDist( float ) ;
            float  getDist(  ) {  return  feet ;  }
            float  getMiles(  ) {  return  miles ;  }   // �����˸����еĺ���
        } ;
        #endif
