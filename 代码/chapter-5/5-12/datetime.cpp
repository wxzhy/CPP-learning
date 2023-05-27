        #include  "datetime.h"
        #include  <string.h>
        #include  <stdlib.h> 
        DateTime::DateTime(int dy, int  mon, int  yr, int  hr, int  mt, int  sc):
                              Date(dy, mon, yr),Time(hr, mt, sc) // 子类的构造函数
        {
            char   temp[10] ; 	// itoa( )函数使用的临时变量

                 // 将日期存储在dTString中，格式为MM/DD/YY
            strcpy( dTString , itoa( getMonth( ) , temp , 10) ) ;
            strcat( dTString , "/") ;
            strcat( dTString , itoa( getDay( ) , temp , 10) ) ;
            strcat( dTString , "/") ;
            strcat( dTString , itoa( getYear( ) , temp , 10) ) ;
            strcat( dTString , " ") ;
                 // 将时间存储在dTString中，格式为HH : MM : SS
            strcat( dTString , itoa( getHour( ) , temp , 10) ) ;
            strcat( dTString , ":") ;
            strcat( dTString , itoa( getMin( ) , temp , 10) ) ;
            strcat( dTString , ":") ;
            strcat( dTString , itoa( getSec( ) , temp , 10) ) ;
        }
