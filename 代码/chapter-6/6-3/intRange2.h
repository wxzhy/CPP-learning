#ifndef  INTRANGE2_H
#define  INTRANGE2_H
class  intRange2 
{
private:
    int  input ;		// 用户输入的数据
    int  lower ;		// 输入数据的下限
    int  upper ;		// 输入数据的上限
public:
			// 异常类(内隐类)
    class  tooLow {   } ;	
    class  tooHigh{   } ;

			// 函数成员
    intRange2( int  low, int  high )
	{ 
		lower = low;  
		upper = high; 
	}

    int  getInput(  ) 
    {
		cin >> input ;
		if( input < lower ) 
			throw  tooLow( ) ;
		else  if( input > upper ) 
			throw  tooHigh( ) ;

		return  input ;
    }
} ;
#endif