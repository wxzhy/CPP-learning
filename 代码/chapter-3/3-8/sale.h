        #ifndef  SALE_H
        #define  SALE_H
        class  Sale      // Sale类的定义
        { 
        private:
            float  taxRate ;
            float  total ;
        public:
            Sale( float  rate ) 	// 带参构造函数
			{
                taxRate = rate ;
            }
            void  calculateSale(float cost){  total = cost +(cost * taxRate ); }
            float  getTotal(  ){  return  total;  }
        } ;
        #endif