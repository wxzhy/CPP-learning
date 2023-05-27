        #include  <iostream>
        using namespace std;
        #include "Rectangle.h"      // 包含Rectangle类的定义
        	  // setData 函数成员，将参数的值 w 拷贝给成员 width，将 l 拷贝给成员length
		void  Rectangle::setData ( float  w , float  l )
        {
            width = w ;
            length = l ;
            calculateArea( ) ;    // 调用函数成员
        }

        		// 计算Rectangle对象的面积，并把结果存储私有成员area中   
        void  Rectangle::calculateArea(  )
        {
            area = width * length ;
        }
        		//  getWidth 函数成员，返回存储在私有成员 width 中的值
        float  Rectangle::getWidth(  )
        {
            return  width ;
        }        
        		//  getLength 函数成员返回存储在私有成员 length 中的值
        float  Rectangle::getLength(  )
        {
            return  length ;
        }
        		//  getArea 函数成员返回存储在私有成员 area 中的值
        float  Rectangle::getArea(  )
        {
            return  area ;
        }
