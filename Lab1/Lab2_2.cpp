#include <stdio.h>

char* reverse( char str1[ ] , char str2[ ] ) {
    int i , j ;

    for ( i = 0 ; str1[ i ] != '\0' ; i++ ) {
        // ลูปนี้จะทำการเพิ่ม i ไปจนกว่าจะเจอ null character
    }

    for ( j = 0 ; i > 0 ; i-- , j++ ) {
        str2[ j ] = str1[ i - 1 ] ; 
    }
    str2[ j ] = '\0' ; 

    return str2 ; 
}

int main() {
    char text[ 50 ] ;    
    char out[ 50 ] ;    

    printf( "Enter a string: " ) ;
    scanf( "%[^\n]" , text ) ; 

    printf( "Original String (str1): %s\n" , text ) ;

    printf( "Reversed String (str2): %s\n" , reverse(text , out ) ) ;

    return 0 ;
}
