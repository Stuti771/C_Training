#include<stdio.h>
int main(){
   int a,b;
   printf("Enter first no : ");
   scanf("%d",&a);
   printf("Enter second no : ");
   scanf("%d",&b);

   printf("a+b=%d\n",a+b);  // addition
   printf("a-b=%d\n",a-b);  // subtraction
   printf("a*b=%d\n",a*b);  // multiplication
   printf("a/b=%d\n",a/b);  // division (integer)
   printf("a%%b=%d\n",a%b);  // remainder

   float result=(float)a/b;  // division (decimal also)
   printf("a/b=%f",result);
   return 0;
}