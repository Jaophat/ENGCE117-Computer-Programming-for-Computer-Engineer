/******************************************************************************

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน reverse() ตามโปรโตไทป์ต่อไปนี้ เพื่อนำ
ข้อความจาก str1 มากลับอักขระหน้าไปหลัง และเก็บไว้ใน str2
ตัวอย่างเช่น str1 = "I love you"
จะได้ str2 = "uoy evol I"

#inclue <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function

*******************************************************************************/
#include <stdio.h>

void reverse( char str1[ ] , char str2[ ] ) ;

int main() {
    char text[ 50 ] ;                 
    char reversetext[ 50 ] ;                  

    printf( "Enter a string: " ) ;    
    scanf( "%49[^\n]" , text ) ;      

    reverse( text , reversetext ) ;            
    printf( "Reversed: %s\n" , reversetext) ; 
    return 0 ;
}

void reverse( char str1[ ] , char str2[ ]) {
    int len = 0 ;                  
    while ( str1[len] != '\0' ) {   
        len++ ;
    }
    
    for ( int i = 0 ; i < len ; i++ ) {  
        str2[ i ] = str1[ len - i - 1 ] ; 
    }
    str2[ len ] = '\0' ;             
}
