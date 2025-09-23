#include<stdio.h>
#include<limits.h>   
int main(){
   int a[5]={1,2,3,4,5};
   int b[5]={6,7,8,9,0};;
   int c[10];
   for(int i=0;i<5;i++){
      c[i]=a[i]; 
      c[i+5]=b[i]; 
   }
   printf("Array is:- ");
   for(int i=0;i<10;i++)
   printf("%d ",c[i]);
   return 0;
}