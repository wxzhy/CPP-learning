        #ifndef  SALE2_H
        #define  SALE2_H
        class  Sale
        { 
        private:
            float  taxRate ;
            float  total ;
        public:
            Sale( float  rate = 0.05f )      // ����ȱʡ�β�ֵ�Ĺ��캯��
            { 
                taxRate = rate ;  
            }
            void  calculateSale(float cost){ total = cost +(cost * taxRate );  }
            float  getTotal(  ) {  return total ;  }
        } ;
        #endif