      #include  <iostream>
        using namespace std;
        #include  "chrange.h"

		const char* Msg="������ J, K, L, M �� N��";
        int  main(  )
        {
                // ����һ��input�����������ĸ��Χ��'J'��'N'��
            CharRange  input ( 'J' , 'N' , Msg ) ;

            cout << "������ J, K, L, M �� N�������� N ����ֹ���������. \n" ;
            while(input.getChar( ) != 'N')
                ;
            return 0;
        }
