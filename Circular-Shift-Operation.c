//Implement a Circular Shift Operation: Write a function that performs a circular shift on a given integer by a specific number of bits.
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.

// my logic written in plain english 
/*
1. Create a function with the integer and the number of bits n as argument
2. Right shift the bits by 1 n number of times and each time, take the LSB, store it in a variable and copy it to the MSB.
*/

#define BITS 8

int main()
{
    int a = 0x01;
    int n = 7;
    int temp = 0;
    
    // for(int i = 0; i < n; i++){
    //     temp = a & 0x01;
    //     a >>= 1;
    //     if (temp){
    //         a |= 0x80;
    //     }
        
        
    // }
    // Method 2:
    temp = (a >> n) | (a << BITS-n);
    printf("%d\n", temp);
    
    // printf("%d\n", a);

    return 0;
}

