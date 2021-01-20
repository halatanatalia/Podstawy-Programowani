#include <stdio.h>
#include <stdlib.h>

int main()
{
char imie[10];
char nazwisko[20];

scanf("%s %s", &imie, &nazwisko);
printf("%s %s", nazwisko, " " , imie);

return 0;
}
