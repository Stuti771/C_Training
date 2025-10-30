#include<stdio.h>
int main(){
    int a[]={7,5,0,2,1,4};
    int l=sizeof(a)/sizeof(a[0]);
    int max=0,min=0,m=0;
    int bday=0,sday=0;
    for(int i=0;i<l-1;i++){
       int j=i+1;
       if(a[i]<a[j]){
        m=a[i];
        if(m<=min){
          min=m;
          bday=i;
        }
        max=a[j];
        sday=j;
       }
    }
    int p=max-min;
    if(p!=0)
      printf("Stocks bought on day %d and sold on day %d\nProfit = %d",bday+1,sday+1,p);
    else
      printf("Profit = %d",p);
    return 0;
}