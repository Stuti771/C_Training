#include<stdio.h>
int main(){
    int a=5;
    printf("Left-shift of %d = %d",a,a<<1);
    printf("\nRight-shift of %d = %d",a,a>>1);
    printf("\n\nDouble left-shift of %d = %d",a,a<<1<<1);
    printf("\nDouble right-shift of %d = %d",a,a>>1>>1);
    return 0;
}