#include<stdio.h>
int main(){
int a,b;
char ch;
float c;
printf("Enter two no : ");
scanf("%d%d",&a,&b);
printf("Enter your choice : ");
scanf(" %c", &ch); 
switch(ch)
{
 case '+': printf("Addition=%d",a+b);
  break;
 case '-': printf("Difference=%d",a-b);
  break;
 case '*': printf("Product=%d",a*b);
  break;
 case '/': c=(float)a/b;
           printf("Division=%f",c);
  break;
 default : printf("Wrong input");
}
return 0;
}