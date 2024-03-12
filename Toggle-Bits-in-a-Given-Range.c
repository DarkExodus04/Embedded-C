// **Toggle Bits in a Given Range**: Write a function that takes three parameters: a number, a starting bit position, and an ending bit position. The function should toggle (invert) all the bits in the specified range and return the resulting number.
#include<stdio.h>

// follow up
// What would be the number of bits in an integer. Should I assume its 32?

// my logic written in plain english 
/*
Solution 1:

1. I would create a mask by left shifting 1 to the start bit position and then subtracting this number by the end bit position
2. This mask would then be Xor with the the given number to toggle the bits.
*/

int main()
{
    int start = 5;
    int end = 2;
    
    int mask = (1 << start) - end; //important trick
    int num = 50;
    
    num ^= mask;
    
    printf("%d", num);
    
    return 0;
}



