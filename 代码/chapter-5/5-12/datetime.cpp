        #include  "datetime.h"
        #include  <string.h>
        #include  <stdlib.h> 
        DateTime::DateTime(int dy, int  mon, int  yr, int  hr, int  mt, int  sc):
                              Date(dy, mon, yr),Time(hr, mt, sc) // ����Ĺ��캯��
        {
            char   temp[10] ; 	// itoa( )����ʹ�õ���ʱ����

                 // �����ڴ洢��dTString�У���ʽΪMM/DD/YY
            strcpy( dTString , itoa( getMonth( ) , temp , 10) ) ;
            strcat( dTString , "/") ;
            strcat( dTString , itoa( getDay( ) , temp , 10) ) ;
            strcat( dTString , "/") ;
            strcat( dTString , itoa( getYear( ) , temp , 10) ) ;
            strcat( dTString , " ") ;
                 // ��ʱ��洢��dTString�У���ʽΪHH : MM : SS
            strcat( dTString , itoa( getHour( ) , temp , 10) ) ;
            strcat( dTString , ":") ;
            strcat( dTString , itoa( getMin( ) , temp , 10) ) ;
            strcat( dTString , ":") ;
            strcat( dTString , itoa( getSec( ) , temp , 10) ) ;
        }
