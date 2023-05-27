        #ifndef  FEETDIST2_H
        #define  FEETDIST2_H
        #include  "miledis2.h"

        class  FeetDist  :  public  MileDist 		// FeetDist 类的声明
        {
        protected:
            float  feet ;
        public:
            void  setDist( float ) ;
            float  getDist(  ) {  return  feet ;  }
            float  getMiles(  ) {  return  miles ;  }   // 覆盖了父类中的函数
        } ;
        #endif
