        #include  "inchdist.h"
        		// InchDist ��ĺ�����ԱsetDist
        void  InchDist  ::  setDist( float  in)
        {
            inches = in ;
            FeetDist  ::  setDist( inches / 12) ;  // ���û���ĺ���
        }
