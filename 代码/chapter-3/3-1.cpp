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

        	  // setData ���������� w ��������Ա width���� l ��������Աlength
        void  Rectangle::setData ( float  w, float  l )
        {
            width = w ;
            length = l ;
        }

        		//  calculateArea ��������Rectangle�������������ѽ���洢area��
        void  Rectangle::calculateArea(  )
        {
            area = width * length ;
        }

        		//  getWidth ������Ա���ش洢��˽�г�Ա width �е�ֵ
        float  Rectangle::getWidth(  )
        {
            return  width ;
        }

              //  getLength ������Ա�����ش洢��˽�г�Ա length �е�ֵ
        float  Rectangle::getLength(  )
        {
            return  length ;
        }

             //  getArea ������Ա�����ش洢��˽�г�Ա area �е�ֵ
        float  Rectangle::getArea(  )
        {
            return  area ;
        }

        		// ������
        int  main ( void )
        {
            Rectangle  box ;
            float  wide , boxLong ;

            cout<< "������ε����\n" ;
            cout << "������εĿ�" ;
            cin >> wide ;
            cout << "������εĳ���" ;
            cin >> boxLong ;
            box.setData(wide , boxLong) ;
            box.calculateArea( ) ;
			cout << "���β���:" ;
            cout << "��"<< box.getWidth( ) << " ,  " ;
            cout << "����"<< box.getLength( ) << " ,  " ;
            cout << "�����"<< box.getArea( ) << endl ;

            return 0;
        }
