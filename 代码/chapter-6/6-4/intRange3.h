#ifndef  INTRANGE3_H
#define  INTRANGE3_H

class  intRange3 
{
private:
    int  input ;			// �û����������
    int  lower ;		// �������ݵ�����
    int  upper ;		// �������ݵ�����
public:
		// �쳣�࣬������һ��������
    class  OutOfRange 
    {
    public:
		int  value ;
		OutOfRange( int  i )  {  value = i ;  }
    } ;

		// ������Ա
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