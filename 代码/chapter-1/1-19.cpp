        #include  <iostream>
        using namespace std;

            // ������ doubleNum �� getNum ������ԭ�ͣ����ǵĲ�������һ�����á�
        void  doubleNum ( int  & ) ;
        void  getNum ( int  & ) ;

        int  main ( )
        {   
            int  value ;

            getNum ( value ) ;			// �ں�������ʱû�з���&
            doubleNum ( value ) ;
            cout << "���� 2 �Ժ�Ľ���ǣ�" << value << endl ; 

            return 0;
        }

        //*******************************************************************
        // getNum����������������һ�����ã��Ӽ����϶�һ��ֵ���洢��userNum
        //*******************************************************************
        void  getNum ( int  &userNum )
        {
            cout << "������һ����: " ;
            cin >> userNum ;
        }

        //*******************************************************************
        // doubleNum ����������������һ�����ã��ں����ڽ��ò�������2��
        //*******************************************************************
        void  doubleNum ( int  &refVar)
        {
            refVar *= 2 ;
        }
