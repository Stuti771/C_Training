#include<stdio.h>
int sum(){
  int a,b,c;
  printf("Enter first no : ");
  scanf("%d",&a);
  printf("Enter second no : ");
  scanf("%d",&b);
  c=a+b;
  return c;
}
int main(){
  int c;
  c=sum();
  printf("Sum=%d",c);
  return 0;
}