        #ifndef  BUDGET2_H
        #define  BUDGET2_H
        class  Budget 	 //  Budget��Ķ���
        {
        private:
            static  float  CorpBudget ;   		// ˵����̬�����ݳ�Ա
            float  divBudget ;
        public:
            Budget (  ) {  divBudget = 0 ;  }
            void  addBudget ( float  b ) 
            {
                divBudget += b ; 
                CorpBudget += divBudget ; 
            }
            float  getDivBudget (  ) {  return  divBudget ;  }
            float  getCorpBudget (  ) {  return  CorpBudget ;  }
            static  void  mainOffice( float ) ;   // ��̬�ĺ�����Ա
        } ;
        #endif
