// Add Two Numbers Without Using Arithmetic Operators: Implement a function to add two integers without using + or any arithmetic operators, utilizing bit manipulation techniques.
#include<stdio.h>

// follow up
// What would be the number of bits in an integer. Should I assume its 32?
// Should negative integers be considered?

// my logic written in plain english 
/*
1. For Adding uncommon set bits, we can use XOR.
2. For Carry/ uncommon set bits, AND the two numbers and left shift by 1 
*/

int main()
{
    int a = 8;
    int b = 4;
    
    int c = 0;
    unsigned int carry = 0;
    
    while (b != 0){
        carry = a & b;
        
        c = a^b;
        
        b = carry << 1;
    }
    
    
    printf("%d", c);
    
    return 0;
}



