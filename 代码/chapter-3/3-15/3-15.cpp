        #include  <iostream>
        using namespace std;
        #include  <stdlib.h> 
		#include  <iomanip>
        #include  "IntArray2.h" 

        int  main(  )
        {   
            IntArray  numbers ;
            int  val , x , searchResult ;

            for ( x = 0 ; x < 20 ; x++ )  		// 产生20个随即数，初始化数组
                if ( !numbers.set(x, rand( ) ))
                    cout << "存储数据出错! \n" ;

            cout << "\n下面是随机产生的 20 个数:\n" ;
            for ( x = 0 ; x < 20 ; x++ )  
            {
                if (numbers.get(x, val ) )
                    cout << '\t'<<val ;
                if ( (x+1) % 5 == 0 )      	// 每行显示 5 个数
                    cout << endl ;
            }
            cout << endl ;
            cout << "按 Enter 键继续..."<<endl ;
            cin.get ( ) ;
            numbers.selectionSort( ) ;		// 采用选择排序算法排序

            cout << "下面是排序后的 20 个数:\n" ;
                // 显示排序后的 20 个数
            for ( x = 0 ; x < 20 ; x++ )  
            {
                if (numbers.get(x, val ) )
                    cout << '\t'<<val ;
                if ( (x+1) % 5 == 0 )      	// 每行显示 5 个数
                    cout << endl ;
            }
            cout << endl << endl ;

            cout << "输入上面显示的一个数，然后进行查找: " ;
            cin >> val ;
            cout << "正在查找，请稍侯 ...\n" ;
            searchResult = numbers.binarySearch ( val ) ;
            if ( searchResult == -1 )
                cout << "没找到!\n" ;
            else
            {
                cout << "在排序之后，找到它的下标位置是：" ;
                cout << searchResult << endl ;
            }
            return 0;
        }
