        #include "IntArray.h"
        #include  <iostream>
        using namespace std;

        int  main(  )
        {
            IntArray  numbers ;
            int  val , x ;

                // �� 1 �洢�������У�ͬʱ��ʾ20��'*'
            for(x = 0 ; x < 20 ; x++ ) 
                if ( numbers.set(x, 1 ) )
                    cout << "* " ;
            cout << endl ; 

                // ��������е� 20 ��Ԫ��
            for(x = 0 ; x < 20 ; x++ )   
               if ( numbers.get(x, val ) )
                    cout << val << "  " ;
            cout << endl ;

                // ����Խ����飺��3�洢���±�Ϊ100��λ��
            if ( numbers.set(100, 3) )
                cout << "���±�Ϊ 100 ��Ԫ�ؿռ����óɹ�!\n" ;
            return 0;
        }
