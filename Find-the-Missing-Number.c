// **Find the Missing Number**: Given an array containing n distinct numbers taken from `0, 1, 2, ..., n`, find the one that is missing from the array.
#include<stdio.h>

// follow up
// What would be the size of the bits of the integer.

// my logic written in plain english 
/*
1. Keep an integer initialized to zero.\
2. Iterate the loop and check if it is equal to j.
3. If yes move forward and keep checking till the end.
4. Otherwise, break and return that number.
*/

#define BITS 8

int main(){
    
    int a[5] = {0,1,3,4,5};
    
    int j = 0;
    int size = sizeof(a)/ sizeof(int);
    int missing = -1;
    
    for(int i = 0; i < size; i++){
        if (a[i] == j){
            j++;
        }
        else{
            missing = j;
            break;
        }
    }
    
    printf("%d\n", missing);
    
    return 0;
}

