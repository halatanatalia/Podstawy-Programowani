#include <stdio.h>
#include <stdlib.h>

void sortuj(int tablica[ ]) {
int x, i, j;
for( i=0; i < 10; ++i ){
for( j=0; j < 10; ++j) {
    if ( tablica[j] > tablica[i])
        {
            x = tablica[ i ];
            tablica[ i ] = tablica[ j ]; 
            tablica[ j ] = x;
        }
}}
}


int main()
{
int tab[10] = { 9, 2, 7, 4, 5, 6, 3, 8, 1, 10 }; 
int i;
sortuj(tab); 
for( i=0; i < 10; i++) 
printf(" %d \n", tab[ i ] );
   return 0;
}
