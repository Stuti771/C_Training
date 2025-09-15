#include<stdio.h>
int main(){
    int a[5]={10,3,1,90,6};
    printf("Even no in above array:-");
    for(int i=0;i<5;i++){
       if(a[i]%2==0)
         printf("%d ",a[i]);
    }
    printf("\nodd no in above array:-");
    for(int i=0;i<5;i++){
       if(a[i]%2!=0)
         printf("%d ",a[i]);
    }
    return 0;
 }