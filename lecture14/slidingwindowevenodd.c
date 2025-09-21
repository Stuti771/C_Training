#include<stdio.h>
int main(){
   int a[5]={-8,22,-3,5,7};
   int k=3;
   int n=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<=n-k;i++) {
      printf("\n\nWindow %d: ",i+1);
      printf("\nEven: ");
      for(int j=i;j<i+k;j++) {
         if(a[j]%2==0)
            printf("%d ",a[j]);
      }
      printf("\nOdd: ");
      for(int j=i;j<i+k;j++) {
         if(a[j]%2!=0)
            printf("%d ",a[j]);
      }
   }
   int windowSum=0;
   for(int i=0;i<k;i++)
      windowSum+=a[i];
   int maxSum=windowSum;
   for(int j=k;j<n;j++)
      windowSum=windowSum+a[j]-a[j-k];
      if(windowSum>maxSum)
         maxSum=windowSum;
   printf("\n\nMaximum sum of any %d elements=%d",k,maxSum);
   return 0;
}