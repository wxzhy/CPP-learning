        #ifndef  INCHDIST_H
        #define  INCHDIST_H
        #include  "FeetDist3.h" 	// FeetDist��Ķ����ڡ���5-8����

        class  InchDist  :  public  FeetDist 	  // ����InchDist��
        {
        protected:
            float  inches ;
        public:
            void  setDist( float ) ;
            float  getDist(  ){  return  inches ;  }
            float  getFeet(  ){  return  feet ;  }
        } ;
        #endif
