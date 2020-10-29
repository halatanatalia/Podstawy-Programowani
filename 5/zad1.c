#include <stdio.h>

int dzia5(int a[])
{
  int s=0;
  for(int i=0;i<5;++i)
  s+=a[i];
  return s;
}

int main() 
{
  int tab[5]={1,2,3,4,5};
  printf("%d", dzia5(tab));
  return 0;
}
