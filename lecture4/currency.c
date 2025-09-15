#include<stdio.h>
int main(){
int amount;
char ch;
printf("Enter amount in ruppees : ");
scanf("%d",&amount);
printf("Enter your choice : ");
scanf(" %c", &ch); 
switch(ch)
{
 case '$': printf("Amount in dollars=%f",(float)amount/87);
  break;
 case 'Y': printf("Amount in chinese yuan=%f",(float)amount/12.3);
  break;
 default : printf("Wrong input");
}
return 0;
}