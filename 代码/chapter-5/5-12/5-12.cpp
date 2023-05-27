            // 该程序验证了多继承
        #include  <iostream>
        using namespace std;
        #include  "datetime.h"

        int  main(  )
        {
            char   formatted[20] ;
            DateTime  pastDay( 12 , 4 , 2011 , 5 , 32 , 27) ;

            pastDay.getDateTime( formatted ) ;
            cout << formatted << endl ;

            return 0;
        }
