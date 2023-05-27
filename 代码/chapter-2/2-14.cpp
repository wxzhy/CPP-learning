        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <ctype.h>   	// toupper函数在此头文件中

        int  main( )
        {
            ifstream  inFile ;       // 输入文件流对象
            ofstream  outFile("out.txt") ;  	// 输出文件流对象
            char  fileName[81], ch, ch2 ;

            cout << "请输入文件名：  " ;
            cin >> fileName,
            inFile.open (fileName ) ;
            if (inFile.fail ( ) ) 
            {
                cout << "不能打开文件: " << fileName << endl ;
                exit ( 0 ) ;
            }

            inFile.get(ch) ;                 // 从 inFile 读取一个字符
            while( !inFile.eof ( ) )       // 测试文件结束
            {
                ch2 = toupper(ch) ;         // 转换为大写字母
                outFile.put(ch2) ;          // 写到第二个文件中
                inFile.get(ch) ;            // 从 inFile 再次读取一个字符
            }

            inFile.close( ) ;
            outFile.close( ) ;
            cout << "文件转换结束! \n" ;

            return 0;
        }