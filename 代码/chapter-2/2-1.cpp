        #include  <iostream>
        using namespace std;
        #include  <fstream>

        int  main ( )
        {
            fstream  dataFile ;     // 定义一个fstream类对象
            char      fileName[81] ;

            cout << "输入要打开的文件名字： " ;
            cin.getline(fileName, 81) ;
            dataFile.open (fileName, ios::out ) ;   
            cout << "打开文件" << fileName << "\n" ;

            return 0;
        }