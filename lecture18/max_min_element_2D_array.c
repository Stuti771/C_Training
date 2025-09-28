#include<stdio.h>
int main(){
   int a[3][3]={{1,2,-3},{4,15,6},{7,8,9}};
   int max=a[0][0];
   int min=a[0][0];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       if(max<a[i][j])
         max=a[i][j];
       if(min>a[i][j])
         min=a[i][j];
    }
   }
    printf("Maximum element = %d\n",max); 
    printf("Minimum element = %d",min);
   return 0;
}