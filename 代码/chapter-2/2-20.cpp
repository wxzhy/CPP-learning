        #include  <iostream>
        using namespace std;
        #include  <fstream>
        #include  <stdlib.h>  
        #include  <iomanip>  

        struct  Info    		// 定义一个结构体
        {
            char	name [21] ;
            int	    age ;
            char	address[51] ;
            char	phone [14] ;
            char	email[51] ;
        } ;

            //  函数原型
        void	createFile(fstream  & );	// 创建文件
        void	editFile(fstream  & );		// 修改文件
        void	showFile(fstream  & );	// 显示文件

        int  main (void)
        {
            int  	choice;
            fstream  people("Info.dat", ios::in | ios::out | ios::binary);

            if ( people.fail ( ))            
			{
                cout << "打开文件Info.dat出错! \n" ;
                exit ( 0 ) ;
            }

            while( true )
            {
                cout<<"\n\t 1. Create   2.Show   3.Edit   4.Exit\n";
                cin>>choice;
                switch ( choice )
                {
                    case 1: 
                        createFile(people ); 
                        break;
                    case 2: 
                        showFile(people ); 	
                        break;
                    case 3: 
                        editFile(people );
                        break;
                    case 4: 
                        exit ( 0 );
               }
            }
            people.close( );
            return 0;
        }

            // 下面的createFile函数采用5个空记录设置文件
        void  createFile ( fstream  & file )
        {
            Info  record={"",0,"","",""};

            for(int count = 0; count < 5; count++ )      // 写空记录
            {
                cout << "写记录: " << count << endl;
                file.write ((char *)&record, sizeof (record));
            }
            file.flush( );
        }

            // showFile函数可以显示文件的内容
        void  showFile(fstream  & file )
        { 
            Info  person={"",0,"","",""} ;

            file.clear( );      // 清除各标记
            file.seekg( 0L,ios::beg);
            
            while( !file.eof ( ) ) 
            {
                file.read ( ( char *)&person, sizeof (person) ) ;
                if(file.fail())
					break;
                cout <<  "姓名:  " << person.name;
                cout << setw(20)<< "年 龄: " << person.age ;
                cout << setw(20)<< "地址:  " << person.address<< endl;
                cout << "电话: " << person.phone ;
                cout << setw(21)<< "E-mail: " << person.email << endl ; 
            
            }
        }

            // 下面的函数通过调整写指针，可以修改任意一个记录
        void  editFile(fstream  & file )
        {
            Info  person ;
            long  recNum ;

            file.clear( ); 
            cout << "你想修改哪个人 (0 - 4) ? " ;
            cin >> recNum ;
            cin.ignore( ) ;        // 略过后面的换行符
            file.seekg (recNum * sizeof (person), ios::beg); // 调整读指针
            file.read ( ( char *)&person, sizeof (person));  // 读出原来的数据

                // 显示原来数据
            cout <<  "姓名:  " ;
            cout << person.name;
            cout << setw(20)<< "年  龄: " ;
            cout << person.age ;
            cout << setw(20)<< "地址:  " ;
            cout << person.address<< endl;
            cout << "电话: " ;
            cout << person.phone ;
            cout << setw(21)<< "E-mail: " ;
            cout << person.email << endl << endl ;

                // 输入新数据
            cout << "请输入下面的新信息: \n" ;
            cout <<  "姓名:  " ;
            cin.getline(person.name, 21) ;
            cout << "年龄: " ;
            cin >> person.age ;
            cin.ignore( ) ;    // 略过换行符

            cout << "联系地址: " ;
            cin.getline(person.address, 51) ;
            cout << "联系电话: " ;
            cin.getline(person.phone, 14) ;
            cout << "E-mail: " ;
            cin.getline(person.email, 51) ;

            file.seekp ( recNum * sizeof (person), ios::beg) ;   // 调整写指针
            file.write ( ( char *)&person, sizeof (person) ) ;   // 重新写记录

            file.flush( );
        }