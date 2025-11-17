#include<stdio.h>
int ArraySum(int a[],int l){
   if(l==0)
      return 0;
   else
      return a[l-1]+ArraySum(a,l-1);       
}
int main(){
  int a[]={1,2,3,4,5};
  int l=sizeof(a)/sizeof(a[0]);
  printf("Array is : ");
  for(int i=0;i<l;i++)
     printf("%d ",a[i]);
  printf("\nSum of elements of above array = %d",ArraySum(a,l));
  return 0;
}