        #include  <iostream>
        using namespace std;
        #include  "csstudent.h"

        void  CsStudent  ::  showInfo(  )
        {
            cout << "姓名： " << name << endl ;
            cout << "学号： " << id << endl ;
            cout << "入学年份： " << yearAdmitted << endl ;
            cout << "修完的学时数：\n" ;
            cout << "\t普通课程学时： " << genEdHours << endl ;
            cout << "\t数学学时： " << mathHours << endl ;
            cout << "\t计算机科学学时： " << csHours << endl ;
            cout << "\t已修总学时: " << hoursCompleted << endl ;
        }
