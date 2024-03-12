// Reverse Bits
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.

// my logic written in plain english 
/*
1. Iterate through the specified bits size.
2. In each iteration, AND the LSB ( basically extract it) and add it to the new number right shift the new number in the next interation.
*/

#define BITS 8

int main(){
    
    int a = 0x01;
    int size = BITS;
    int r = 0;
    
    for(int x = a; size != 0; size--){
        r <<= 1;
        r |= (x & 1);
        x >>= 1;
    }
    
    printf("%d\n", r);
    
    return 0;
}

