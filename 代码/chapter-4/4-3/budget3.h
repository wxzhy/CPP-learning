        #ifndef  BUDGET3_H
        #define  BUDGET3_H
        #include  "auxi1.h"		// Aux�ඨ���ڴ��ļ���

        class  Budget    // Budget��Ķ���
        {
        private:
            static  float  CorpBudget ;
            float  divBudget ;
        public:
            Budget (  ) {  divBudget = 0 ;  }
            void  addBudget ( float  B ) 
            {
                divBudget += B ; 
                CorpBudget += divBudget ; 
            }

            float  getDivBudget (  ) {  return  divBudget ;  }
            float  getCorpBudget (  ) {  return  CorpBudget ;  }
            static  void  mainOffice( float ) ;
            friend  void  Aux::addBudget ( float , Budget  & );   //������Ԫ����
        } ;
        #endif
