#include  <iostream>
using namespace std;
#include  "intRange2.h"

int  main(  ) 
{   
	intRange2  range( 5 , 10 ) ;
    int  userValue ;

    cout << "输入一个5 - 10之间的值： " ;
    try  {
		userValue = range.getInput( ) ;
		cout << "你输入的是 " << userValue << endl ;
    }
    catch( intRange2 :: tooLow ) 
    {
		cout << "输入值小于下限\n" ;
    }
    catch( intRange2 :: tooHigh ) 
    {
		cout << "输入值大于上限\n" ;
    }
    cout << "程序结束\n" ;

    return 0;
}