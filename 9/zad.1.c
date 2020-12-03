#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp = fopen("tekst.txt", "r");
    int liczba; int suma=0;

    for(int i=0;i<10;++i){
        fscanf(fp, "%d", &liczba);
        suma+=liczba;}

    printf("%i ", suma);
    printf("%i", suma/10);

    fclose(fp);
    return 0;
}
