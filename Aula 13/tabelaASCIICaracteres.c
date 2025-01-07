#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    // códigos tabelas ASCII
    char zero = '0';
    printf( "'%c' -> %d (%lld)", zero, (int) zero, sizeof( char ) );

    return 0;

}