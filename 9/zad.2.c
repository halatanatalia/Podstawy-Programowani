#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp = fopen("tekst2.txt", "r");
    char dane[50]; 

    for(int i=0;i<5;i++){
        fscanf(fp, "%s", &dane);
        if(i==1 || i==3)
            printf("%s ", dane); }

    fclose(fp);
    return 0;
}

