/******************************************************************************

#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    upgrade( &aboy ) ;
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

void upgrade( struct student *child ) {
    
    if (child -> gpa == 4.00 || child->gpa == 0.00 ) {
        return ;  
    }

    if ( child -> sex == 'M' ) {
        child -> gpa *= 1.10 ;   
    } else if (child -> sex == 'F' ) {
        child -> gpa *= 1.20 ;  
    } else {
        return ;  
    }
}

int main() {
    struct student std ;  
    std.sex = 'F' ;       
    std.gpa = 2.58 ;
    
    upgrade( &std ) ;       
    
    printf( "%.2f\n" , std.gpa ) ;  
    return 0 ;
}
