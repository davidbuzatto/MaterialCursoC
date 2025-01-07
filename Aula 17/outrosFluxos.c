#include <stdio.h>
#include <stdlib.h>

int main( void ) {
    
    int n1;
    int n2;
    int soma;

    scanf( "%d", &n1 );
    scanf( "%d", &n2 );
    soma = n1 + n2;

    printf( "%d + %d = %d", n1, n2, soma );
    
    return 0;

}