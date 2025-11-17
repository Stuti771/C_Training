#include<stdio.h>
int factorial(int n){
   if(n==0||n==1)
      return 1;
   else
      return n*factorial(n-1);       
}
int main(){
  int n=5;
  if(n<0)
    printf("Factorial is not defined");
  else
    printf("Factorial of %d = %d",n,factorial(n));
  return 0;
}