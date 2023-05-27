        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>
        #include  <ctype.h>

		struct  Info 
        {
            char	name [21] ;
            int		age ;
            char	address[51] ;
            char	phone [14] ;
            char	email[51] ;
        } ;

        int  main( )
        {
            fstream  people("people.dat", ios::out | ios::binary) ;
            Info  person ;
            char  again ;

            if (people.fail ( ) ) 
            {
                cout << "打开文件people.dat出错! \n" ;
                exit ( 0 ) ;
            }

            do {
                cout << "请输入下面的数据: \n" ;
                cout <<  "姓名:  " ;
                cin.getline(person.name, 21) ;
                cout << "年龄: " ;
                cin >> person.age ;
                cin.ignore( ) ;                // 略过换行符

                cout << "联系地址: " ;
                cin.getline(person.address, 51) ;
                cout << "联系电话: " ;
                cin.getline(person.phone, 14) ;
                cout << "E-mail: " ;
                cin.getline(person.email, 51) ;

                people .write ( ( char *)&person, sizeof (person) ) ;

                cout << "还要再输入一个同学的数据吗 ? " ;
                cin >> again ;
                cin.ignore( ) ;
            } while ( toupper ( again ) == 'Y' ) ;
            people.close( ) ;                // 关闭文件

                // 下面是再次打开文件进行读取数据
            cout << "\n\n*** 下面显示所有人的数据 ***\n" ;
            people.open ("people.dat", ios::in | ios::binary) ;
            if (people.fail ( ) ) 
            {
                cout << "打开文件people.dat出错! \n" ;
                exit ( 0 ) ;
            }

            people.read ( ( char *)&person, sizeof (person) ) ;
            while ( !people.eof ( ) ) 
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

                cout << "\n按任意键，显示下一个人的记录!\n" ;
                cin.get(again) ;
                people.read ( ( char *)&person, sizeof (person) ) ;
            }

            cout << "显示完毕 ! \n" ;
            people.close( ) ;

            return 0;
        }