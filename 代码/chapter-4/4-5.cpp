       #include  "iostream"
        using namespace std;

        class  PersonInfo 
        {
        public:
            PersonInfo ( ) {    cout<<"���ù��캯��\n" ;  }
            PersonInfo (PersonInfo  &obj ) {  cout<<"���ÿ������캯��\n" ;  }
            ~PersonInfo ( ) {    cout<<"������������\n" ;    }
        } ;

        PersonInfo  getPerson (  )
        {
            PersonInfo  person ;
            return  person ;    // �����ķ���ֵ�Ƕ���
        }


       int  main(  )
       {
           PersonInfo  student ;
           student = getPerson ( ) ;    // �������ķ���ֵ��ֵ����������

           return 0;
       }
