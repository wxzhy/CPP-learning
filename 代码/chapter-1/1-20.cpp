        #include  <iostream>
        using namespace std;

        int  square( int ) ;			// ����ԭ��
        float  square( float ) ;		// ����ԭ��

        int  main ( )
        {   
            int  userInt ;
            float  userFloat  ;

            cout.precision ( 2 ) ;
            cout << "������һ�������͸�����: " ;
            cin >> userInt >> userFloat  ;
            cout << "���ǵ�ƽ��Ϊ�� " ;
            cout << square(userInt) <<" �� " << square(userFloat ) << endl ;
            return 0;
        }

        //*******************************************************************
        // �������غ���square������Ϊint������ֵ��int������ƽ��
        //*******************************************************************
        int  square ( int  number )
        {
            return  number * number ;
        }

        //*******************************************************************
        // �������غ���square������Ϊfloat������ֵ��float������ƽ��
        //*******************************************************************
        float  square ( float  number )
        {
            return  number * number ;
        }