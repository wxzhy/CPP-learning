        #include  <stdlib.h>
        #include  "feetinches.h"

        		// simplify函数
        		// 函数功能：检验存储在数据成员inches中的值是否大于12或小于0。
        		// 如果出现了这种情况将对feet和inches进行调整。
        void  FeetInches::simplify( )
        {
            if (inches >= 12 ) 
            {
                feet += (inches / 12 ) ;   // 整除
                inches = inches % 12 ;
            } else  if (inches < 0 )     	// 如果inches为负数
            {
                feet -= abs(inches ) / 12 + 1 ;
                inches = 12 - abs(inches ) % 12 ;
            }
        }

        		// 重载二元运算符 +
        FeetInches  FeetInches::operator + ( const  FeetInches  &right )
        {
            FeetInches  temp ;

            temp.inches = inches + right.inches ;
            temp.feet = feet + right.feet ;
            temp.simplify( ) ;
            return  temp ;
        }

        		// 重载二元运算符 -
        FeetInches  FeetInches::operator-( const  FeetInches  &right )
        {
            FeetInches  temp ;

            temp.inches = inches - right.inches ;
            temp.feet = feet - right.feet ;
            temp.simplify ( ) ;
            return  temp ;
        }

        		// 重载前置一元运算符++，返回增加后的对象
        FeetInches  FeetInches::operator ++ ( )
        {
            ++inches ;        // 增加当前对象的inches
            simplify ( ) ;
            return  *this ;    // 返回当前对象
        }

        		// 重载后置一元运算符++，返回增加前的对象
        FeetInches  FeetInches::operator ++ ( int )
        {
            FeetInches  temp ( feet , inches ) ;    // temp保留对象的初值

            ++inches ;      // 增加当前对象的inches
            simplify( ) ;
            return  temp ;  // 返回保留旧值的临时对象
        }

              //  重载>运算符，若当前对象大于右边的对象，返回true，否则返回false
        bool  FeetInches::operator > ( const  FeetInches  &right )
        {
            if ( feet > right.feet )
                return  true ;
            else  if ( feet == right.feet && inches > right.inches )
                  return  true ;
            else   return  false ;
        }

              //  重载<运算符，若当前对象小于右边的对象，返回true，否则返回false
        bool  FeetInches::operator < ( const  FeetInches  &right )
        {
            if ( feet < right.feet )
                return  true ;
            else  if ( feet == right.feet && inches < right.inches )
                    return  true ;
            else    return  false ;
        }

              //  重载==运算符，若当前对象的值和右边对象的值相同，返回true，否则返回false。
        bool  FeetInches::operator ==( const  FeetInches  &right )
        {
            if ( feet == right.feet && inches == right.inches )
                 return  true ;
            else  return  false ;
        }

              // 重载流插入符<<，在屏幕上显示FeetInches对象的信息
        ostream  &operator << ( ostream  &strm , FeetInches  &obj )
        {
            strm << obj.feet << " 英尺 , "<< obj.inches <<" 英寸" ;
            return  strm ;
        }

              // 重载流提取符>>，输入FeetInches对象所需要的信息
        istream  &operator >> (istream  &strm , FeetInches  &obj )
        {
            cout << "英尺：" ;
            strm >> obj.feet ;
            cout << "英寸：" ;
            strm >> obj.inches ;
            obj.simplify( ) ;
            return  strm ;
        }

              // 将FeetInches类对象转换为float类型的数 
        FeetInches::operator  float  (  )
        {
            float  temp = (int) feet ;
            temp += (inches / 12.0f ) ;
            return  temp ;
        }
