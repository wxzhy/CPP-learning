        #ifndef  FEETDIST3_H
        #define  FEETDIST3_H
        #include  "miledis3.h"

        class  FeetDist  :  public  MileDist 		// FeetDist 类的声明
        {
        protected:
            float  feet ;
        public:
            void  setDist( float ) ;
            virtual   float  getDist(  ){  return  feet;  }  // 覆盖父类中的虚函数
            float  getMiles(  ) {  return  miles ;  }
        } ;
        #endif
