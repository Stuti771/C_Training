#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int *a=(int *)malloc(size*sizeof(int));
    printf("Enter %d elements : ",size);
    for(int i=0;i<size;i++)
     scanf("%d",&a[i]);
   
    int newSize;
    printf("\nEnter new size of array : ");
    scanf("%d",&newSize);
    int *b=(int *)realloc(a,newSize*sizeof(int));  // reallocates (changes the size of a previoualy allocated memory block)
    printf("Enter %d elements : ",newSize);
    for(int i=0;i<newSize;i++)
     scanf("%d",&a[i]);

    printf("\nArray is : ");
    for(int i=0;i<newSize;i++)
     printf("%d ",a[i]); 
    return 0;
}