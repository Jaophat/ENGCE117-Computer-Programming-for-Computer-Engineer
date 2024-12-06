/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

/*
#include <stdio.h>

int main() {
    char firstName[50], lastName[50];

    // รับชื่อจากผู้ใช้
    printf("First Name: ");
    scanf("%s", firstName);  // รับชื่อจริง

    printf("Last Name: ");
    scanf("%s", lastName);   // รับนามสกุล

    // แสดงผลตามที่ต้องการ
    printf("%s %s's TC, RMUTL, Chiang Mai, Thailand\n", firstName, lastName);

    return 0;
}
*/

#include <stdio.h>

int main() {

    char Firstname[ 100 ] , Lastname[ 100 ] ;

    printf( "First Name:" ) ;
    scanf( "%s" , Firstname ) ;

    printf( "Last Name:" ) ;
    scanf( "%s" , Lastname ) ;

    printf( "%s %s TC, RMUTL, Chiang Mai, Thailand", Firstname , Lastname);

    return 0;
}

