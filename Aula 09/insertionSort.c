#include <stdio.h>
#include <stdlib.h>

int main( void ) {

    int array[5] = { 7, 3, 9, 1, 4 };

    // insertion sort
    int temp;

    for ( int i = 1; i < 5; i++ ) {
        for ( int j = i; j > 0; j-- ) {
            if ( array[j] < array[j-1] ) {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            } else {
                break;
            }
        }
    }

    for ( int i = 0; i < 5; i++ ) {
        printf( "%d ", array[i] );
    }

    return 0;

}