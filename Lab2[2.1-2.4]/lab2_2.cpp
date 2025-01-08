/******************************************************************************

ขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"

FIX CODE
#inclue <stdio.h>
char* reverse( char str1[]) ;
int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
}//end function 

*******************************************************************************/

#include <stdio.h> 

char* reverse( char str1[ ] ) ; 

int main( ) {
    char text[ 50 ] = "I Love You" ; 
    char *out ;                   
    out = reverse( text ) ;         
    printf( "Reversed: %s\n" , out ) ; 
    return 0 ;                   
}

char* reverse( char str1[ ] ) {
    static char str2[ 50 ] ;         
    int len = 0 ;                  
    while ( str1[ len ] != '\0' ) {    
        len++ ;
    }

    for ( int i = 0 ; i < len ; i++ ) { 
        str2 [i ] = str1[ len - i - 1 ] ;
    }
    str2[ len ] = '\0' ;             
    return str2 ;                  
}
