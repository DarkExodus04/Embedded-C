// Find the Two Non-repeating Elements in an Array of Repeating Elements**: Given an array where every element repeats twice except two, find those two unique non-repeating elements
#include<stdio.h>

// follow up
// Can the elements be characters as well? Or should I assume they are only integers

// my logic written in plain english 
/*
Solution 1: Brute force
1. Check each element in the array using a nested for loop.
2. Increment the count if it is one and print it.
3. Would continue the same for the second element.
*/

#define BITS 8

// int main()
// {
//     int a[6] = {0,0,1,2,2,3};
//     int count = 0;
    
    
//     for (int i = 0; i< 6; i++){
//         count = 0;
//         for (int j = 0; j < 6; j++){
//             if (a[i] == a[j]){
//                 count++;
//             }
//         }
        
//         if (count == 1){
//             printf("%d\n", a[i]);
//         }
//     }


//     return 0;
// }

/*
Solution 2: Optimized
1. Xor every element in the array. This will only give the xor of the two numbers.
2. Get the difference of set bits by checking the rightmost set bit.
3. With this we can xor the array in two groups according to the set bit.
*/

//Note: n & ~(n-1) will give the rightmost set bit (2's complement)


int main()
{
    int a[6] = {0,0,1,2,2,3};
    int count = 0;
    int xor_all = 0;
    
    
    for (int i = 0; i< 6; i++){
        xor_all ^= a[i];
    }

    int set_bit = xor_all & ~(xor_all-1);
    
    int x= 0, y = 0;
    
    for (int i = 0; i< 6; i++){
        if(set_bit & a[i]){
            x ^= a[i];
        }
        else{
            y ^= a[i];
        }
    }
    
    printf("%d %d\n", x, y);

    return 0;
}


