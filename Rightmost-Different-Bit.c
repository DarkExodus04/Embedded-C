// **Rightmost Different Bit**: Given two numbers, write a program to find the position of the rightmost different bit in their binary representations.
#include<stdio.h>

// follow up
// What would be the number of bits in an integer. Should I assume its 32?

// my logic written in plain english 
/*
1. I would xor the two numbers to get the 1 at the different bit.
2. Then I would iterate over the bits and find the 1st 1 by ANDing the LSB by 1.
*/

int main()
{
    int a = 8;
    int b = 4;
    
    int c = a^b;
    int idx = -1;
    
    for(int i = 0; i< 8; i++){
        if (c & 0x01){
            idx = i;
            break;
        }
        c >>= 1;
    }
    
    
    printf("%d", idx);
    
    return 0;
}



