        #include  <iostream>
        using namespace std;
        #include  "SearchArray.h"

        int  main(  ) 
        {
            SearchArray<int >  intTable( 10 ) ;
            SearchArray<float  >  floatTable( 10 ) ;
            int  x , result ;

                // �������д洢ֵ
            for( x = 0 ;  x < 10 ;  x++ ){
                intTable[x] = x +3 ;
                floatTable[x] = x + 1.6f  ;
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

                // �������в����ض���ֵ
            cout << "��intTable����Ԫ��6\n" ;
            result = intTable.findItem( 6 ) ;
            if( result == -1 ) 
                cout << "��intTable��û���ҵ�Ԫ��6\n" ;
            else
                cout << "\tԪ��6���±��ǣ� " << result << endl ;

            cout << "��floatTable�в��� 9.6\n" ;
            result = floatTable.findItem( 9.6f ) ;
            if( result == -1 ) 
                cout << "\t��floatTable��û���ҵ�9.6\n" ;
            else
                cout << "\tԪ�� 9.6 ���±��ǣ� " << result << endl ;

            return 0;
        }