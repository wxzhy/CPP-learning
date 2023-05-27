        #ifndef  BUDGET2_H
        #define  BUDGET2_H
        class  Budget 	 //  Budget类的定义
        {
        private:
            static  float  CorpBudget ;   		// 说明静态的数据成员
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
            static  void  mainOffice( float ) ;   // 静态的函数成员
        } ;
        #endif
