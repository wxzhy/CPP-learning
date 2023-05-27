        #include  <iostream>
        using namespace std;
        #include  "intRange.h"
        int  main(  ) 
        {
            intRange  range( 5 , 10 ) ;
            int  userValue ;

            cout << "输入一个5 - 10之间的值： " ;
            try  {
                userValue = range.getInput( ) ;
                cout << "你输入的是 " << userValue << endl ;
            }catch( intRange :: OutOfRange ){
                cout << "输入值越界\n" ;
            }
            cout << "程序结束\n" ;
            return 0;
        }
