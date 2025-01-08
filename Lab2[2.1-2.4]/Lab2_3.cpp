/******************************************************************************

เขียนคำสั่งในการสร้างและเรียกฟังก์ชัน explode() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มาแยกเป็นหลายข้อความเก็บไว้ใน str2 โดยใช้ตัวอักขระใน splitter เป็นตัวแบ่งแยก และ count เก็บจำนวนข้อความที่แบ่งได้

ตัวอย่างเช่น

str1 = "I/Love/You" splitter = '/'

จะได้ผลลัพธ์คือ

str2[0] = "I"
str2[1] = "Love"
str2[2] = "You" count = 3
FIX CODE
#include <stdio.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", "/" ) ;
    return 0 ;
}//end function

*******************************************************************************/
#include <stdio.h>

void explode( char str1[ ] , char splitter , char str2[ ][ 10 ] , int *count ) {
    int i = 0 , j = 0 , k = 0 ;
    *count = 0 ;
    
    while ( str1[ i ] != '\0' ) {
        if ( str1 [ i ] == splitter ) {
            if ( k > 0 ) {  
                str2[ j++ ][ k ] = '\0' ; 
                k = 0 ;
            }
        } else {
            str2[ j ][ k++ ] = str1[ i ] ; 
        }
        i++ ;
    }
    
    if ( k > 0 ) { 
        str2[ j++ ][ k ] = '\0' ;
    }
    
    *count = j ; 
}

int main() {
    char str1[ ] = "I/Love/You" ; 
    char out[ 20 ][ 10 ] ; 
    int num ; 
    
    explode( str1 , '/' , out , &num ) ; 
    
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "str2[ %d ] = \"%s\"\n" , i , out[ i ] ) ;
    }
    printf( "count = %d\n" , num ) ;
    
    return 0 ;
}
