        #ifndef  FEETDIST3_H
        #define  FEETDIST3_H
        #include  "miledis3.h"

        class  FeetDist  :  public  MileDist 		// FeetDist �������
        {
        protected:
            float  feet ;
        public:
            void  setDist( float ) ;
            virtual   float  getDist(  ){  return  feet;  }  // ���Ǹ����е��麯��
            float  getMiles(  ) {  return  miles ;  }
        } ;
        #endif
