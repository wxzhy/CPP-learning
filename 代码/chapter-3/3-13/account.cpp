        #include "account.h"
        bool  Account::withdraw ( float  amount )
        {
            bool  status = false ;  	// ���ȡ������������ȡ�ʧ��

            if ( balance > amount )    // ȡ��ɹ�
            {
                balance -= amount ;
                transactions++ ;
                status = true ;
            }
            return  status ;
        }
