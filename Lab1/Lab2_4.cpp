#include <stdio.h>

void explode( char str1[ ] , char splitters[ ] , char str2[ ][ 10 ] , int *count ) {
    int i = 0 , j = 0 ;
    int k = 0 ;
    int is_splitter ;

    *count = 0 ;

    while (str1[ k ] != '\0' ) {
        is_splitter = 0 ;
        for ( int s = 0 ; splitters[ s ] != '\0' ; s++ ) {
            if (str1[ k ] == splitters[ s ] ) {
                is_splitter = 1 ;
                break ;
            }
        }

        if ( !is_splitter ) {
            if ( ( str1[ k ] >= 'A' && str1[k] <= 'Z' ) || ( str1[ k ] >= 'a' && str1[ k ] <= 'z' ) || ( str1[ k ] >= '0' && str1[ k ] <= '9' ) ) {
                str2[ i ][ j ] = str1[ k ] ; 
                j++ ;
            }
        } else if ( j > 0 ) {
            str2[ i ][ j ] = '\0' ;  
            i++ ;
            ( *count )++ ;
            j = 0 ;  
        }

        k++ ;
    }

    if ( j > 0 ) {
        str2[ i ][ j ] = '\0' ;
        ( *count )++ ;
    }
}

int main( ) {
    char str1[ ] = "Hello  World  From Me" ;
    char splitters[ ] = " " ; 
    char str2[ 10 ][ 10 ] ;  
    int count = 0 ;  

    explode(str1 , splitters , str2 , &count ) ;

    for ( int i = 0 ; i < count ; i++ ) {
        printf( "str2[ %d ] = \"%s\"\n" , i , str2[ i ] ) ;
    }
    printf( "count = %d\n" , count ) ;

    return 0 ; 
}
