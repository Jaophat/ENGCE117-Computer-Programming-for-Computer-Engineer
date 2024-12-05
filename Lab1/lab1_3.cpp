#include <stdio.h>

int *GetSet( int *Dset ) ;

int main() {
    int *data , num ;
    data = GetSet( &num ) ;
    return 0 ;
} // end function

int *GetSet( int *Dset ) {
    int set[ 100 ] ;

    printf( "Input Data Set: " ) ;
    scanf( "%d" , Dset) ;

    printf( "Number in data: " ) ;
    for ( int i = 0 ; i < *Dset ; i++ ) {
        scanf( "%d" , &set[ i ] ) ;
    }

    printf( "Output is: " ) ;
    printf( "%d \n" , *Dset) ;
    for ( int i = 0 ; i < *Dset ; i++ ) {
        printf( "%d " , set[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
};
