        #ifndef  SALE_H
        #define  SALE_H
        class  Sale      // Sale��Ķ���
        { 
        private:
            float  taxRate ;
            float  total ;
        public:
            Sale( float  rate ) 	// ���ι��캯��
			{
                taxRate = rate ;
            }
            void  calculateSale(float cost){  total = cost +(cost * taxRate ); }
            float  getTotal(  ){  return  total;  }
        } ;
        #endif