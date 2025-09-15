#include<stdio.h>
int main(){
   int n,k=0;
   printf("Enter no of rows : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       printf("%d",k++);
    }
    printf("\n");
   } 
   return 0;
}