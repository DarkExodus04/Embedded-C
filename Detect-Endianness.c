// **Detect Endianness**: Write a function to determine if a machine is big-endian or little-endian.
#include<stdio.h>

// my logic written in plain english 



//Method 1:
/*
1. Create a union with a char data type and a int data type.
2. Initialize the int data type with the value 0x01.
3. If while accessing the character, the value is 1, the machine is little endian, otherwise it is big endian.
*/

// union endian{
//     char c;
//     int i;
// } endian;

// int main(){
//     endian.i = 0x01; 
//     if (endian.c){
//         printf("Little endian");
//     }
//     else{
//         printf("Big endian");
//     }
    
    
    
//     return 0;
// }



// Method 2:
/*
1. Intialize an interger pointer with 0x01
2. Cast the integer pointer to a character pointer to make it 1 byte.
3. dereference the pointer to check the value.
4. If the value is 1, then the system is little endian or else big endian.
*/

int main(){
    int *p = (int*)0x01;
    
    if (*(char *)&p){
        printf("Little endian");
    }
    else{
        printf("Big endian");
    }
    
    return 0;
}

