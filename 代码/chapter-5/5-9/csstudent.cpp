        #include  <iostream>
        using namespace std;
        #include  "csstudent.h"

        void  CsStudent  ::  showInfo(  )
        {
            cout << "������ " << name << endl ;
            cout << "ѧ�ţ� " << id << endl ;
            cout << "��ѧ��ݣ� " << yearAdmitted << endl ;
            cout << "�����ѧʱ����\n" ;
            cout << "\t��ͨ�γ�ѧʱ�� " << genEdHours << endl ;
            cout << "\t��ѧѧʱ�� " << mathHours << endl ;
            cout << "\t�������ѧѧʱ�� " << csHours << endl ;
            cout << "\t������ѧʱ: " << hoursCompleted << endl ;
        }
