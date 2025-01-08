/******************************************************************************

เขียนคำสั่งในการสร้างและเรียกใช้ฟังก์ชัน GetStudent() ตามโปรโตไทป์ต่อไปนี้ เพื่อรับจำนวนห้องเรียน และข้อมูลของนักเรียนห้องละ 10 คนจากคีย์บอร์ด

FIX CODE
#include <stdio.h>

void GetStudent( struct student child[][ 10 ], int *room ) ;

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children, &group ) ;
    return 0 ;
}//end function

*******************************************************************************/
#include <stdio.h>

struct student {
    char name[ 50 ] ;
    int age ;
};

void GetStudent( struct student child[ ][ 10 ] , int *room ) {
    printf( "Enter the number of rooms: " ) ;
    scanf( "%d" , room ) ;

    for ( int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d:\n", i + 1 ) ;
        for ( int j = 0 ; j < 10 ; j++ ) {
            printf( "Student %d: " , j + 1 ) ;
            scanf( "%s, Age: %d" , child[ i ][ j ].name , &child[ i ][ j ].age ) ;
        }
        printf( "Room %d: 10 students entered.\n" , i + 1 ) ;
    }
}

int main() {
    struct student children[ 20 ][ 10 ] ;
    int group ;
    GetStudent( children , &group ) ;
    return 0 ;
}