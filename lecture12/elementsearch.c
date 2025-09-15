#include<stdio.h>
int main(){
    int a[5]={10,3,1,90,6};
    int i,x=6;
    for(i=0;i<5;i++){
       if(x==a[i])
         break;
    }
    if(i<5)
      printf("Element found at index %d ",i);
    else
      printf("Element not found");
    return 0;
 }