        #include  <iostream>
        using namespace std;

            // �������������������ԭ��
        void  getChoice ( char  & ) ;
        float  calcWeeklyPay ( int , float ) ;
        float  calcWeeklyPay ( float ) ;

        int  main ( )
        {   
            char  selection ;
            int  worked ;
            float  rate , yearly ;

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            cout << "��ѡ����㹤�ʵķ�ʽ\n" ;
            cout << "(H) �����ʱ���� \n" ;
            cout << "(S) ����Ա���Ĺ���\n" ;

            getChoice( selection) ;
            switch( selection) {
                case    'H' :
                case    'h' : 	
                    cout << "�Ѿ���������Сʱ? " ;
                    cin >> worked ;
                    cout << "ÿСʱ�ı����Ƕ���? " ;
                    cin >> rate ;
                    cout << "����ë����Ϊ��" ;
                    cout << calcWeeklyPay(worked, rate ) ;
                    break ;
                case    'S' :
                case    's' : 	
                    cout << "��нΪ����? " ;
                    cin >> yearly ;
                    cout << "����ë����Ϊ��" ;
                    cout << calcWeeklyPay(yearly) ;
                    break ;
            }
            return 0;
        }

        //*******************************************************************
        // getChoice ����
        // �����Ĳ�����һ�� char ���͵����ã�Ҫ���û������ַ� H��h �� S��s
        //*******************************************************************
        void  getChoice ( char &letter)
        {
            do {
               cout << "������ H �� S�� " ;
               cin >> letter ;
            } while(letter != 'H'  && letter  != 'h'  && letter  != 'S'  && letter != 's') ;
        }

        //*******************************************************************
        // �������غ���calcWeeklyPay
        // �����ʱԱ������н�����ù���ʱ�� * ��λСʱ���ʣ�������н
        //*******************************************************************
        float  calcWeeklyPay ( int  hours, float  payRate )
        {
            return  hours * payRate ;
        }

        //*******************************************************************
        // �������غ���calcWeeklyPay�������Ǽ���Ա������н
        // �����Ǹ�Ա������н������ֵ����н����52��ֵ
        //*******************************************************************
        float  calcWeeklyPay ( float  annSalary )
        {
             return  annSalary / 52.0f ;
        }