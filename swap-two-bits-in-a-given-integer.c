// C program to swap bits in an integer
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.
// optimised version
// different methods to solve the same question 
// my logic written in plain english 
/*
1. I will first get the ith bit by right shifting it and then ANDIng it, and I will do the same for the jth bit by right shifting it by j bits and ANDING it with 1.
2. This will give me the bits at the ith and the jth position. These two bits can be xored together so that if the bits are the same, the output is 0  or it can be 1 if it is different which can be stored in another variable.
3. This stored value of Xor can be shifted to the ith and jth position such that we get a integer with i and j bits of the same stoed variable.
4. This integer can be xored with the original number to swap the bits in an integer.
*/

int main(){
    
    int a = 0x01;
    
    int i = 0;
    int j = 1;
    
    
    int bit1 = (a >> i) & 1;
    int bit2 = (a >> j) & 1;
    
    int p1 = bit1 ^ bit2;
    
    int x;
    x = (p1 << i) | (p1 << j);
    
    int b = a^x;
    
    printf("%d", b);
    
    
    return 0;
}
