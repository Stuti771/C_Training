#include<stdio.h>
int main(){
  int n,sum=0,lastdigit;
  printf("Enter a no : ");
  scanf("%d",&n);
  while(n>0){
    lastdigit=n%10;
    sum=sum+lastdigit;
    n=n/10; }
  printf("Sum=%d",sum);
  return 0;
}