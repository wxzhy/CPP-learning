        #include  <iostream>
        using namespace std;
        #include  <ctype.h>
        #include  "account.h"
        #include  "chrange.h"

        void  displayMenu (  ) ;
        void  makeDeposit ( Account  & ) ;
        void  withdraw ( Account  & ) ;

        const  char  *Msg = "������ a ~ g ֮�����ĸ:" ;    // ������Ϣ
        int  main(  )
        {
            Account  savings ;                    // ����һ��Account����
            CharRange  input ( 'A',  'G',  Msg ) ;    // ������Ч�Լ������
            char  choice ;                        // �û�����ı���

            cout.precision ( 2 ) ;
            cout.setf ( ios::fixed | ios::showpoint ) ;
            do {
                displayMenu ( ) ;
                choice = input.getChar( ) ;
                switch ( choice ) {
                    case  'A':    cout << "��ǰ������� RMB" ;
                                cout << savings.getBalance ( ) << endl ;
                                break ;
                    case  'B':    cout << "�Ѿ����׹� " ;
                                cout << savings.getTransactions ( ) << " �Ρ�\n" ;
                                break ;
                    case  'C':    cout << "���ʱ�ڵ���Ϣ��: RMB" ;
                                cout << savings.getInterest ( ) << endl ;
                                break ;
                    case  'D':    makeDeposit ( savings) ;
                                break ;
                    case  'E':    withdraw ( savings) ;
                                break ;
                    case  'F':    savings.calculateInterest ( ) ;
                                cout << "��Ϣ�Ѽ������. \n" ;
    	            }
            } while(choice != 'G') ;
            return 0;
        }

             // displayMenu��������Ļ����ʾ�����˵�
        void  displayMenu (  )
        {
            cout << "\n\na) ��ʾ�ʺ����\t\t\t" ;
            cout << "b ) ��ʾ������\n" ;
            cout << "c) ��ʾ��ǰʱ��������Ϣ\t\t" ;
            cout << "d) ���\n" ;
            cout << "e ) ȡ��\t\t\t" ;
            cout << "f) ����Ϣ�������\n" ;
            cout << "g) �˳�����\n\n" ;
            cout << "���������ѡ��:" ;
        }

              // makeDeposit����������һ��Account������������ִ�д�����
        void  makeDeposit ( Account  &acnt )
        {
            float  amount ;

            cout << "����������:  " ;
            cin >> amount ;
            cin.ignore( ) ;				// ���Ժ���Ļ��з�
            acnt.makeDeposit ( amount ) ;
        }

        // withdraw ��������һ��Account������������ִ��ȡ�������
        void  withdraw ( Account  &acnt )
        {
            float  amount ;

            cout << "������ȡ����:  " ;
            cin >> amount ;
            cin.ignore( ) ;
            if ( !acnt.withdraw ( amount ) )
                cout << "����ȡ���������.\n\n" ;
        }
