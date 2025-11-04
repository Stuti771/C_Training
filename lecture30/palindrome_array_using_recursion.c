#include<stdio.h>
int palindrome(int a[],int i,int j){
    if(i>=j)
      return 1;
    if(a[i]!=a[j])
      return 0;
    return palindrome(a,++i,--j);
}
int main(){
    int a[]={1,2,3,2,1};
    int l=sizeof(a)/sizeof(a[0]);
    printf("Array is :");
    for(int i=0;i<l;i++)
     printf(" %d",a[i]);
    int startindex=0;
    int endindex=l-1;
    if(palindrome(a,startindex,endindex))
      printf("\nThe above array is palindrome");
    else
      printf("\nThe above array is not palindrome");
    return 0;
}