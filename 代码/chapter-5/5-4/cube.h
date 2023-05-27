        #ifndef  CUBE_H
        #define  CUBE_H
        #include  "rect.h"

        class  Cube  :  public  Rectangle 	// Cube ÀàµÄÉùÃ÷
        {
        protected:
            float  height ;
            float  volume ;
        public:
            Cube ( float , float , float ) ;
            float  getHeight (  ) {  return  height ;  }
            float  getVol (  ) {  return  volume ;  }
        } ;
        #endif
