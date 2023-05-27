        #ifndef  GRADE_H
        #define  GRADE_H
        class  Grade 	   // Grade ÀàµÄÉùÃ÷
        {		
        private:
            char 	 letter ;
            float  score ;
            void   calculateGrade (  ) ; 
        public:
            void   setScore ( float  s) {  score = s ;  calculateGrade (  ) ;  }
            float  getScore (  )  {  return   score ;  }
            char 	 getLetter (  )  {  return   letter ;  }
        } ;
        #endif
