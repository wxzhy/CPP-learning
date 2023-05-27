        #include  "inchdist.h"
        		// InchDist 类的函数成员setDist
        void  InchDist  ::  setDist( float  in)
        {
            inches = in ;
            FeetDist  ::  setDist( inches / 12) ;  // 调用基类的函数
        }
