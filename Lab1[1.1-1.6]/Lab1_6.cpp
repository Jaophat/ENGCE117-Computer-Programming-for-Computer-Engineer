/*
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ 
และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

FIX CODE
#include <stdio.h>
int GetMatrix( int *row, int *col ) ;
int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function
*/

/*
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetMatrix() เพื่อรับจำนวนแถว คอลัมน์ 
และค่าของแต่ละสมาชิกในเมทริกซ์จากคีย์บอร์ดตามโปรโตไทป์ต่อไปนี้

FIX CODE
#include <stdio.h>
int GetMatrix( int *row, int *col ) ;
int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function
*/

#include <stdio.h>

void GetMatrix( int value[ ] , int *row , int *col ) ;

int main() {
    int r , c ;

    scanf( "%d %d", &r , &c ) ;

    if ( r == 0 && c == 0 ) {
        printf( "Enter number of rows and columns: 0 0\n" ) ;
        return 0 ;
    } else if ( r == 0 || c == 0 ) {
        printf( "Enter number of rows and columns: %d %d\n", r , c ) ;
        printf( "Error: Invalid matrix input\n" ) ;
        return 0 ;
    }

    int data[ r * c ] ;
    
    GetMatrix( data , &r , &c ) ;

    printf( "Enter number of rows and columns: %d %d\n" , r , c ) ;
    printf( "Enter matrix elements:\n" ) ;
    for ( int i = 0 ; i < r ; i++ ) {
        for ( int j = 0 ; j < c ; j++ ) {
            printf( "%d ", data[ i * c + j ] ) ;
        }
        printf( "\n" ) ;
    }
    
    return 0 ;
}

void GetMatrix( int value[ ] , int *row , int *col ) {
    for ( int i = 0 ; i < *row ; i++ ) {
        for ( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d" , &value[ i * ( *col ) + j ] ) ;
        }
    }
}





