        #include  <iostream>
        using namespace std;
        #include  "csstudent.h"

        int  main(  )
        {
            CsStudent  student1 ;
            char   chInput[51] ;	// 输入字符串的缓冲区
            int  intInput ;		// 输入整数的临时变量

            cout << "输入关于学生的下列信息：\n" ;
            cout << "姓名： " ;
            cin.getline( chInput , 51 ) ;
            student1.setName( chInput ) ;    	// 设置学生的姓名
            cout << "学号： " ;
            cin.getline( chInput , 21 ) ;
            student1.setID( chInput ) ;					// 设置学生的id号
            cout << "入学年份： " ;
            cin >> intInput ;
            student1.setYearAdmitted( intInput ) ;   // 设置入学时间
            cout << "已修完普通教育的学时数： " ;
            cin >> intInput ;
            student1.setGenEdHours( intInput ) ;		// 设置已经修完普通教育的学时数
            cout << "已修完数学课程的学时数： " ;
            cin >> intInput ;
            student1.setMathHours( intInput ) ;			// 设置已经修完数学课程的学时数
            cout << "已修完计算机科学课程的学时数： " ;
            cin >> intInput ;
            student1.setCsHours( intInput ) ;				// 设置已经修完计算机科学课程的学时数
            student1.setHours( ) ;    							// 计算已经修完的总学时数
            cout << "\n学生信息如下\n" ;
            student1.showInfo( ) ;								// 显示学生的信息

            return 0;
        }
