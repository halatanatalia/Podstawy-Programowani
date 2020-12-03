#include <stdio.h>
#include <stdlib.h>

int main() 
{
   char ch;

   FILE *ori, *cop;

   ori = fopen("x1.txt", "r");
   cop = fopen("x2.txt", "w");

   while ((ch = fgetc(ori)) != EOF)
      fputc(ch, cop);
 
   fclose(ori);
   fclose(cop);
   return 0;
}
