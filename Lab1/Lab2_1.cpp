#include <stdio.h>

void reverse( char str1[ ] , char str2[ ] ) {
    int i = 0 ;
    int j = 0 ;

    while ( str1[ i ] != '\0' ) {
        i++ ;
    }
    
    for ( j = 0 ; i > 0 ; i-- , j++ ) {
        str2[ j ] = str1[ i - 1 ] ; 
    }
    str2[ j ] = '\0' ; 
}

int main( ) {
    char text[ 50 ] ;
    char out[ 50 ] ;

    printf( "Enter a string: " ) ;
    scanf( "%[^\n]" , text ) ; 

    reverse( text , out ) ;
    printf( "Reversed String: %s\n" , out ) ; 

    return 0 ;
}
