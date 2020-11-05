#include <stdio.h>
#include <ctype.h>
 
 
void zmiana(char s[])
{
    for(int i=0;s[i];++i)
        if(islower(s[i])!=0)
            printf("%c",toupper(s[i]));
        else
            printf("%c",tolower(s[i]));

}
    
int main()
{    
    char s[50];
    scanf("%s", &s);
    
    zmiana(s);
    
    return 0;
}
