#include<stdio.h>
#include<limits.h>
int maxArraySum(int a[],int n,int k){
   int maxSum=INT_MIN;
   for(int i=0;i<=n-k;i++){
      int sum=0;
      for(int j=i;j<i+k;j++)
        sum=sum+a[j];
      if(sum>maxSum)
         maxSum=sum;
   } 
   return maxSum;
}   
int main(){
   int a[5]={10,20,30,40,50};
   int k=3;
   int n=sizeof(a)/sizeof(a[0]);
   int result=maxArraySum(a,n,k);
   printf("Maximum sum of any %d elements=%d",k,result);
   return 0;
}