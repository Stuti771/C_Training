#include<stdio.h>
int main(){
  int n,i,sum ;
  printf("Enter a no : ");
  scanf("%d",&n);
  for(i=1,sum=0;i<=n;i++){
    sum=sum+i; }
  printf("Sum=%d\n",sum);
  return 0;
}