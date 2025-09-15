#include<stdio.h>
int main(){
   int n;
   printf("Enter no of rows : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
       printf("*"); 
      }
      for(int s=0;s<n-i-1;s++){
         printf(" ");
      }  
      for(int t=0;t<n-i-1;t++){
         printf(" ");
      }
      for(int k=0;k<=i;k++){
         printf("*"); 
      }
    printf("\n");
   }
   return 0;
}