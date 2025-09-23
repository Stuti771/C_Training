#include<stdio.h>
int Bsearch(){
   int a[5]={2,3,8,10,50};
   int n=sizeof(a)/sizeof(a[0]);
   int x=5;
   int s=0;
   int e=n-1;
   while(s<=e){
     int m=(s+e)/2;
     if(a[m]==x)
       return m;  
     else{
      if(x<a[m])
        e=m-1;
      else
        s=m+1;
     }
   }     
   return -1;        
}
int main(){
   int result=Bsearch();
   printf("Element found at index %d",result);
   return 0;
}