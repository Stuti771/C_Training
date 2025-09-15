#include<stdio.h>
int main(){
  int n,i,j,count;
  printf("Enter range : ");
  scanf("%d",&n);
  if(n<=1)
    printf("There are no prime numbers");
  else{
  printf("The prime no between 1 to %d are : ",n);
  for(j=2;j<=n;j++){
   for(i=2,count=0;i<j;i++){     // count=0 should be written here so that count=0 for every j++
     if(j%i==0){
      count++; 
      break;}}
   if(count==0)
    printf("%d\n",j);
   }}
  return 0;
}