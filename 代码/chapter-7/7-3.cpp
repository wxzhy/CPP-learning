        #include  <iostream>
        using namespace std;

        template  < class  T >
        T  sum( T  val1 , T  val2 ) 
        {
            return  val1 + val2 ;
        }

        template  < class  T >
        T  sum( T  val1 , T  val2 , T  val3 ) 
        {
            return  val1 + val2 + val3 ;
        }

        int  main(  ) 
        {
            float  num1 , num2 , num3 ;

            cout << "������������" ;
            cin >> num1 >> num2 ;
            cout << "���ǵĺ��ǣ�" << sum( num1 , num2 ) << endl ;
            cout << "������������" ;
            cin >> num1 >> num2 >> num3 ;
            cout << "���ǵĺ��ǣ�" << sum( num1 , num2 , num3 ) << endl ;

            return 0;
        }
