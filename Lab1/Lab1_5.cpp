#include <stdio.h>

int main( ) {
    int row , col ;

    printf( "Enter the number of rows: " ) ;
    scanf( "%d" , &row) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d" , &col) ;

    if ( row == 0 && col == 0 ) {
        printf( "Matrix:\n(empty)\n" ) ;
    } else if ( row == 0 || col == 0 ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
    } else {
        int total_elements = row * col ; 
        int input_elements = 0 ;         
        int a[ total_elements ] ;          

        printf( "Enter the matrix elements: " ) ;
        
        for ( int i = 0 ; i < total_elements ; i++ ) {
            if (scanf( "%d" , &a[ i ] ) != 1 ) { 
                printf( "Error: Incorrect number of elements.\n" ) ;
            }
            input_elements++ ; 
        }

        if ( input_elements != total_elements ) {
            printf( "Error: Incorrect number of elements.\n" ) ;
        }

        printf( "Matrix (%dx%d):\n" , row , col ) ;
        for ( int i = 0 ; i < row ; i++ ) {
            for ( int j = 0 ; j < col ; j++ ) {
                printf( "%d " , a[i * col + j] ) ;
            }
            printf( "\n" ) ;
        }
    }

    return 0;
}
