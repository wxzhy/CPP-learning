        #include  "FeetDist.h"

        void  FeetDist  ::  setDist( float  ft )
        {
            feet = ft ;
            MileDist :: setDist( feet / 5280) ;  // ���û����setDist����
        }
