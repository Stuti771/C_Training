#include<stdio.h>
#include<conio.h>
int main(){
   int n;
   printf("Enter no of rows : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    for(int s=0;s<n-i;s++){
       printf(" ");
    }
    for(int j=0;j<=2*i;j++){
       printf("*");
    }
    printf("\n");
   }
   getch();
   int num=0;
   for(int i=0;i<n;i++){
    for(int s=0;s<n-i;s++){
       printf(" ");
    }
    for(int j=0;j<=2*i;j++){
       printf("%d",num++);
    }
    printf("\n");
   }
   getch();
   int k=65;
   for(int i=0;i<n;i++){
    for(int s=0;s<n-i;s++){
       printf(" ");
    }
    for(int j=0;j<=2*i;j++){
       printf("%c",k++);
    }
    printf("\n");
   }
   getch();
   int l=97;
   for(int i=0;i<n;i++){
    for(int s=0;s<n-i;s++){
       printf(" ");
    }
    for(int j=0;j<=2*i;j++){
       printf("%c",l++);
    }
    printf("\n");
   }
   return 0;
}