/******************************************************************************

โจทย์
เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน upgrade() ตามโปรโตไทป์ต่อไปนี้ เพื่อเพิ่ม gpa ขึ้นอีก 10% สำหรับผู้ชาย และ 20% สำหรับผู้หญิง (ให้สังเกตด้วยว่าหลังเรียกใช้ฟังก์ชันแล้ว gpa เพิ่มขึ้นหรือไม่)

FIX CODE
#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

*******************************************************************************/
#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) {
    if ( child.gpa == 4.00 || child.gpa == 0.00 ) {
        return child ; 
    }
    
    if ( child.sex == 'M' ) {
        child.gpa *= 1.10 ;  
    } else if ( child.sex == 'F' ) {
        child.gpa *= 1.20 ;  
    }
    
    if ( child.gpa > 4.00 ) {
        child.gpa = 4.00 ;
    }
    
    return child ;  
}

int main() {
    struct student std ;  
    std.sex = 'F' ;       
    std.gpa = 3.80 ;      
    std = upgrade( std ) ;  
    
    printf( "%.2f\n" , std.gpa ) ;  
    return 0 ;
}
