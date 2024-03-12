//Check if a Number is a Power of Two
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.

// my logic written in plain english 
/*
1. I will loop through each bit in the number and count the number of bits.
2. If the number of bits is 1 then it is a power of two.
*/

#define BITS 8

int main(){
    
    int a = 0x10;
    int size = BITS;
    
    int count = 0;
    
    for(int x = a; size != 0; size--){
        if (x & 0x01){
            count++;
        }
        x = x >> 1;
    }
    
    if (count ==1){
        printf("Power of Two\n");
    }
    else{
        printf("Not a power of Two");
    }
    return 0;
}

// optimised version

//Important point: Subtracting 1 from a number flips all the bits after the rightmost set bit.

// int main(){
    
//     int a = 0x88;
    
//     int x = a;
//     int count = 0;
    
//     while(x > 0){
//         x = x&(x-1);
//         count++;
//     }
    
//     printf("%d", count);
    //   if (count ==1){
    //         printf("Power of Two\n");
    //         printf("%d", num);
    //     }
    //     else{
    //         printf("Not a power of Two");
    //     }
//     return 0;
// }
