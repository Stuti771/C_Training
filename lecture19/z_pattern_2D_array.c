#include<stdio.h>
int main(){
   int i,j;
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   printf("Array is :-\n");
    for(i=0;i<3;i++){
     for(j=0;j<3;j++)
        if(i==0||i==3-1)
          printf(" %d",a[i][j]);
        else{
         if(j==3-1-i)
            printf(" %d",a[i][j]);
         else
            printf("  ");
        }
        printf("\n");
    }
   return 0;
}