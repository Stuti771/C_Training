#include<stdio.h>
#include<limits.h>
int maxArraySum(int a[],int n,int k){
   int windowSum=0;
   for(int i=0;i<k;i++)
      windowSum+=a[i];
   int maxSum=windowSum;
   for(int j=k;j<n;j++)
      windowSum=windowSum+a[j]-a[j-k];
      if(windowSum>maxSum)
         maxSum=windowSum;
   return maxSum;
}   
int main(){
   int a[5]={10,20,3,5,7};
   int k=3;
   int n=sizeof(a)/sizeof(a[0]);
   int result=maxArraySum(a,n,k);
   printf("Maximum sum of any %d elements=%d",k,result);
   return 0;
}