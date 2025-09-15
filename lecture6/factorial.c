#include<stdio.h>
int main(){
  int n,i,fac;
  printf("Enter a no : ");
  scanf("%d",&n);
  for(i=1,fac=1;i<=n;i++)
  { fac=fac*i; }
  printf("Factorial=%d",fac);
  return 0;
}