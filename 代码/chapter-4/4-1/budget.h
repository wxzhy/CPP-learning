        #ifndef  BUDGET_H
        #define  BUDGET_H
        class  Budget   	// Budget��Ķ���
        {
        private:
            static  float  CorpBudget ;
            float  divBudget ;
        public:
            Budget (  ) {  divBudget = 0 ;  }   // ���캯��
            void  addBudget ( float  b )  
            {
                divBudget += b ; 	
                CorpBudget += divBudget ;    // ���þ�̬�����ݳ�Ա
            }
            float  getDivBudget (  ){  return  divBudget ;  }
            float  getCorpBudget (  ){  return  CorpBudget ;  } //���þ�̬���ݳ�Ա
        } ;
        #endif
