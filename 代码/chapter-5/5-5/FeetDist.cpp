        #include  "FeetDist.h"

        void  FeetDist  ::  setDist( float  ft )
        {
            feet = ft ;
            MileDist :: setDist( feet / 5280) ;  // 调用基类的setDist函数
        }
