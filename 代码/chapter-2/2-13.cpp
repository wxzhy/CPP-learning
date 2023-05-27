        #include  <iostream>
        using namespace std;
        #include  <fstream>

        int  main ( )
        { 
            fstream  dataFile("sentence.txt", ios::out ) ;
            char   ch ;

            cout << "请输入任意多行字符，按 ! 结束! \n" ;
            while ( true ) 
            {
                cin.get(ch) ;
                if (ch == '!' )    // '!'是输入结束标记符号，不存储到文件中
                    break ;
                dataFile.put(ch) ;
            } 

            dataFile.close( ) ;

			return 0;
        }
