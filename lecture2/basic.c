#include<stdio.h>
int main(){
   int num=5;
    printf("num = %d\n", num);
    printf("num++ = %d (post-increment)\n", num++); // print first, then increase
    printf("Now num = %d\n", num);
    printf("++num = %d (pre-increment)\n", ++num); // increase first, then print
    printf("Now num = %d\n", num);

    // size of operator
    printf("\nSize of int = %zu bytes\n", sizeof(int));
    printf("Size of float = %zu bytes\n", sizeof(float));
    printf("Size of char = %zu bytes\n\n", sizeof(char));

    // ASCII Example
    int ascii = 65;
    char ch = ascii;  
    printf("ASCII value %d = character '%c'", ascii, ch);

    return 0;
}