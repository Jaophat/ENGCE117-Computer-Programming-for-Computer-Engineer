/*
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

FIX CODE
#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function
*/


#include <stdio.h>

void GetMatrix( int value[ ] , int *row , int *col ) ;

int main() {
    int r , c ;

    printf( "Enter the number of rows: " ) ;
    scanf( "%d" , &r ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d" , &c ) ;

    if ( r == 0 && c == 0 ) {
        printf( "Matrix: \n(Empty) \n" ) ;
        return 0 ;
    } else if ( r == 0 || c == 0 ) {
        printf( "Error: Invalid matrix dimensions. \n" ) ;
        return 0 ;
    }

    int data[ r * c] ;
    GetMatrix( data , &r , &c ) ;

    // ตรวจสอบจำนวนสมาชิกในเมทริกซ์
    int count = 0 ;
    for ( int i = 0 ; i < r * c ; i++ ) {
        if ( data[ i ] != 0 ) {
             count++ ;
        }
    }

    if ( count < r * c ) {
        printf( "Error: Incorrect number of elements.\n" ) ;
        return 0 ;
    }

    // แสดงผลเมทริกซ์
    printf( "Matrix (%d x %d):\n" , r , c ) ;
    for ( int i = 0 ; i < r ; i++ ) {
        for ( int j = 0 ; j < c ; j++ ) {
            printf( "%d " , data[ i * c + j ] ) ;
        }
        printf( "\n" ) ;
    }
    
    return 0 ;
}

void GetMatrix( int value[ ] , int *row , int *col ) {
    printf( "Enter the matrix elements: " ) ;
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d" , &value[ i * ( *col ) + j ] ) ;
        }
    }
}



