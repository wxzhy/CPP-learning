        #include  <iostream>
        using namespace std;
        #include  <iomanip.h>
        int  main ( )
        {
            float  quotient , number1 = 132.364f , number2 = 26.91f ;

            quotient = number1 / number2 ;
            cout << quotient << endl ;
            cout << setprecision (5) << quotient << endl ;
            cout << setprecision (4) << quotient << endl ;
            cout << setprecision (3) << quotient << endl ;
            cout << setprecision ( 2 ) << quotient << endl ;
            cout << setprecision (1) << quotient << endl ;
            return 0;
        }
