        #include  "budget3.h"

        float  Budget::CorpBudget = 0 ;     // 定义Budget类中的静态数据成员

           // 定义静态函数成员mainOffice，该函数将总公司的预算增加到CorpBudget变量中。
        void  Budget::mainOffice( float  moffice )
        {
            CorpBudget += moffice ;
        }
