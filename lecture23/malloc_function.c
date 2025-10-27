#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));  // Does not initialize memory
    printf("Enter %d elements : ",n);     // (contains garbage values)
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Array is : ");
    for(int i=0;i<n;i++)
     printf("%d ",a[i]); 
    return 0;
}