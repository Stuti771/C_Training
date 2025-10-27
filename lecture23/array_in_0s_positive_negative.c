#include<stdio.h>
int main(){
    int a[6]={-1,0,5,-2,0,3};
    int b[6];
    int c1=0;
    int c2=0;
    for(int i=0;i<6;i++){
      if(a[i]==0)
        c1++;
      if(a[i]<0)
        c2++;
    }
    c2=c1+c2;
    int j=0;
    for(int i=0;i<6;i++){
      if(a[i]==0)
        b[j++]=a[i];
      if(a[i]<0)
        b[c1++]=a[i];
      if(a[i]>0)
        b[c2++]=a[i];
    }
    printf("Updated array is : ");
    for(int i=0;i<6;i++)
     printf("%d ",b[i]); 
    return 0;
}