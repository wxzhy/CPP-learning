        #ifndef  AUXIL_H
        #define  AUXIL_H

        class  Budget ;  	//  ��Budget�೬ǰʹ��˵������Ϊ����Ҫʹ��Budget��

        class  Aux  	// Aux��Ķ���
        {
        private:
            float  auxBudget ;
        public:
            Aux( ) {  auxBudget = 0 ;  }
            void  addBudget ( float , Budget  & ) ;
            float  getDivBudget (  ) {  return  auxBudget ;  }
        } ;
        #endif   
