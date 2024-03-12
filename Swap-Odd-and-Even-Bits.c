//**Swap Odd and Even Bits**: Write a function to swap odd and even bits in an integer with as few instructions as possible (e.g., bit 0 and bit 1 are swapped, bit 2 and bit 3 are swapped, and so on).
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.

// my logic written in plain english 
/*
1. I will obtain all the even bits by using the mask of 0xAA on the number, and do the same for odd bits by using the mask of 0x55.
2. The even bits will be right shifted by 1 to occupy the spaces of odd bits while the odd bits will be left shifted by 1 to occupy the even spaces.
3. These two numbers will be ORed so that the number combines these odd and even bits.
*/

#define BITS 8

int main(){
    
    int a = 0x0A;
    int size = BITS;
    
    // Masks depends on the size
    int even_bits = a & 0xAA;
    int odd_bits = a & 0x55;
    
    int num = (even_bits >> 1) | (odd_bits << 1);
    
    printf("%d\n", num);
    
    return 0;
}

