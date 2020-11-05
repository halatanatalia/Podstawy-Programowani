#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

struct S1
    {
        bool b; //
        double d; //
        char c; //
        int i; //
    };
    struct S2
    {
        double d; //
        int i; //
        bool b; //
        char c; //
    };

int main()
{
    unsigned int size1 = sizeof(struct S1);
    unsigned int size2 = sizeof(struct S2);
    
    printf("%i\n",size1);
    printf("%i\n",size2);
    
    return 0;
}
