#include<stdio.h>
int main(){
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int b[3][3];
   printf("2D array is :-\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
       printf("%d ",a[i][j]);
    printf("\n");
   } 
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
       b[j][i]=a[i][j];
   } 
   printf("\nTranspose of above array :-\n");
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
       printf("%d ",b[i][j]);
    printf("\n");
   } 
   return 0;
}