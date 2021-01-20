#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,n,m, **mac;

scanf("%d %d",&n,&m); 

mac = (int **) malloc(n*sizeof(int));
for(i=0;i<n;i++) mac[i] = (int *) malloc(m*sizeof(int));

for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        scanf("%d",&mac[i][j]);

for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
        printf("%d ",mac[j][i]);
    printf("
");
    }
return 0;
}
