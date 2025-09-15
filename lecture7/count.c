#include<stdio.h>
int main(){
  int n,count;
  printf("Enter a no : ");
  scanf("%d",&n);
  if(n==0){
     count=1; }
  else{
  for(count=0;n>0;){
    count++;
    n=n/10;
   }}
   printf("No of digits=%d",count);
   return 0;
}