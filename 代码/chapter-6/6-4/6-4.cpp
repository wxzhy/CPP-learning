#include  <iostream>
using namespace std;
#include  "intRange3.h"

int  main(  ) 
{   
    intRange3  range( 5 , 10 ) ;
    int  userValue ;

	cout << "����һ��5 - 10֮���ֵ�� " ;
    try  {
		userValue = range.getInput( ) ;
		cout << "��������� " << userValue << endl ;
    }
    catch( intRange3 :: OutOfRange  ex ) 
    {
		cout << "����ֵ " << ex.value << " Խ��\n" ;
    }

    cout << "�������\n" ;

    return 0;
}