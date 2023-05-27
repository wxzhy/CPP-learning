        class  Account 
        { 
        private:
            float  balance ;
            float  intRate ;
            float  interest ;
            int   transactions ;
        public:
            Account ( float  irate = 0.02, float  bal = 0 ) 
            {
                balance = bal ; 
                intRate = irate ;
                interest = 0 ;
                transactions = 0 ; 
            }
            void  makeDeposit ( float  amount )
            {
                balance += amount ; 
                transactions++ ; 
            }
            bool  withdraw ( float  amount );   // 该函数定义在account.cpp文件中
            void  calcInterest (  )
            {
                interest = balance * intRate ;
                balance += interest ; 
            }
            float  getBalance (  ) {  return  balance ;  }
            float  getInterest (  ) {  return  interest ;  }
            int  getTransactions (  ) {  return  transactions ;  }
        } ;
