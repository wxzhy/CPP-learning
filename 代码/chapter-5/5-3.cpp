        #include  <iostream>
        using namespace std;

        class  BaseDemo	  // BaseDemo ��
        {
        public:
            BaseDemo (  )   	// ���캯��
            {
                cout << "���û��� BaseDemo�Ĺ��캯�� \n" ; 
            }

            ~BaseDemo (  )  	// ��������
            {
                cout << "���û��� BaseDemo���������� \n" ; 
            }
        } ;


        class  DerivedDemo  :  public  BaseDemo 
        {
        public:
            DerivedDemo (  )   	// ���캯��
            {
                cout << "�������� DerivedDemo �Ĺ��캯�� \n" ; 
            }

            ~DerivedDemo (  )   	// ��������
            {
                cout << "�������� DerivedDemo ���������� \n" ; 
            }
        } ;

        int  main(  )
        {
            cout << "���涨��һ�� DerivedDemo ����� \n" ;

            DerivedDemo   object ;       // ����һ������            
			cout << "\n���潫Ҫ�������� \n" ;

            return 0;
        }
