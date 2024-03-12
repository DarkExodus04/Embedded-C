//Count the Number of Bits to Be Flipped to Convert A to B**: Write a function that takes two integers, A and B, and returns the number of bits needed to be flipped to convert A into B. 
#include<stdio.h>

// follow up
// What would be the number of bits in an integer. Should I assume its 32?

// my logic written in plain english 
/*
1. I would XOR the two numbers which would give me the difference of bits in each of the two.
2. Here counting the number of ones would give me the number of bits needed to be flipped.
*/

#define BITS 8

int main()
{
    int a = 0x02;
    int b = 0x01;
    
    int c = a^b;
    
    int count = 0;
    
    for (int i = 0; i < BITS; i++){
        if (c & 1){
            count++;
        }
        c >>= 1;
    }
    
    printf("%d\n", count);

    return 0;
}


