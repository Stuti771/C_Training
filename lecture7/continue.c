#include<stdio.h>
int main(){
  int n;
  printf("Enter n : ");
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    if(i%2==0)
    continue;
    printf("%d\t",i);
   }
   return 0;
}