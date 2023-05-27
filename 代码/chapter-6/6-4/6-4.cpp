#include  <iostream>
using namespace std;
#include  "intRange3.h"

int  main(  ) 
{   
    intRange3  range( 5 , 10 ) ;
    int  userValue ;

	cout << "输入一个5 - 10之间的值： " ;
    try  {
		userValue = range.getInput( ) ;
		cout << "你输入的是 " << userValue << endl ;
    }
    catch( intRange3 :: OutOfRange  ex ) 
    {
		cout << "输入值 " << ex.value << " 越界\n" ;
    }

    cout << "程序结束\n" ;

    return 0;
}