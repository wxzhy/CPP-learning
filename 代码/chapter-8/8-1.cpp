        #include  <iostream>
        #include  <string> 
        using namespace std;

        void  RMBFormat( string & ) ;

        int  main( )
        {
            string  input ;

                // ��������ҵ�����
            cout << "���� nnnnn.nn ��ʽ��������ҵ�����: " ;
            cin >> input ;
            RMBFormat(input) ;
            cout << "��ʽ�����:  " ;
            cout << input << endl ;

            return 0;
        }

        		//�����Ĳ�����һ��string���ã�����һ����ͨ�ַ�����������ҵ���ʽ��ʽ����
        void  RMBFormat( string  &currency)
        {
            int  dp ;

            dp = currency.find('.') ; 	// �������еĵ�
            if(dp > 3)        // ����ֺ�
                for( int  x = dp - 3 ; x > 0 ; x -= 3)
                    currency.insert(x, ",") ;
            currency.insert( 0 , "RMB") ;	   // ��������ҷ���
        }
