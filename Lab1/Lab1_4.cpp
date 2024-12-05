#include <stdio.h>

int GetSet( int data[ ] ) ;

int main() {

    int data[ 100 ] , num ;
    num = GetSet( data ) ;

    return 0 ;

}

int GetSet(int data[]) {

    int n ;

    printf( "Input number of elements: " ) ;
    scanf( "%d" , &n ) ;

    printf( "Input data set: " ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        scanf( "%d" , &data[ i ] ) ;
    }

    printf( "Output data set: " ) ;
    for (int i = 0 ; i < n ; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0 ; 

}