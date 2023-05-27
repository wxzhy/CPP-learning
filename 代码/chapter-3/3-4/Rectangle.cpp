        #include  <iostream>
        using namespace std;
        #include "Rectangle.h"      // 包含Rectangle类的定义

		void Rectangle::setData(float w, float l)
        {
            width = w ;
            length = 1 ;
            calculateArea( ) ;
        }