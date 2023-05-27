        #ifndef  BUDGET_H
        #define  BUDGET_H
        class  Budget   	// Budget类的定义
        {
        private:
            static  float  CorpBudget ;
            float  divBudget ;
        public:
            Budget (  ) {  divBudget = 0 ;  }   // 构造函数
            void  addBudget ( float  b )  
            {
                divBudget += b ; 	
                CorpBudget += divBudget ;    // 引用静态的数据成员
            }
            float  getDivBudget (  ){  return  divBudget ;  }
            float  getCorpBudget (  ){  return  CorpBudget ;  } //引用静态数据成员
        } ;
        #endif
