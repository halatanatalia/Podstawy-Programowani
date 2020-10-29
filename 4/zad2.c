#include <stdio.h>

int main()
{
char a[3];
do{
printf("Czy oblejesz pierwszy rok?");
scanf("%3s",&a);
}while(a!="tak");
return 0;
}
