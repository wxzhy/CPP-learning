        #ifndef  SEARCHARRAY_H
        #define  SEARCHARRAY_H
        #include  "freewillArray.h"

        template  < class  T >
        class  SearchArray : public FreewillArray  < T >   // 类模板继承
        {
        public:
            SearchArray( int  s ) : FreewillArray  < T >( s ){     }  	// 构造函数
            SearchArray( SearchArray  & ) ;        // 拷贝构造函数
            SearchArray( FreewillArray  < T >  &obj ) : FreewillArray  < T >( obj )
            {        }
            int  findItem( T ) ;
        } ;

        template  < class  T >
        SearchArray<T>::SearchArray(SearchArray &obj):vector<T >( obj.size( )) 
        {
            for( int  count = 0 ;  count < this->size( ) ;  count++ ) 
                this->operator[ ]( count ) = obj[count] ;
        }

        template  < class  T >
        int  SearchArray<T>::findItem( T item ) 
        {
            for( int  count = 0 ;  count <= this->size( ) ;  count++ )
            {
                if( this->operator[ ]( count ) == item ) 
                    return  count ;
            }
            return  -1 ;
        }
        #endif
