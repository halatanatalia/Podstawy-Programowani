#include <stdio.h>
#include <ctype.h>
 
 
void zmiana(char s[])
{
    int n=0;
    for(int i=0;s[i];++i)
        if(islower(s[i])!=0)
            n++;
    printf("%i",n);

}
    
int main()
{    
    char s[50];
        scanf("%s", &s);
        zmiana(s);
        return 0;
}
