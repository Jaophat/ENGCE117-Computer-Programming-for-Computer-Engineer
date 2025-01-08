/******************************************************************************

ขียนฟังก์ชัน explode() ที่สามารถแยกข้อความใน str1 เป็นหลายๆ ส่วนโดยใช้ตัวอักขระหรือหลายตัวอักขระใน splitters[] เป็นตัวแบ่งแยก ซึ่งจะต้องจัดการกรณีที่มีช่องว่าง หรือค่าที่ไม่ใช่ตัวอักขระในข้อความ โดยเก็บผลลัพธ์ใน str2[] และจำนวนข้อความที่แยกได้ใน count ซึ่งผลลัพธ์จะต้องไม่มีช่องว่างหรือค่าที่ไม่ได้ใช้ในแต่ละคำที่แยกออกมา

ข้อกำหนด

str1: ข้อความที่ต้องการแยก
splitters: ตัวอักขระที่ใช้เป็นตัวแบ่ง (สามารถมีหลายตัวได้)
str2: อาร์เรย์ที่ใช้เก็บผลลัพธ์ที่ได้จากการแยก
count: ตัวแปรที่ใช้เก็บจำนวนข้อความที่แยกได้
ตัวอย่าง Input

str1 = "I,Love World/You"
splitters = ", /"
Output

str2[0] = "I"
str2[1] = "Love"
str2[2] = "World"
str2[3] = "You"
count = 4
FIX CODE
void explode(char str1[], char splitters[], char str2[][10], int *count);

*******************************************************************************/
#include <stdio.h>

void explode( char str1[ ] , char splitters[ ] , char str2[ ][ 10 ] , int *count ) {
    int i = 0 , j = 0 ;
    *count = 0 ;

    while ( str1[ i ] ) {
        int isSplitter = 0 ;

        for ( int k = 0 ; splitters[ k ] ; k++ ) {
            if ( str1[ i ] == splitters[ k ]) {
                isSplitter = 1 ;
                break ;
            }
        }

        if ( !isSplitter ) {
            str2[ *count ][ j++ ] = str1[ i ] ;
        } else if ( j > 0 ) { 
            str2[ *count ][ j ] = '\0' ; 
            ( *count )++ ;
            j = 0 ; 
        }
        i++ ;
    }

    if ( j > 0 ) {
        str2[ *count ] [j ] = '\0' ;
        ( *count )++ ;
    }
}

int main() {
    char str1[ ] = "key:value:key2:value2" ;
    char splitters[ ] = ":" ;  
    char str2[ 10 ][ 10 ] ; 
    int count = 0 ;

    explode( str1 , splitters , str2 , &count ) ;

    for ( int i = 0 ; i < count ; i++ ) {
        printf( "str2[ %d ] = \"%s\"\n" , i , str2[ i ] ) ;
    }
    printf( "count = %d\n" , count ) ;

    return 0 ;
}


