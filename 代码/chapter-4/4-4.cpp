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
            cout << "����ֵǰ\n" ;
            cout << "Boxl��: "<< box1.getWidth( ) <<setw(7)
                  <<"��: "<< box1.getLength( ) << setw(10 )
                  << "���: "<< box1.getArea( ) << endl ;
            cout << "Box2��: "<< box2.getWidth( ) <<setw(7)
                  <<"��: "<< box2.getLength( ) << setw(10 )
                  << "���: "<< box2.getArea( ) << endl ;

            box2 = box1 ;    // ����λ����

            cout << "\n��box1����ֵ��box2�����Ժ� \n" ;
            cout << "Boxl��: "<< box1.getWidth( ) <<setw(7)
                  <<"��: "<< box1.getLength( ) << setw(10 )
                  << "���: "<< box1.getArea( ) << endl ;
            cout << "Box2��: "<< box2.getWidth( ) <<setw(7)
                  <<"��: "<< box2.getLength( ) << setw(10 )
                  << "���: "<< box2.getArea( ) << endl ;

            return 0;
        }
