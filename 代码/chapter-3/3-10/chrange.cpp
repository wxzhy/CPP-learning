        #include  <iostream>
        using namespace std;
        #include  <string.h>
        #include  <ctype.h>
        #include  "chrange.h"

        CharRange::CharRange(char low, char  high, const char *str)  //¹¹Ôìº¯Êý
        {
            lower = toupper ( low ) ;
            upper = toupper ( high ) ;
            errMsg = new  char [ strlen ( str) + 1] ;
            strcpy ( errMsg , str ) ;
        }
        char  CharRange::getChar( ) 
        {
            cin.get(input) ;
            cin.ignore( ) ;
            input = toupper ( input ) ;

            while ( input < lower || input > upper )
            { 
                cout << errMsg ;
                cin.get(input) ;
                cin.ignore( ) ;
                input = toupper ( input ) ;
            }
            return  input ;
        }
