#include<stdio.h>
int main(){
  int n,i,count=0;
  printf("Enter a no : ");
  scanf("%d",&n);
  if(n<=1)
    printf("No is not prime");
  else{
  for(i=2;i<n;i++){
    if(n%i==0)
      count++; }
  if(count==0)
    printf("No is prime");
  else
    printf("No is not prime");}
  return 0;
}