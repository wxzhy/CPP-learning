        #ifndef  AUXIL_H
        #define  AUXIL_H

        class  Budget ;  	//  对Budget类超前使用说明，因为该类要使用Budget类

        class  Aux  	// Aux类的定义
        {
        private:
            float  auxBudget ;
        public:
            Aux( ) {  auxBudget = 0 ;  }
            void  addBudget ( float , Budget  & ) ;
            float  getDivBudget (  ) {  return  auxBudget ;  }
        } ;
        #endif   
