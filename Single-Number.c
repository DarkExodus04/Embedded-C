// **Single Number**: Given a non-empty array of integers where every element appears twice except for one. Find that single one.
#include<stdio.h>

// Questions:
// Is the array sorted?
// Is it possible for the array to have a case where all the numbers are repeated. What should it return then?

// my logic written in plain english 


//Solution 1 (Brute Force): Check each element using nested for loop.

// int main(){
//     int a[7] = {0,0,1,2,3,3,2};
//     int count = 0;
    
//     for (int i = 0; i < 7; i++){
//         count = 0;
//         for (int j = 0; j < 7; j++){
//             if (a[i] == a[j]){
//                 count++;
//             }
//         }
        
//         if (count == 1){
//             printf("%d", a[i]);
//             break;
//         }
        
//     }
    
    
//     return 0;
// }


// Optimal Solution: Use XOR Operation
/*
1. XOR all the numbers.
2. Since XOR with the same number will be zero, while XOR with zero will give the same number.
*/


int main(){
    int a[7] = {0,0,1,2,3,3,2};
    int res = 0;
    
    for (int i = 0; i < 7; i++){
        
        res ^= a[i];
        
    }
    
    printf("%d", res);
    
    
    return 0;
}

