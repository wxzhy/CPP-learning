        #include  <iostream>
        using namespace std;
        #include "Rectangle.h"      // ����Rectangle��Ķ���
        	  // setData ������Ա����������ֵ w ��������Ա width���� l ��������Աlength
		void  Rectangle::setData ( float  w , float  l )
        {
            width = w ;
            length = l ;
            calculateArea( ) ;    // ���ú�����Ա
        }

        		// ����Rectangle�������������ѽ���洢˽�г�Աarea��   
        void  Rectangle::calculateArea(  )
        {
            area = width * length ;
        }
        		//  getWidth ������Ա�����ش洢��˽�г�Ա width �е�ֵ
        float  Rectangle::getWidth(  )
        {
            return  width ;
        }        
        		//  getLength ������Ա���ش洢��˽�г�Ա length �е�ֵ
        float  Rectangle::getLength(  )
        {
            return  length ;
        }
        		//  getArea ������Ա���ش洢��˽�г�Ա area �е�ֵ
        float  Rectangle::getArea(  )
        {
            return  area ;
        }
