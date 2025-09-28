#include<stdio.h>
int main(){
   int a[3][3]={{1,2,33},{4,5,6},{17,8,9}};
   int b[3][3]={{1,12,4},{23,5,16},{45,9,33}}; 
   int i,j,k,l;
   printf("Common elements of above arrays: ");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     for(k=0;k<3;k++){
      for(l=0;l<3;l++)
        if(a[i][j]==b[k][l])
          printf("%d ",a[i][j]);
     }
    }
   }
   return 0;
}