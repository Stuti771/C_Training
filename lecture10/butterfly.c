#include<stdio.h>
int main(){
   int n;
   printf("Enter n : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       printf("*");
    }
    for(int k=0;k<n-i-1;k++){
       printf(" ");
    }
    for(int l=0;l<n-i-1;l++){
       printf(" ");
    }
    for(int m=0;m<=i;m++){
       printf("*");
    }
    printf("\n");
   }
   for(int p=0;p<n;p++){
    for(int q=0;q<n-p-1;q++){
       printf("*");
    }
    for(int r=0;r<=p;r++){
       printf(" ");
    }
    for(int s=0;s<=p;s++){
       printf(" ");
    }
    for(int t=0;t<n-p-1;t++){
       printf("*");
    }
    printf("\n");
   }
   return 0;
}