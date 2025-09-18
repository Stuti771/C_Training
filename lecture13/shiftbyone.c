#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50};
    printf("Array is:-");
    for(int i=0;i<5;i++)
       printf("%d ",a[i]);
    for(int i=4;i>=1;i--){
      a[i]=a[i-1];
    }
    a[0]=50;
    printf("\nUpdated array is:-");
    for(int i=0;i<5;i++)
       printf("%d ",a[i]);
    return 0;
}