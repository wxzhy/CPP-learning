        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>

        struct  Info	    // 定义一个结构体
        {
            char	name [21] ;
            int	age ;
            char	address[51] ;
            char	phone [14] ;
            char	email[51] ;
        } ;
            // 函数原型
        long  byteNum( int ) ;
        void  showRec(Info) ;
        int  main( )
        {
            fstream  people ( "people.dat", ios::in | ios::binary ) ;
            Info  person ;

            if (people.fail ( ) ) 
            {
                cout << "打开文件people.dat出错! \n" ;
                exit ( 0 ) ;
            }

            cout << "下面是 1 号记录:\n" ;
            people.seekg ( byteNum( 1 ), ios::beg) ;
            people.read ( ( char *)&person, sizeof (person) ) ;
            showRec(person) ;

            cout << "下面是 0 号记录:\n" ;
            people.seekg (byteNum(0), ios::beg) ;
            people.read ( ( char *)&person, sizeof (person) ) ;
            showRec(person) ;
            people.close( ) ;
            return 0;
        }

        		// byteNum函数返回记录号在文件中偏移量
        long  byteNum ( int  recNum )
        {
            return  sizeof (Info) * recNum ;
        }

        		// showRec函数显示参数结构体变量中的各个项
        void  showRec(Info  person)
        {
            cout <<  "姓名:  " ;
            cout << person.name << endl ;
            cout << "年龄: " ;
            cout << person.age << endl ;
            cout << "地址:  " ;
            cout << person.address << endl ;
            cout << "电话: " ;
            cout << person.phone << endl ;
            cout << "E-mail: " ;
            cout << person.email << endl ;
        }