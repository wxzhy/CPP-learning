#ifndef  INTRANGE3_H
#define  INTRANGE3_H

class  intRange3 
{
private:
    int  input ;			// 用户输入的数据
    int  lower ;		// 输入数据的下限
    int  upper ;		// 输入数据的上限
public:
		// 异常类，该类是一个内隐类
    class  OutOfRange 
    {
    public:
		int  value ;
		OutOfRange( int  i )  {  value = i ;  }
    } ;

		// 函数成员
    intRange3( int  low , int  high ){ lower = low;  upper = high;  }

    int  getInput(  ) 
    {
		cin >> input ;
		if( input < lower || input > upper ) 
			throw  OutOfRange( input ) ;

		return  input ;
    }
};
#endif