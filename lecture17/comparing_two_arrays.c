#include<stdio.h>
int main(){
    int a1[5]={1,2,3,4,5};
    int a2[5]={1,2,3,4,5};
    int *p1=a1;
    int *p2=a2;
    int flag=1;
    for(int i=0;i<5;i++){
        if(*(p1+i)==*(p2+i))
          flag=0;
          break;
    }
    if(flag==0)
      printf("Above arrays are equal");
    else
      printf("Above arrays are not equal");
    return 0;
}