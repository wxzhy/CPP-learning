        #include  <iostream>
        using namespace std;
        #include "Rectangle.h"      // ����Rectangle��Ķ���

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
            cout << "���β�����" ;
            cout << "��"<< box.getWidth( ) << ",  " ;
            cout << "����"<< box.getLength( ) << ",  " ;
            cout << "�����"<< box.getArea( ) << endl ;

            return 0;
        }