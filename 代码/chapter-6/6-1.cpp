#include  <iostream>
using namespace std;

float  divide( int , int ) ;		// ����ԭ��

int  main(  ) 
{
    int  num1 , num2 ;
    float  quotient ;

	cout << "�������������� " ;
    cin >> num1 >> num2 ;
    try{
		quotient = divide( num1 , num2 ) ;
		cout << "���ǣ�" << quotient << endl ;
    }  
    catch( char  *exceptionString ) 	
    {
		cout << exceptionString ;
    }
    cout << "�������\n" ;    // �쳣���������ִ�еĵ�һ�����

    return 0;
}

float  divide( int  dividend , int  divisor ) 
{
    if( divisor == 0 ) 
		throw  "����0 ������\n" ;
    else
		return  float ( dividend ) / divisor ;
}