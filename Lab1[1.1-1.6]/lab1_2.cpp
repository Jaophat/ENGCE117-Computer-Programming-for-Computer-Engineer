/*จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() 
เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้

#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
 int *data, num ;
 GetSet( &data, &num ) ;
 return 0 ;
}//end function

*/

#include <stdio.h>
#include <string.h>

void GetSet( int data[ ] , int *num ) {
    
    printf( "Enter Data : " ) ;
    scanf( "%d" , num ) ; // รับจำนวนของข้อมูล

    
    printf( "Enter Number : " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d" , &data[ i ] ) ;
    } // รับค่าข้อมูลจากผู้ใช้

    /*
    printf( "Data [ Main ] : %d\n" , *num ) ;
    printf( "Number : " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }
    printf("\n" ) ; แสดงผลในฟังก์ชัน GetSet*/ 
}

int main() {
    int data[ 100 ] , num ;
Number :
    GetSet( data , &num) ; // เรียกฟังก์ชัน GetSet

    printf( "Data [ Main ] : %d\n" , num ) ;
    printf( "Number : " ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d " , data[ i ] ) ;
    }
    printf( "\n" ) ; // แสดงผลในฟังก์ชัน main

    return 0 ;
}







