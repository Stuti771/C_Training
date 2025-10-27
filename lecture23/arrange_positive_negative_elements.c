#include<stdio.h>
int main(){
   int a[]={1,-4,-22,77,-8,8,-3,1};
   int i,j,n,k=0,t=0;
   n=sizeof(a)/sizeof(a[0]);
   int b[n];
   for(i=0;i<n;i++){
      if(a[i]<0)
        k++;
   }
    for(i=0,j=0;i<n;i++){ 
      if(a[i]<0){
        b[j]=a[i];
        j++;
      }
      else{
        b[k]=a[i];
        k++;
      }
   }
   printf("Array is :");
   for(i=0;i<n;i++)
   printf(" %d",b[i]);
   return 0;
}