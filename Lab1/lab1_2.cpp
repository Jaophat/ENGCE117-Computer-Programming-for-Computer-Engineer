#include <stdio.h>
#include <string.h>

void GetSet( int data[ ] , int *num ) {
    printf( "Input Data Set : " ) ;
    scanf( "%d" , num ) ;

    printf( "Number in data: " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d" , &data[i] ) ; 
    }
}

int main() {

    int data[ 100 ] , num ; 
    GetSet( data , &num) ;

    /*
    printf( "Output is : \n" );
    printf( "%d \n" , num ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d " , data[ i ] ) ; 
    }
    printf( "\n" ) ;
    */
   
    return 0 ;
}


