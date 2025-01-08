/*จงเขียนคำสั่งในการสร้างและเรียกใช้งานฟังก์ชัน GetSet() 
เพื่อรับจำนวนสมาชิกและค่าของแต่ละสมาชิกในเซต จากคีย์บอร์ด ตามโปรโตไทป์ต่อไปนี้

#include <stdio.h>
int *GetSet( int * ) ;

int main() {
 int *data, num ;
 data = GetSet( &num ) ;
 return 0 ;
}//end function */

#include <stdio.h>

int *GetSet( int data[] , int *num ) ;

int main() {
    int data[ 100 ] ; 
    int num ;

    
    int *result = GetSet(data , &num ) ; // เรียกใช้งานฟังก์ชัน GetSet

    printf( "Number of elements [ Main ]: %d\n" , num ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "%d " , result[ i ]  ) ;
        
    }
    printf( "\n" ) ;

    return 0 ;
}

int *GetSet( int data[ ] , int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d" , num ) ;

    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d" , &data[ i ] ) ;
    }

    /*printf( "Number of elements [ Function ]: %d\n" , *num ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        printf( "%d " , data[ i ]  ) ;
        
    }
    printf( "\n" ) ;*/

    return data ; // คืน pointer ไปยังอาร์เรย์
}

