        #include  <iostream>
        using namespace std;
        #include  "intarray.h"

        int  main(  )
        {
            IntArray  table( 10 ) ;    // ����һ��IntArray�����
            int  x ;

            for ( x = 0 ; x < 10 ; x++ )
                table [ x ] = x  ; 
            for ( x = 0 ; x < 10 ; x++ )		// ��ʾ�����е�ֵ
                cout << table [ x ] <<  "  " ;
            cout << endl ;
            for ( x = 0 ; x < 10 ; x++ )		// ����ϵͳ�ṩ�������+��������Ԫ��
               table [ x ] = table [ x ] + 2 ;
            for ( x = 0 ; x < 10 ; x++ )		// ��ʾ�����е�ֵ
                cout << table [ x ] << "  " ;
            cout << endl ;
            for ( x = 0 ; x < 10 ; x++ )		// ����ϵͳ�ṩ�������++��������Ԫ��
                table [x] ++ ;
            for ( x = 0 ; x < 10 ; x++ )		// ��ʾ�����е�ֵ
                cout << table [ x ] <<"  " ;
            cout << endl ;

            cout << "\n���� table[11]�������±�Խ��\n" ;
            table[11] = 0 ;		// ���������±�Խ��

            return 0;
        }
