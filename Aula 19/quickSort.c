#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void quickSort( int array[], int n );
void dividir( int array[], int ini, int fim );
int particionar( int array[], int ini, int fim );

int main( void ) {

    int array[] = { 3, 7, 1, 9, 14, 2, -4, 12 };

    quickSort( array, 8 );

    for ( int i = 0; i < 8; i++ ) {
        printf( "%d ", array[i] );
    }
    return 0;

}

void quickSort( int array[], int n ) {
    dividir( array, 0, n-1 );
}

void dividir( int array[], int ini, int fim ) {

    if ( ini < fim ) {
        int meio = particionar( array, ini, fim );
        dividir( array, ini, meio - 1 );
        dividir( array, meio + 1, fim );
    }

}

int particionar( int array[], int ini, int fim ) {

    int i = ini;
    int j = fim + 1;

    while ( true ) {

        while ( array[++i] < array[ini] ) {
            if ( i == fim ) {
                break;
            }
        }

        while ( array[--j] > array[ini] ) {
            if ( j == ini ) {
                break;
            }
        }

        if ( i >= j ) {
            break;
        }

        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;

    }

    int temp = array[ini];
    array[ini] = array[j];
    array[j] = temp;

    return j;

}