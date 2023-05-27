      #include  <iostream>
        using namespace std;
        #include  "chrange.h"

		const char* Msg="请输入 J, K, L, M 或 N：";
        int  main(  )
        {
                // 创建一个input对象，输入的字母范围是'J'到'N'。
            CharRange  input ( 'J' , 'N' , Msg ) ;

            cout << "请输入 J, K, L, M 或 N，若输入 N 将终止程序的运行. \n" ;
            while(input.getChar( ) != 'N')
                ;
            return 0;
        }
