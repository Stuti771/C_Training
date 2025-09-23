#include<stdio.h>
int main(){
   int a[5]={10,-20,-3,-5,7};
   int n=sizeof(a)/sizeof(a[0]);
   int i,j,t;
   printf("Array is :-");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);
   for(i=0;i<=n-1;i++){
     for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
          t=a[j];
          a[j]=a[j+1];
          a[j+1]=t;
        }
     }
   } 
   printf("\nSorted array is :-");
   for(i=0;i<n;i++)
      printf(" %d",a[i]);     
   return 0;        
}