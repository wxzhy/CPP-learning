        #include  <iostream>
        using namespace std;

        template  < class   T >
        void  swapData( T  &var1 ,T  &var2 ) 
        {
            T   temp ;

            temp = var1 ;    var1 = var2 ;    var2 = temp ;
        }

        int  main(  ) 
        {
            char  firstChar , secondChar  ;
            int     firstInt ,    secondInt  ;
            float  firstFloat , secondFloat  ;

            cout << "���������ַ���" ;
            cin >>  firstChar  >> secondChar  ;
                // ���������ַ�����������
            swapData( firstChar , secondChar ) ;
            cout << firstChar  <<"  "<< secondChar  << endl ;

            cout << "��������������" ;
            cin >>  firstInt  >> secondInt ;
                // �����������α���������
            swapData( firstInt , secondInt ) ;
            cout << firstInt  <<" "<< secondInt  << endl ;

            cout << "���������������� " ;
            cin >>  firstFloat  >> secondFloat  ;
                // ���������������ͱ���������
            swapData( firstFloat , secondFloat ) ;
            cout << firstFloat  <<"  " << secondFloat  << endl ;

			return 0;
        }