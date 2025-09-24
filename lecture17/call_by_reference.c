#include<stdio.h>
int sum(int *x,int *y){
    *x=20;
    *y=30;
    int c=*x+*y;
    return c;
}
int main(){
    int x=10;
    int y=90;
    int data=sum(&x,&y);
    printf("Sum=%d",data);
    printf("\nSum=%d",x+y);
    return 0;
}