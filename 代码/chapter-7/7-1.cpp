        #include  <iostream>
        using namespace std;

            // Square ������ģ�嶨��
        template  < class  T >
        T  square( T  number ) 
        {
             return  number * number ;
        }

        int  main(  ) 
        {
            int  userInt  ;
            float  userFloat  ;

            cout.precision( 5 ) ;
            cout << "������һ��������һ����������" ;
            cin >> userInt  >> userFloat  ;
            cout << "���ǵ�ƽ���ֱ��ǣ�" ;
            cout << square( userInt ) << " �� " << square( userFloat ) << endl ;

            return 0;
        }
