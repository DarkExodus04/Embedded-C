// **Merge Two Sorted Bit Arrays**: Given two sorted arrays of bits (0s and 1s), merge them into a single sorted array.
#include<stdio.h>

// follow up
// Should the sort be ascending or descending?

// my logic written in plain english 
/*
1. I would create two pointers to each of the arrays. I would then loop through the arrays while any one of them reached the end.
2. While looping through the arrays, I would check which ones greater and would add that to the new temporary array. At the end, I would just append the remaning elements of the array.
*/

#define BITS 8

int main()
{
    int a[5] ={0,0,0,1,1} ;
    int b[3] = {0,1,1};
    
    int a_size = sizeof(a)/sizeof(int);
    int b_size = sizeof(b)/sizeof(int);
    
    int temp[a_size +b_size];
    
    int i = 0;
    int j = 0;
    int temp_c = 0;
    
    while(i < a_size && j < b_size){
        if(a[i] > b[j]){
            temp[temp_c] = b[j];
            j++;
        }
        else{
            temp[temp_c] = a[i];
            i++;
        }
        
        temp_c++;
    }
    
    while (i < a_size){
        temp[temp_c] = a[i];
        i++;
        temp_c++;
    }
    
    while (j < b_size){
        temp[temp_c] = b[j];
        j++;
        temp_c++;
    }
    
    for (int k = 0; k < a_size+b_size; k++){
        printf("%d\n", temp[k]);
    }
    

    return 0;
}

