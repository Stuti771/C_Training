#include<stdio.h>
#include<conio.h>
int main(){
   int n;
   int k=65;
   printf("Enter no of rows : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       printf("%c ",k++);
    }
    printf("\n");
   }
    
   getch();
    
   int l=97;
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       printf("%c ",l++);
    }
    printf("\n");
   } 
   return 0;
}