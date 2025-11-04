#include<stdio.h>
int Bsearch(int a[],int x,int s,int e){
   if(s>e)
     return -1;
   int m=(s+e)/2;
    if(a[m]==x)
      return m;  
    else{
      if(x<a[m])
        return Bsearch(a,x,s,m-1);
      else
        return Bsearch(a,x,m+1,e);
     }          
}
int main(){
  int a[]={2,3,8,10,50};
  int n=sizeof(a)/sizeof(a[0]);
  int x=10;
  int s=0;
  int e=n-1;
  int result=Bsearch(a,x,s,e);
  if(result==-1)
    printf("Element not found");
  else
    printf("Element found at index %d",result);
  return 0;
}