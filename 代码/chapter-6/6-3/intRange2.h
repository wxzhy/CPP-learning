#ifndef  INTRANGE2_H
#define  INTRANGE2_H
class  intRange2 
{
private:
    int  input ;		// �û����������
    int  lower ;		// �������ݵ�����
    int  upper ;		// �������ݵ�����
public:
			// �쳣��(������)
    class  tooLow {   } ;	
    class  tooHigh{   } ;

			// ������Ա
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