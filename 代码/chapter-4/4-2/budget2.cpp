        #include  "budget2.h"

        float  Budget::CorpBudget = 0 ; 		//  ����Budget���еľ�̬��Ա

           // ���徲̬�ĺ�����ԱmainOffice���ú������ܹ�˾��Ԥ�����ӵ�CorpBudget������
        void  Budget::mainOffice( float  moffice )
        {
            CorpBudget += moffice ;
        }
