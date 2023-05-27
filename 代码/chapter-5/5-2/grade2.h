        #ifndef  GRADE2_H
        #define  GRADE2_H
        class  Grade 
        {
        protected:
            char   letter ;
            float  score ;
            void  calculateGrade (  ) ;
        public:
            void  setScore ( float  s) {  score = s ; calculateGrade( );  }
            float  getScore (  ) {  return  score ;  }
            char  getLetter (  ) {  return  letter ;  }
        } ;
        #endif
