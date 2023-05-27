        #include  "auxi1.h"
        #include  "budget3.h"

        void  Aux::addBudget ( float  b , Budget  &div )
        {
            auxBudget += b ;
            div.CorpBudget += auxBudget ;
        }
