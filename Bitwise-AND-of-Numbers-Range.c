//Implement Bitwise AND of Numbers Range: Given two integers, find the bitwise AND of all numbers in this range, inclusive.
#include<stdio.h>

// follow up
// What would be the number of bits in an integer. Should I assume its 32?

// my logic written in plain english 
/*
Solution 1: (Brute Force)
1. A simple solution would be to traverse the array and just And the numbers in the range which would eventually give us the final output.
*/


// int main()
// {
//     // int a[10] = {1,2,3,4,5,6,7,8,9,10};
//     int ans = 10;
    
//     for(int i = 11; i < 15; i++){
//         ans = ans & i;
//     }
    
    
    
//     printf("%d\n", ans);

//     return 0;
// }

/*
Solution 2:
1. Find the common prefix of the range m and n as the numbers in between will change 0's and 1's but the prefix of the range will be the same.
2. Once we find the common prefix for both, we left shift the common prefix by the number of shifts we made to attain the common prefix.
*/


//Trick: There is a prefix near the higher numbers, which remains same for numbers between the range m and n. ANDing the range will give that common prefix, hence find it by left shifting both the highest and lowest numbers.

int main()
{
    int m = 10, n =15;
    int shift = 0;
    
    while (m!=n){
        m >>= 1;
        n>>= 1;
        shift++;
    }
    
    int ans = m << shift;
    
    printf("%d\n", ans);

    return 0;
}

