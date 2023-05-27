        #include  <iostream>
        using namespace std;
        #include  <iomanip>

        class  Rectangle 
        {
        private:
            float  width ;
            float  length ;
            float  area ; 
            void  calculateArea( ) {  area = width * length ;  }
        public:
            void  setData( float  w, float  l )  
            {
                width = w ;
                length = l ;
                calculateArea( ) ;
            }
            float  getWidth( ) {  return  width ;  }
            float  getLength( ) {  return  length ;  }
            float  getArea( ) {  return  area ;  }
        } ;

        int  main(  )
        {
            Rectangle  box1 ,  box2 ;

            box1.setData(2, 20 ) ;
            box2.setData(5, 10 ) ;
            cout << "对象赋值前\n" ;
            cout << "Boxl宽: "<< box1.getWidth( ) <<setw(7)
                  <<"长: "<< box1.getLength( ) << setw(10 )
                  << "面积: "<< box1.getArea( ) << endl ;
            cout << "Box2宽: "<< box2.getWidth( ) <<setw(7)
                  <<"长: "<< box2.getLength( ) << setw(10 )
                  << "面积: "<< box2.getArea( ) << endl ;

            box2 = box1 ;    // 对象按位拷贝

            cout << "\n将box1对象赋值给box2对象以后 \n" ;
            cout << "Boxl宽: "<< box1.getWidth( ) <<setw(7)
                  <<"长: "<< box1.getLength( ) << setw(10 )
                  << "面积: "<< box1.getArea( ) << endl ;
            cout << "Box2宽: "<< box2.getWidth( ) <<setw(7)
                  <<"长: "<< box2.getLength( ) << setw(10 )
                  << "面积: "<< box2.getArea( ) << endl ;

            return 0;
        }
