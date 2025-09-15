#include<stdio.h>
int main(){
    int sum=0,a[5]={10,20,30,40,50};
    printf("Array:-");
    for(int i=0;i<5;i++)
       printf("%d ",a[i]);
    printf("\nArray in reverse order:-");
    for(int i=4;i>=0;i--)
       printf("%d ",a[i]);
    for(int i=0;i<5;i++){
       sum+=a[i];
    }
    printf("\nSum of above array=%d",sum);
    return 0;
}