//Check for Integer Overflow: Write a program to detect whether an addition or multiplication would result in an integer overflow.
#include<stdio.h>

// follow up
// What would be the number of bits in an integer. Should I assume its 32?

// my logic written in plain english 
/*
Solution 1:

1. The sign would change if the sum/ multiplication overflows.
2. For Addition, if the two numbers are positive, the result would be a negative number if the result overflows.
3. For multiplication, if the numbers have same sign then the result would be the opposite sign if the result overflows.
4. For multiplication, when one of the sign is negative, the result would be positive if the result overflows.
*/


// int main()
// {
//     // int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     int a = 2147483640;
//     int b = 11;
    
//     int add = a+b;
    
//     if (a > 0 && b >0){
//         if (add < 0){
//             printf("%d\n", -1);
//     }
//     }
//     else if (a < 0 && b < 0){
//         if (add > 0){
//             printf("%d\n", -1);
//     }
//     }
//     else{
//         printf("%d\n", add);
//     }
    
//     // Multiplication
//     int mult = a*b;
//     if (a > 0 && b >0){
//         if (mult < 0){
//             printf("%d\n", -1);
//     }
//     }
//     else if (a < 0 && b < 0){
//         if (mult < 0){
//             printf("%d\n", -1);
//     }
//     }
//     else if ((a < 0 && b > 0) || (a > 0 && b < 0)){
//         if (mult > 0){
//             printf("%d\n", -1);
//     }
//     }
//     else{
//         printf("%d\n", mult);
//     }
    
    

//     return 0;
// }


/*
Solution 2 For multiplication:
1. If one number is zero, result cannot overflows
2. If the product of two numbers is divisible by second number, then the value cannot overflow.
*/


int main()
{
    // int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int a = 2147483640;
    int b = 11;
    
    int add = a+b;
    
    if (a > 0 && b >0){
        if (add < 0){
            printf("%d\n", -1);
    }
    }
    else if (a < 0 && b < 0){
        if (add > 0){
            printf("%d\n", -1);
    }
    }
    else{
        printf("%d\n", add);
    }
    
    // Multiplication
    
    int mult = a*b;
    
    if (a == 0 || b == 0){
        printf("%d\n", mult);
    }
    else if (mult%a == 0){
        printf("%d\n", mult);
    }
    else{
        printf("-1");
    }
    
    

    return 0;
}


