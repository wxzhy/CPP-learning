        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <string.h>
            // 下面是两个函数原型
        bool  openFileIn ( fstream  &, char [51] ) ;
        void  showContents ( fstream  & ) ;
        int  main ( )
        {
            fstream  dataFile ;

            if ( !openFileIn (dataFile,"demofile.txt") )  
            {
                cout << "打开文件失败!" << endl ;
                exit ( 0 ) ;
            }
            cout << "文件打开成功 ! \n" ;
            cout << "现在从文件中读取数据 !\n" ;
            showContents(dataFile ) ;
            dataFile.close( ) ;
            return 0;
        }

        // 打开文件进行输入。如果成功，返回tue，失败返回false。
        bool  openFileIn ( fstream  &file, char  name[ ] )
        {
            file.open (name, ios::in) ;
            return  file.fail ( ) ? false : true;
        }

        //  通过循环从文件中读取数据，并显示在屏幕上。
        void  showContents ( fstream  &file )
        {
            char  name [81] ;

            while( !file.eof( ) ) 
            {
                file >> name ;
                if(file.fail())
                    break;
                cout << name << "    " ;
            }
        }
