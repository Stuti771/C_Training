#include<stdio.h>
int main(){
  int n;
  printf("Enter the value of n : ");
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    if(i==10)
    break;
    printf("\n%d",i);
   }
   return 0;
}