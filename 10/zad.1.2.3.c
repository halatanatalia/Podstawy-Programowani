#include <stdio.h>
#include <stdlib.h>


long long enableBit(long long number, unsigned bit2Enable){
    return number |= 1UL << bit2Enable;

}

long long disableBit(long long number, unsigned bit2Enable){
    return number &= ~(1UL << bit2Enable);
}

unsigned char getBajt(long long number, unsigned bajt){
    return (number >> bajt) & 1U;

}

void main(){
    printf("out %lld: inp %d\n",enableBit(4,0),4);
    printf("out %lld: inp %d\n",disableBit(5,0),5);
    printf("out %hhu: inp %d\n",getBajt(4,0),4);
}
