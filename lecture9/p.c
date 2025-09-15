#include<stdio.h>
#include<conio.h>
int main(){
   int n;
   printf("Enter no of rows : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    for(int s=0;s<=i;s++){
       printf(" ");
    }
    for(int j=0;j<5;j++){
       printf("*");
    }
    printf("\n");
   }
   return 0;
}