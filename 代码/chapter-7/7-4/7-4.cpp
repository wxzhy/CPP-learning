        #include  <iostream>
        using namespace std;
        #include  "freewillArray.h"

        int  main(  ) 
        {
            FreewillArray <int> intTable(10);  // intTable��floatTable���Ƕ���
            FreewillArray <float> floatTable(10);
            int  x ;

                // �������д洢ֵ
            for( x = 0 ;  x < 10 ;  x++ )
			{
                intTable[x] = x ;
                floatTable[x] = x ;
            }

                // ��ʾ�����е�ֵ
            cout << "intTable�е�ֵ�ǣ�\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << intTable[x] << "  " ;
            cout << endl ;
            cout << "floatTable�е�ֵ�ǣ�\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << floatTable[x] << "  " ;
            cout << endl ;

                // ������Ԫ�ز�����Ƕ+����
            for( x = 0 ;  x < 10 ;  x++ )
			{
                intTable[x] = intTable[x] + 1 ;
                floatTable[x] = floatTable[x] + 1.5f ;
            }

                // ��ʾ�����е�ֵ
            cout << "intTable�е�ֵ�ǣ�\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << intTable[x] << "  " ;
            cout << endl ;
            cout << "floatTable�е�ֵ�ǣ�\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << floatTable[x] << "  " ;
            cout << endl ;

                // ������Ԫ�ز�����Ƕ++����
            for( x = 0 ;  x < 10 ;  x++ )
			{
                intTable[x]++ ;
                floatTable[x]++ ;
            }

                // ��ʾ�����е�ֵ
            cout << "intTable�е�ֵ�ǣ�\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << intTable[x] << "  " ;
            cout << endl ;

            cout << "floatTable�е�ֵ�ǣ�\n\t" ;
            for( x = 0 ;  x < 10 ;  x++ ) 
                cout << floatTable[x] << "  " ;
            cout << endl ;

            return 0;
        }
