        #include  <iostream>
        using namespace std;
        #include  "IntArray2.h"

            // IntArray 类的构造函数，实现对list 中的每个元素初始化
        IntArray::IntArray(  )
        {
            for ( int  i = 0 ; i < 20 ; i++ )
                list[i] = 0 ;
        }
             //  isValid 函数检验参数 element 是否为有效的下标
        bool IntArray::isValid ( int  element)
        {
            bool   status = true ;

            if ( element < 0 || element > 19) 
            {
                cout << "错误: "<< element << " 不是一个有效的数组下标.\n" ;
                status = false ;
            }
            return  status ;
        }
            // set 函数，向指定的数组位置存储一个值
        bool  IntArray::set ( int  element, int  value )
        {
            bool  status = false ;

            if ( isValid ( element ) ) 
            {
                list[element] = value ;
                status = true ;
            }
            return  status ;
        }
             // get 函数，获得数组中指定位置的值。如果获取成功，返回true，否则返回false
        bool  IntArray::get ( int  element, int  &value )
        {
            bool   status = false ;

            if ( isValid(element ) ) 
            {
                value = list [element] ;
                status = true ;
            }
            return  status ;
        }
           //linearSearch函数在数组中进行线形查找，找到就返回value下标，否则返回-1
        int  IntArray::linearSearch ( int  value )
        {
            int  i, status = -1 ;

            for ( i = 0 ; i < 20 ; i++ ) 
                if ( list [i] == value )
                {
                    status = i ;
                    break ;
    	            }
            return  status ;
        }

        // binarySearch函数在数组中进行二分查找，找到了就返回其下标，否则返回-1
        int  IntArray::binarySearch ( int  value )
        {
            int   first = 0,    	// 首元素的下标
                  last = 19,    	// 最后一个元素的下标
                  middle ;    		// 中间元素的下标

            selectionSort( ) ;    		// 首先对数组排序
            while ( first <= last ) 
            {
                middle = (first + last) / 2 ;    // 计算中间值的下标
                if ( list[middle] == value )     // 如果找到对应的元素
                    return  middle ;
                else  if ( list[middle] > value )  // 如果要查找的元素位于前一半
                    last = middle - 1 ;
             else
                    first = middle + 1 ;    // 如果要查找的元素位于后一半
            }
            return  -1 ;    	// 代表未找到指定的元素
        }

             // bubbleSort 排序函数成员，对数组进行生序排列。
        void  IntArray::bubbleSort(  )
        {
            int  temp ;

            for ( int line = 0 ; line < 19 ; line++ )
                for ( int col = 0 ; col < 19 - line ; col++ )
                    if ( list [ col ] > list [ col + 1 ] )
                    {
                        temp = list [ col ] ;
                        list [ col ] = list [ col + 1] ;
                        list [ col + 1 ] = temp ;
                    } 
        }
             // selectionSort 排序函数成员，对数组进行生序排列
        void  IntArray::selectionSort( )
        {
            int  startScan, minIndex, temp ;

            for ( startScan = 0 ; startScan < 19 ; startScan++ )
            {
                minIndex = startScan ;
                for ( int  i = startScan + 1 ; i < 20 ; i++ ) 
                    if ( list [ i ] < list [ minIndex ] ) 
                            minIndex = i ;
                temp=list[minIndex] ;
                list[minIndex] = list[startScan] ;
                list[startScan] = temp ;
            }
        }
