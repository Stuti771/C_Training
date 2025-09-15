#include<stdio.h>
int main(){
  int n,lastdigit,p=1;
  printf("Enter a no : ");
  scanf("%d",&n);
  for(;n>0;){
    lastdigit=n%10;
    p=p*lastdigit;
    n=n/10;
   }
   printf("Product=%d",p);
   return 0;
}