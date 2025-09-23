#include<stdio.h>
int main(){
   int a[5]={10,-20,-3,-5,7};
   int i,j,k=3;
   int n=sizeof(a)/sizeof(a[0]);
   for(i=0;i<=n-k;i++){
     for(j=i;j<k+i;j++){
        if(a[j]<0){
          printf("First negative no in %d pair of %d elements=",i+1,k);
          printf("%d\n",a[j]);
             break;
        }
     }
   }      
   return 0;
        
}