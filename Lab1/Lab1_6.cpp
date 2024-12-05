#include <stdio.h>

int main() {
    int row , col ;

    printf( "Enter number of rows and columns: " ) ;
    scanf( "%d %d" , &row , &col ) ;

    printf( "Enter matrix elements:\n" ) ;

    if ( row == 0 && col == 0 ) {
        printf( "Matrix:\n(empty)\n" ) ;
    } else if ( row == 0 || col == 0 ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
    } else {
        int total_elements = row * col ;  
        int input_elements = 0 ;          
        int a[ total_elements ] ;          

        for ( int i = 0 ; i < total_elements ; i++ ) {
            scanf( "%d" , &a[ i ] ) ;
            input_elements++ ;  
        }

        if ( input_elements != total_elements ) {
            printf( "Error: Incorrect number of elements.\n" ) ;
        }

        for ( int i = 0 ; i < row ; i++ ) {
            for ( int j = 0 ; j < col ; j++ ) {
                printf( "%d " , a[ i * col + j ]) ;
            }
            printf( "\n" ) ;
        }
    }

    return 0 ;
}
