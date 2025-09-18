#include<stdio.h>
int main(){
    int a[5]={1,4,6,3,5};
    int k=9;
    printf("Pair of all two no whose sum is %d are :- ",k);
    for(int i=0;i<5-1;i++){
      for(int j=0;j<5;j++)
        if(a[i]+a[j]==k)
          printf("\n%d and %d",a[i],a[j]);
    }
    return 0;
}