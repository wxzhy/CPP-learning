        #include  <iostream>
        using namespace std;
        #include  <stdlib.h> 
		#include  <iomanip>
        #include  "IntArray2.h" 

        int  main(  )
        {   
            IntArray  numbers ;
            int  val , x , searchResult ;

            for ( x = 0 ; x < 20 ; x++ )  		// ����20���漴������ʼ������
                if ( !numbers.set(x, rand( ) ))
                    cout << "�洢���ݳ���! \n" ;

            cout << "\n��������������� 20 ����:\n" ;
            for ( x = 0 ; x < 20 ; x++ )  
            {
                if (numbers.get(x, val ) )
                    cout << '\t'<<val ;
                if ( (x+1) % 5 == 0 )      	// ÿ����ʾ 5 ����
                    cout << endl ;
            }
            cout << endl ;
            cout << "�� Enter ������..."<<endl ;
            cin.get ( ) ;
            numbers.selectionSort( ) ;		// ����ѡ�������㷨����

            cout << "������������ 20 ����:\n" ;
                // ��ʾ������ 20 ����
            for ( x = 0 ; x < 20 ; x++ )  
            {
                if (numbers.get(x, val ) )
                    cout << '\t'<<val ;
                if ( (x+1) % 5 == 0 )      	// ÿ����ʾ 5 ����
                    cout << endl ;
            }
            cout << endl << endl ;

            cout << "����������ʾ��һ������Ȼ����в���: " ;
            cin >> val ;
            cout << "���ڲ��ң����Ժ� ...\n" ;
            searchResult = numbers.binarySearch ( val ) ;
            if ( searchResult == -1 )
                cout << "û�ҵ�!\n" ;
            else
            {
                cout << "������֮���ҵ������±�λ���ǣ�" ;
                cout << searchResult << endl ;
            }
            return 0;
        }
