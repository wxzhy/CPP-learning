        #include  <stdlib.h>
        #include  "feetinches.h"

        		// simplify����
        		// �������ܣ�����洢�����ݳ�Աinches�е�ֵ�Ƿ����12��С��0��
        		// ��������������������feet��inches���е�����
        void  FeetInches::simplify( )
        {
            if (inches >= 12 ) 
            {
                feet += (inches / 12 ) ;   // ����
                inches = inches % 12 ;
            } else  if (inches < 0 )     	// ���inchesΪ����
            {
                feet -= abs(inches ) / 12 + 1 ;
                inches = 12 - abs(inches ) % 12 ;
            }
        }

        		// ���ض�Ԫ����� +
        FeetInches  FeetInches::operator + ( const  FeetInches  &right )
        {
            FeetInches  temp ;

            temp.inches = inches + right.inches ;
            temp.feet = feet + right.feet ;
            temp.simplify( ) ;
            return  temp ;
        }

        		// ���ض�Ԫ����� -
        FeetInches  FeetInches::operator-( const  FeetInches  &right )
        {
            FeetInches  temp ;

            temp.inches = inches - right.inches ;
            temp.feet = feet - right.feet ;
            temp.simplify ( ) ;
            return  temp ;
        }

        		// ����ǰ��һԪ�����++���������Ӻ�Ķ���
        FeetInches  FeetInches::operator ++ ( )
        {
            ++inches ;        // ���ӵ�ǰ�����inches
            simplify ( ) ;
            return  *this ;    // ���ص�ǰ����
        }

        		// ���غ���һԪ�����++����������ǰ�Ķ���
        FeetInches  FeetInches::operator ++ ( int )
        {
            FeetInches  temp ( feet , inches ) ;    // temp��������ĳ�ֵ

            ++inches ;      // ���ӵ�ǰ�����inches
            simplify( ) ;
            return  temp ;  // ���ر�����ֵ����ʱ����
        }

              //  ����>�����������ǰ��������ұߵĶ��󣬷���true�����򷵻�false
        bool  FeetInches::operator > ( const  FeetInches  &right )
        {
            if ( feet > right.feet )
                return  true ;
            else  if ( feet == right.feet && inches > right.inches )
                  return  true ;
            else   return  false ;
        }

              //  ����<�����������ǰ����С���ұߵĶ��󣬷���true�����򷵻�false
        bool  FeetInches::operator < ( const  FeetInches  &right )
        {
            if ( feet < right.feet )
                return  true ;
            else  if ( feet == right.feet && inches < right.inches )
                    return  true ;
            else    return  false ;
        }

              //  ����==�����������ǰ�����ֵ���ұ߶����ֵ��ͬ������true�����򷵻�false��
        bool  FeetInches::operator ==( const  FeetInches  &right )
        {
            if ( feet == right.feet && inches == right.inches )
                 return  true ;
            else  return  false ;
        }

              // �����������<<������Ļ����ʾFeetInches�������Ϣ
        ostream  &operator << ( ostream  &strm , FeetInches  &obj )
        {
            strm << obj.feet << " Ӣ�� , "<< obj.inches <<" Ӣ��" ;
            return  strm ;
        }

              // ��������ȡ��>>������FeetInches��������Ҫ����Ϣ
        istream  &operator >> (istream  &strm , FeetInches  &obj )
        {
            cout << "Ӣ�ߣ�" ;
            strm >> obj.feet ;
            cout << "Ӣ�磺" ;
            strm >> obj.inches ;
            obj.simplify( ) ;
            return  strm ;
        }

              // ��FeetInches�����ת��Ϊfloat���͵��� 
        FeetInches::operator  float  (  )
        {
            float  temp = (int) feet ;
            temp += (inches / 12.0f ) ;
            return  temp ;
        }
