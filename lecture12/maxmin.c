#include<stdio.h>
int main(){
    int a[5]={10,3,1,90,6};
    int min=a[0];
    int max=a[0];
    for(int i=0;i<5;i++){
       if(min>a[i])
         min=a[i];
       if(max<a[i])
         max=a[i];
    }
    printf("Minimun element=%d ",min);
    printf("\nMaximun element=%d",max);
    return 0;
 }