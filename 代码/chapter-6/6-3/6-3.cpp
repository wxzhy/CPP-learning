#include  <iostream>
using namespace std;
#include  "intRange2.h"

int  main(  ) 
{   
	intRange2  range( 5 , 10 ) ;
    int  userValue ;

    cout << "����һ��5 - 10֮���ֵ�� " ;
    try  {
		userValue = range.getInput( ) ;
		cout << "��������� " << userValue << endl ;
    }
    catch( intRange2 :: tooLow ) 
    {
		cout << "����ֵС������\n" ;
    }
    catch( intRange2 :: tooHigh ) 
    {
		cout << "����ֵ��������\n" ;
    }
    cout << "�������\n" ;

    return 0;
}