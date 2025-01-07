#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main( void ) {

    int array[5] = { 7, 3, 9, 1, 4 };

    // bubble sort
    int temp;
    bool trocou;

    for ( int i = 0; i < 5; i++ ) {
        trocou = false;
        for ( int j = 4; j > i; j-- ) {
            if ( array[j] < array[j-1] ) {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
                trocou = true;
            }
        }
        if ( !trocou ) {
            break;
        }
    }

    for ( int i = 0; i < 5; i++ ) {
        printf( "%d ", array[i] );
    }

    return 0;

}