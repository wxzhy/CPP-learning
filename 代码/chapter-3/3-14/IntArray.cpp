        #include  <iostream>
        using namespace std;
        #include  "IntArray.h"
             //  IntArray ��Ĺ��캯������list �е�ÿ��Ԫ�س�ʼ��
        IntArray::IntArray(  )
        {
            for ( int  i = 0 ; i < 20 ; i++ )
                list[ i ] = 0 ;
        }
            //  isValid ������������� element �Ƿ�Ϊ��Ч���±�
        bool  IntArray::isValid ( int  element)
        {
            bool   status = true ;

            if ( element < 0 || element > 19) 
            {
                cout << "����: "<< element << " ����һ����Ч�������±�.\n" ;
                status = false ;
            }
            return  status ;
        }
           // set ������ָ��������λ�ô洢һ��ֵ������洢�ɹ�����true�����򷵻�false
        bool  IntArray::set ( int  element,  int  value )
        {
            bool  status = false ;

            if ( isValid ( element ) ) 
            {
                list[element] = value ;
                status = true ;
            }
            return  status ;
        }
              // get �������������ָ��λ�õ�ֵ���ɹ�����true��ʧ�ܷ���false
        bool  IntArray::get ( int  element , int  &value )
        {
            bool   status = false ;

            if ( isValid(element ) ) 
            {
                value = list [element] ;
                status = true ;
            }
            return  status ;
        }
