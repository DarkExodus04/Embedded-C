// Divide Integers without Using Multiplication, Division, and Mod Operator**: Implement division of two integers without using the multiply, divide, or mod operators.
#include<stdio.h>

// Questions:
// Can the input be negative numbers as well?


// my logic written in plain english 
// Method 1: Brute Force
/*
1.Subtract the divisor from the dividend until the dividend is less that the divisor.
2. The number of times the subtraction occurs is the quotient.
3. While the remainder is the value of the dividend after the dividend is less than the divisor
*/

int main(){
    
    int a = 8;
    int b = 2;
    
    int dividend = 8;
    int divisor = 2;
    int quotient = 0;
    
    while (dividend  >= divisor){
        dividend -= divisor;
        quotient++;
    }
    
    printf("%d", quotient);
    
    
    return 0;
}


// Method 2: Using bit shift operations






