        #ifndef  BUDGET3_H
        #define  BUDGET3_H
        #include  "auxi1.h"		// Aux类定义在此文件中

        class  Budget    // Budget类的定义
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
            friend  void  Aux::addBudget ( float , Budget  & );   //声明友元函数
        } ;
        #endif
