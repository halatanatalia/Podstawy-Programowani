#include <stdio.h>

int main() 
{
int tab[6];
int tabj[6];
for(int i=0;i<6;i++)
scanf("%i",&tab[i]);

for(int i=0;i<6;i++)
tabj[i]=tab[5-i];

for(int i=0;i<6;i++)
printf("%i",tabj[i]);

return 0;
}
