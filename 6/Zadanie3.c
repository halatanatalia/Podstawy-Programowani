#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
 
void zmiana(char s[])
{
    int n;
    scanf("%i",&n);
    if(n<=strlen(s))
        for(int i=0;i<n;++i)
             printf("%c",s[i]);

}
    
int main()
{    
        char s[1000];
        scanf("%s", &s);
        zmiana(s);
        return 0;
}
