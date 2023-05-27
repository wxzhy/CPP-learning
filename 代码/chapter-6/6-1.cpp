#include  <iostream>
using namespace std;

float  divide( int , int ) ;		// 函数原型

int  main(  ) 
{
    int  num1 , num2 ;
    float  quotient ;

	cout << "输入两个整数： " ;
    cin >> num1 >> num2 ;
    try{
		quotient = divide( num1 , num2 ) ;
		cout << "商是：" << quotient << endl ;
    }  
    catch( char  *exceptionString ) 	
    {
		cout << exceptionString ;
    }
    cout << "程序结束\n" ;    // 异常处理结束后执行的第一条语句

    return 0;
}

float  divide( int  dividend , int  divisor ) 
{
    if( divisor == 0 ) 
		throw  "错误：0 做除数\n" ;
    else
		return  float ( dividend ) / divisor ;
}