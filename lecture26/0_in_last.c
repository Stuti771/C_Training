#include<stdio.h>
int main(){
    int a[]={4,0,5,3,0};
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    int t,j=0;
    for(int i=0;i<l;i++){
       if(a[i]!=0){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        j++;
       }
    }
    printf("\nNew array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    return 0;
}