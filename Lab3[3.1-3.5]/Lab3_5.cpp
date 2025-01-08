/******************************************************************************

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด

FIX CODE
#include <stdio.h>

struct student (*GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function

*******************************************************************************/
#include <stdio.h>

struct student {
    char name[ 50 ] ;
    int age ;
};

struct student ( *GetStudent( int *room ) )[ 10 ] {
    static struct student children[ 20 ][ 10 ] ;
    printf( "Enter the number of rooms: " ) ;
    scanf( "%d" , room ) ;

    for ( int i = 0 ; i < *room ; i++ ) {
        printf ( "Room %d:\n" , i + 1 ) ;
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: " , j + 1 ) ;
            scanf( "%s, Age: %d" , children[ i ][ j ].name , &children[ i ][ j ].age ) ;
        }
        printf( "Room %d : 10 students entered.\n" , i + 1 ) ;
    }
    
    return children ; 
}

int main() {
    struct student ( *children)[ 10 ] ; 
    int group ;
    children = GetStudent( &group ) ; 
    return 0 ;
}
