#include<stdio.h>
#include<limits.h>   
int main(){
   int a[5]={1,-2,-3,2,7};
   int maxSum=0;
   int sum=0;
   for(int i=0;i<5;i++){
      sum+=a[i]; 
      if(sum<0)
         sum=0; 
   }
   if(sum>maxSum)
      maxSum=sum;  
   printf("Maximum sum=%d",maxSum);
   return 0;
}