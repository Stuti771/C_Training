#include<stdio.h>
int main(){
  int n;
  printf("Enter a no : ");
  scanf("%d",&n);
  if(n>0) 
    printf("No is positive");
  else{
    if(n==0)
      printf("Not defined");
    else
      printf("No is negative"); }
  return 0;
}