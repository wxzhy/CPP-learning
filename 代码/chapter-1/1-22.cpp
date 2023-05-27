        #include  <iostream>
        using namespace std;
        #include  <stdlib.h>

        int  main ( )
        {
            float  *sales, total = 0, average ;
            int  numDays , count ;

            cout << "你希望处理几天的销售量 ? " ;
            cin >> numDays ;
            sales = new float [numDays] ; 					// 分配内存空间
            if ( sales == NULL )   						// 出错检测
			{
                cout <<" 分配内存空间失败 !\n" ;
                exit ( 0 ) ;
            }

                // 从键盘输入数据
            cout << "请输入如下的销售量\n" ;
            for ( count = 0 ; count < numDays ; count++ ) 
			{
                cout << "第 " <<(count + 1) << " 天: " ;
                cin >> sales [count] ;
            }

            for ( count = 0 ; count < numDays ; count++ )  // 计算总的销售量
                total += sales [count] ;    
            average = total / numDays ;   // 计算销售量的平均值

                // 显示结果
            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "总的销售量: " << total << endl ;
            cout << "平均销售量: " << average << endl ;

            delete [ ]sales ;  	// 释放空间

			return 0;
        }