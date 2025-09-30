#include<stdio.h>
int main(){
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   printf("Array is :- ");
    for(int i=0,j=0;j<3;j++)
      printf(" %d",a[i][j]); 
    for(int j=2,i=1;i<3;i++)
      printf(" %d",a[i][j]);
    for(int i=2,j=1;j>=0;j--)
      printf(" %d",a[i][j]);
    for(int i=1,j=0;j<2;j++)
      printf(" %d",a[i][j]);  
   return 0;
}