        #include  "budget3.h"

        float  Budget::CorpBudget = 0 ;     // ����Budget���еľ�̬���ݳ�Ա

           // ���徲̬������ԱmainOffice���ú������ܹ�˾��Ԥ�����ӵ�CorpBudget�����С�
        void  Budget::mainOffice( float  moffice )
        {
            CorpBudget += moffice ;
        }
