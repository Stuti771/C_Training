#include<stdio.h>
int main(){
    int i,a[5]={1,3,4,5,6};
    int s=21;
    int sum=0;
    for(i=0;i<5;i++){
       sum+=a[i];
    }
    printf("Missing element=%d",s-sum);
    return 0;
 }