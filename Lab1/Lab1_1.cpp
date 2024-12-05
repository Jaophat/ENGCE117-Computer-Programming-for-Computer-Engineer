/*จงเขียนโปรแกรมแสดงคำว่า Hello World จำนวน n บรรทัด (โดย n คือตัวเลขที่รับมาจากผู้ใช้)*/

#include <stdio.h>

int main() {

    int n  ;

    printf( "Enter N :: " ) ;
    scanf( "%d" , &n ) ;

    for( int i = 1 ; i <= n ; i++ ) {
        printf( "[%d] Hello world \n" , i ) ;
    } 

}