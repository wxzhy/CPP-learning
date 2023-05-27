        #include  "FeetDist3.h"

        void  FeetDist  ::  setDist( float  ft )
        {
            feet = ft ;
            MileDist :: setDist( feet / 5280) ;  	// 调用基类中的setDist函数
        }
