#include <stdio.h>

int main() {
    char str1[ 100 ] ;           
    char str2[ 20 ][ 10 ] ;        
    int i = 0 , j = 0 , count = 0 ;

    printf( "Enter a string: " ) ;
    fgets( str1 , sizeof(str1) , stdin ) ; 

    if ( str1[0] == '\n' ) {
        printf( "count = 0\n" ) ;
        return 0 ;
    }

    for (int k = 0 ; str1[ k ] != '\0' ; k++ ) {
        if ( str1[ k ] == ' ' ) {
            str2[ count ][ j ] = '\0' ;  
            count++ ;            
            j = 0 ;              
        } else {
            str2[ count ][ j ] = str1[ k ] ;
            j++ ;
        }
    }

    str2[ count ][ j ] = '\0' ;  
    count++ ; 

    for ( int i = 0 ; i < count ; i++ ) {
        printf( "str2[ %d ] = \"%s\"\n" , i , str2[ i ] ) ;
    }
    printf( "count = %d\n" , count ) ;

    return 0 ;
}
