#include<stdio.h>
#include<limits.h>
int maxArraySum(int a[],int n){
   int maxSum=INT_MIN;
   for(int i=0;i<n-1;i++){
      int sum=0;
      for(int j=i;j<n;j++)
        sum+=a[j];
      if(sum>maxSum)
         maxSum=sum;
   } 
   return maxSum;
}   
int main(){
   int a[5]={1,2,-3,-4,7};
   int n=sizeof(a)/sizeof(a[0]);
   int result=maxArraySum(a,n);
   printf("Maximum sum=%d",result);
   return 0;
}