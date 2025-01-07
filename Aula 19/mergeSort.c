#include <stdio.h>
#include <stdlib.h>

void mergeSort( int array[], int n );
void dividir( int array[], int ini, int fim, int temp[] );
void intercalar( int array[], int ini, int meio, int fim, int temp[] );

int main( void ) {

    int array[] = { 3, 7, 1, 9, 14, 2, -4, 12 };

    mergeSort( array, 8 );

    for ( int i = 0; i < 8; i++ ) {
        printf( "%d ", array[i] );
    }
    return 0;

}

void mergeSort( int array[], int n ) {
    /* nosso exemplo usa um array de 8 posições
     * então aqui há um array auxiliar de 8 posições
     * declarado. numa situação real, esse array
     * deveria ser alocado de forma dinâmica com base no
     * tamanho do array original, o que ainda não sabemos
     * fazer, mas aprenderemos nas próximas aulas.
     * voltaremos aqui para ajustar esse algoritmo inclusive.*/
    int temp[8];
    dividir( array, 0, n-1, temp );
}

void dividir( int array[], int ini, int fim, int temp[] ) {

    if ( ini < fim ) {
        int meio = ( ini + fim ) / 2;
        dividir( array, ini, meio, temp );
        dividir( array, meio + 1, fim, temp );
        intercalar( array, ini, meio, fim, temp );
    }

}

void intercalar( int array[], int ini, int meio, int fim, int temp[] ) {

    int i = ini;
    int j = meio+1;

    for ( int k = ini; k <= fim; k++ ) {
        temp[k] = array[k];
    }

    for ( int k = ini; k <= fim; k++ ) {

        if ( i > meio ) {
            array[k] = temp[j++];
        } else if ( j > fim ) {
            array[k] = temp[i++];
        } else if ( temp[j] < temp[i] ) {
            array[k] = temp[j++];
        } else {
            array[k] = temp[i++];
        }

    }

}