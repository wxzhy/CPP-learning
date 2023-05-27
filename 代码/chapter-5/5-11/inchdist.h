        #ifndef  INCHDIST_H
        #define  INCHDIST_H
        #include  "FeetDist3.h" 	// FeetDist类的定义在【例5-8】中

        class  InchDist  :  public  FeetDist 	  // 声明InchDist类
        {
        protected:
            float  inches ;
        public:
            void  setDist( float ) ;
            float  getDist(  ){  return  inches ;  }
            float  getFeet(  ){  return  feet ;  }
        } ;
        #endif
