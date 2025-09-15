#include<stdio.h>
int main(){
  int n,lastdigit,res=0;
  printf("Enter a no : ");
  scanf("%d",&n);
  int original=n;
  while(n>0){
    lastdigit=n%10;
    res=res*10+lastdigit;
    n=n/10; }
  if(original==res)
    printf("No is palindrome");
  else
    printf("No is not palindrome");
  return 0;
}