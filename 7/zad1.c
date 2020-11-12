#include <stdio.h>

void roznica( int m, int n, int pierwszy[m][n], int drugi[m][n], int roz[m][n])
{
    for (int i = 0; i < m; ++i){
      for (int j = 0; j < n; ++j) {
         roz[i][j] = pierwszy[i][j] - drugi[i][j];
         printf("%d\t", roz[i][j]);
      }
      printf("\n");
    }
}

 
int main()
{
   int m, n, i, j, pierwszy[10][10], drugi[10][10], roz[10][10];
   
   printf("Wymiary macierzy:\n");
   scanf("%d%d", &m, &n);
   printf("Elementy pierwszego:\n");
 
   for (i = 0; i < m; ++i)
      for (j = 0; j < n; ++j)
         scanf("%d", &pierwszy[i][j]);
 
   printf("Elementy drugiego:\n");
 
   for (i = 0; i < m; ++i)
      for (j = 0; j < n; ++j)
         scanf("%d", &drugi[i][j]);
   
   printf("Różnica:\n");
    roznica(m, n, pierwszy, drugi, roz);
 
   return 0;
}
