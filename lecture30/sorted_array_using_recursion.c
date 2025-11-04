#include<stdio.h>
int sorted(int a[],int i,int j){
    if(i==j)
      return 1;
    if(a[i]>a[i+1])
      return 0;
    return sorted(a,++i,j);
}
int main(){
    int a[]={1,2,2,3,4,5,4};
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    int startindex=0;
    int endindex=l-1;
    if(sorted(a,startindex,endindex))
      printf("\nThe above array is sorted");
    else
      printf("\nThe above array is not sorted");
    return 0;
}