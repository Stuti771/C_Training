#include<stdio.h>
//swapping using temp variable
int swap(int *a,int *b){
    int t=*a;
        *a=*b;
        *b=t;
}
//swapping without using temp variable 
int swapnotemp(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
int main(){
    int a=10;
    int b=20;
    int x=90;
    int y=100;
    printf("Before swapping:-\na=%d\tb=%d",a,b);
    swap(&a,&b);       
    printf("\nAfter swapping:-\na=%d\tb=%d",a,b);

    printf("\n\nBefore swapping:-\nx=%d\ty=%d",x,y);
    swapnotemp(&x,&y);       
    printf("\nAfter swapping:-\nx=%d\ty=%d",x,y);
    return 0;
}
