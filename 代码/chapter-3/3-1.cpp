        #include  <iostream>
        using namespace std;

        class  Rectangle 
       {
        private:
            float  width ;
            float  length ;
            float  area ;
        public:
            void  setData ( float , float ) ;
            void  calculateArea(  ) ;
            float  getWidth(  ) ;
            float  getLength(  ) ;
            float  getArea(  ) ;
        } ; 

        	  // setData 函数将参数 w 拷贝给成员 width，将 l 拷贝给成员length
        void  Rectangle::setData ( float  w, float  l )
        {
            width = w ;
            length = l ;
        }

        		//  calculateArea 函数计算Rectangle对象的面积，并把结果存储area中
        void  Rectangle::calculateArea(  )
        {
            area = width * length ;
        }

        		//  getWidth 函数成员返回存储在私有成员 width 中的值
        float  Rectangle::getWidth(  )
        {
            return  width ;
        }

              //  getLength 函数成员，返回存储在私有成员 length 中的值
        float  Rectangle::getLength(  )
        {
            return  length ;
        }

             //  getArea 函数成员，返回存储在私有成员 area 中的值
        float  Rectangle::getArea(  )
        {
            return  area ;
        }

        		// 主函数
        int  main ( void )
        {
            Rectangle  box ;
            float  wide , boxLong ;

            cout<< "计算矩形的面积\n" ;
            cout << "输入矩形的宽：" ;
            cin >> wide ;
            cout << "输入矩形的长：" ;
            cin >> boxLong ;
            box.setData(wide , boxLong) ;
            box.calculateArea( ) ;
			cout << "矩形参数:" ;
            cout << "宽："<< box.getWidth( ) << " ,  " ;
            cout << "长："<< box.getLength( ) << " ,  " ;
            cout << "面积："<< box.getArea( ) << endl ;

            return 0;
        }
