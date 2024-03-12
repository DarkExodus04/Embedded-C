//Count the Number of Set Bits: Write a program to count the number of 1s in the binary representation of an integer.
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.

// my logic written in plain english 
/*
1. I will loop through the number of bits while right shifting by 1 in each iteration.
2. In each iteration, I will check if the number ANDed with 1 is 1. If it is, then I will increment count.
3. otherwise, I will continue.
*/

#define BITS 8

int main(){
    
    int a = 0x88;
    int size = BITS;
    
    int count = 0;
    
    for(int x = a; size != 0; size--){
        if (x & 0x01){
            count++;
        }
        x = x >> 1;
        
    }
    
    printf("%d", count);
    
    
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
    
    
//     return 0;
// }
