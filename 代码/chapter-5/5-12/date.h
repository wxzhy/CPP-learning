        #ifndef  DATE_H
        #define  DATE_H
        class  Date 
        {
        protected:
            int  day , month , year ;
        public:
            Date( int  d , int  m , int  y){  day = d ; month = m ; year = y ;  }
            int  getDay(  ){  return  day ;  }
            int  getMonth(  ){  return  month ;  }
            int  getYear(  ){  return  year ;  }
        } ;
        #endif
