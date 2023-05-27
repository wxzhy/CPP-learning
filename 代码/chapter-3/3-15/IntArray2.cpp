        #include  <iostream>
        using namespace std;
        #include  "IntArray2.h"

            // IntArray ��Ĺ��캯����ʵ�ֶ�list �е�ÿ��Ԫ�س�ʼ��
        IntArray::IntArray(  )
        {
            for ( int  i = 0 ; i < 20 ; i++ )
                list[i] = 0 ;
        }
             //  isValid ����������� element �Ƿ�Ϊ��Ч���±�
        bool IntArray::isValid ( int  element)
        {
            bool   status = true ;

            if ( element < 0 || element > 19) 
            {
                cout << "����: "<< element << " ����һ����Ч�������±�.\n" ;
                status = false ;
            }
            return  status ;
        }
            // set ��������ָ��������λ�ô洢һ��ֵ
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
             // get ���������������ָ��λ�õ�ֵ�������ȡ�ɹ�������true�����򷵻�false
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
           //linearSearch�����������н������β��ң��ҵ��ͷ���value�±꣬���򷵻�-1
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

        // binarySearch�����������н��ж��ֲ��ң��ҵ��˾ͷ������±꣬���򷵻�-1
        int  IntArray::binarySearch ( int  value )
        {
            int   first = 0,    	// ��Ԫ�ص��±�
                  last = 19,    	// ���һ��Ԫ�ص��±�
                  middle ;    		// �м�Ԫ�ص��±�

            selectionSort( ) ;    		// ���ȶ���������
            while ( first <= last ) 
            {
                middle = (first + last) / 2 ;    // �����м�ֵ���±�
                if ( list[middle] == value )     // ����ҵ���Ӧ��Ԫ��
                    return  middle ;
                else  if ( list[middle] > value )  // ���Ҫ���ҵ�Ԫ��λ��ǰһ��
                    last = middle - 1 ;
             else
                    first = middle + 1 ;    // ���Ҫ���ҵ�Ԫ��λ�ں�һ��
            }
            return  -1 ;    	// ����δ�ҵ�ָ����Ԫ��
        }

             // bubbleSort ��������Ա������������������С�
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
             // selectionSort ��������Ա�������������������
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
