        #ifndef  INTRANGE_H
        #define  INTRANGE_H
        #include  <iostream>
        using namespace std;
        class  intRange 
        {
        private:
             int  input ;		// 用户输入的数据
             int  lower ;		// 输入数据的下限
             int  upper ;		// 输入数据的上限
        public:
                // 下面定义的异常类是一个内隐类
             class  OutOfRange {		    };      // 该类中没有定义任何成员
                 // 函数成员
             intRange( int  low , int  high )
             {
                 lower = low ;  upper = high ;  
             }
             int  getInput( void )
             {
                 cin >> input ;
                 if( input < lower || input > upper ) 
                    throw  OutOfRange( ) ;
                 return  input ;
            }
        } ;
        #endif
