#include<stdio.h>
int main(){
    int a[]={1,2,5,3,7,8,6};
    int l=sizeof(a)/sizeof(a[0]);
    int xor1=0;
    int xor2=0;
    int m=a[0];
    for(int i=1;i<l;i++)
      if(m<a[i])
        m=a[i];  
    printf("Array is :");
    for(int i=0;i<l;i++){
       xor1=xor1^a[i];
       printf(" %d",a[i]);
    }
    for(int i=1;i<=m;i++)
       xor2=xor2^i;
    int result=xor1^xor2;
    printf("\nMissing no in above array = %d",result);
    return 0;
}