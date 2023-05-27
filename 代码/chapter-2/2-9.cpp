        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        void  showState ( fstream  & ) ;

        int  main ( )
        { 
            fstream testFile("stuff.dat", ios::out ) ;

            if ( testFile.fail ( ) ) 
            {
                cout << "打开文件失败! \n" ;
                exit ( 0 ) ;
            }

            int  num= 10 ;
            cout << "向文件中写数据! \n" ;
            testFile << num ;       // 通过testFile向文件写一个整数
            showState ( testFile ) ;
            testFile.close( ) ;     // 关闭文件
            testFile.open ("stuff.dat", ios::in) ; // 打开文件读

            if ( testFile.fail ( ) ) 
			{
                cout << "打开文件失败! \n" ;
                exit ( 0 ) ;
            }
            cout << "\n从文件中读一个整数! \n" ;
            testFile >> num ;      // 从文件中读一个整数
            showState ( testFile ) ;
            cout << "\n再读一个整数! \n" ;
            testFile >> num ;     // 将出现出错标记
            showState ( testFile ) ;
            testFile.close( ) ;        // 关闭文件

            return 0;
        }

        // 返回几个状态函数的返回值，并调用clear( )函数清除标记
        void  showState ( fstream  &file )
        { 
            cout << "当前文件的状态位如下:\n" ;
            cout <<"  eof bit: "<< file.eof ( ) << "    " ;
            cout <<"  fail bit: "<< file.fail ( ) << "    " ;
            cout <<"  bad bit: "<< file.bad( ) << "    " ;
            cout <<"  good bit: "<< file.good( ) << endl ;

            file.clear( ) ;    // 清除出错标记位
        }