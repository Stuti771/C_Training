#include<stdio.h>
int main(){
    int a[]={2,5,8,2,9,5,8};
    int n=sizeof(a)/sizeof(a[0]);
    int xor=0;
    for(int i=0;i<n;i++)
      xor=xor^a[i];
    printf("Unique no = %d",xor);
    return 0;
}