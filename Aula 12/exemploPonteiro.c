#include <stdio.h>
#include <stdlib.h>

void trocar( int *n1, int *n2 );

int main( void ) {

    int a = 10;
    int b = 20;

    printf( " antes: %d %d\n", a, b );
    trocar( &a, &b );
    printf( "depois: %d %d\n", a, b );

    return 0;

}

void trocar( int *n1, int *n2 ) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}