        #include  <iostream>
        using namespace std;
        #include  "mystring.h"

        int  main(  )
        {
            MyString  obj1("I ") , obj2("love ") ;
            MyString  obj3("China") ;
            MyString  obj4 = obj1 ;			// ���ÿ������캯��
            char str[ ] = "!" ;

            cout << "���� 1: "<< obj1 << endl ;
            cout << "���� 2: "<< obj2 << endl ;
            cout << "���� 3: "<< obj3 << endl ;
            cout << "���� 4: "<< obj4 << endl ;
            cout << "�ַ�����: "<< str << endl ;

                // ��ʾ���� += ����
            obj1 += obj2 ;
            obj1 += obj3 ;
            obj1 += str ;
            cout << "���� 1: "<< obj1 << "\n\n" ;

                // ��ʾ��ϵ����
            if ( obj1 == str )
                  cout << obj1 << " �����ַ����� "<< str << endl ;
            else   cout << obj1 << " �������ַ����� "<< str << endl ;
            if ( obj3  ==  "China" )
                  cout << obj3 << " ���� China\n" ;
            else   
                  cout << obj3 << " ������ China\n" ;
            if ( obj1 > obj2 )
                  cout << obj1 << " ���� "<< obj2 << endl ;
            else   
                  cout << obj1 << " ������ "<< obj2 << endl ;   
            if ( obj1 >= obj2 )
                  cout << obj1 << " ���ڻ���� "<< obj2 << endl ;
            else   
                  cout << obj1 << " С�� "<< obj2 << endl ;
            return 0;
        }
