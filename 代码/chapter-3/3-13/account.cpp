        #include "account.h"
        bool  Account::withdraw ( float  amount )
        {
            bool  status = false ;  	// 如果取款数量大于余额，取款将失败

            if ( balance > amount )    // 取款成功
            {
                balance -= amount ;
                transactions++ ;
                status = true ;
            }
            return  status ;
        }
