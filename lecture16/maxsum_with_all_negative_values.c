#include<stdio.h>
#include<limits.h>   
int main(){
   int a[5]={-1,-2,-3,-5,-7};
   int maxSum=INT_MIN;
   int sum=0;
   for(int i=0;i<5;i++){
     sum+=a[i]; 
     if(maxSum<sum)
       maxSum=sum; 
     if(sum<0)
       sum=0;
   }     
   printf("Maximum sum=%d",maxSum);
   return 0;
}