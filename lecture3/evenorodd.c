#include<stdio.h>
int main(){
  int n;
  printf("Enter a no : ");
  scanf("%d",&n);
  if(n%2==0) 
    printf("No is even");
  else{
    if(n==0)
      printf("Not defined");
    else
      printf("No is odd"); }
  return 0;
}