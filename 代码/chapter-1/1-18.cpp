        #include  <iostream>
        using namespace std;

            // ������һ������ԭ�ͣ������˲���ȱʡֵ
        void  displayStars ( int = 10, int = 1) ;

        int  main ( )
        {
            displayStars( ) ;
            displayStars(5) ;
            displayStars(7, 3) ;

            return 0;
        }

        //*******************************************************************
        // displayStars�����Ķ��壬��������cols��ȱʡֵ��10��rows��ȱʡֵ��1
        // ��ʾһ�����ǺŹ��ɵľ��Ρ�
        //*******************************************************************
        void  displayStars ( int  cols, int  rows)
        {
            for ( int  down = 0 ; down < rows ; down++ ) {
                for ( int  across = 0 ; across < cols ; across++ )
                    cout << "*" ;

                cout << endl ;
            }
        }
