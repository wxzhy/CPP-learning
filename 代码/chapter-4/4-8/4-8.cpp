        		// �ó�����ʾ�˸������غ�����Ӧ��
        #include  <iostream>
        using namespace std;
        #include  "feetinches.h"

        int  main(  )
        {
            FeetInches  first , second;
            float  f ;
            int  i ;

                // ���������������ȡ��
            cout << "���� first ����\n" ;
            cin >> first ;
            cout << "���� second ����\n" ;
            cin >> second ;
            cout << "�����ֵ��:  " ;
            cout << first << " �� "<< second<<endl ;

                // �����ǰ��++������++��
            cout << "\n����ǰ�� ++ \n" ;
            first = ++second ;       //  ǰ�� ++
            cout << "First ����: "<< first.getFeet (  ) << " Ӣ�� , "
                 << first.getInches( ) <<" Ӣ�� " ;
            cout << "\nSecond����: "<< second.getFeet (  ) << " Ӣ�� , " 
                 << second.getInches( ) <<" Ӣ��\n" ;
            cout << "\n������� ++ \n" ;
            first = second++ ;      //  ���� ++
            cout << "First ����: "<< first.getFeet (  ) << " Ӣ�� , "
                 << first.getInches( ) <<" Ӣ�� " ;
            cout << "\nSecond����: "<< second.getFeet (  ) << " Ӣ�� , " 
                 << second.getInches( ) <<" Ӣ��\n\n" ;
            
			// �����ϵ�����
            cout << "�����ϵ���� \n" ;
            if ( first == second )	    // �����ϵ����
                cout << "������������� \n" ;
            else if ( first > second )
                cout << "first�������second����\n" ;
            else 
                cout << "first����С��second����\n" ;

                // ��������ת��
            cout << "\n��������ת�� \n" ;
            f = second ;      // ��������ת������operator  float  ( )
            i = second ;      // ��������ת������operator  int ( )
            cout << "�����ֵ�ǣ�" << second ;
            cout <<" ������ " << f << " Ӣ�ߣ�" ;
            cout << "������� " << i << " Ӣ�� \n" ;

            return 0;
        }
