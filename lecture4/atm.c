#include<stdio.h>
int main(){
int balance=1000,amount,choice;
printf("Press\n1-Balance check\n2-Withdrawal\n3-Deposit\n4-Exit\n");
printf("Enter your choice : ");
scanf("%d",&choice); 
switch(choice)
{
 case 1:printf("Balance=%d",balance);
  break;
 case 2:
  printf("Enter amount to withdraw : ");
  scanf("%d",&amount);
  if(amount<=balance)
    balance-=amount;
  printf("Amount withdrawn\nBalance left=%d",balance);
  break;
 case 3:
  printf("Enter amount to deposit : ");
  scanf("%d",&amount);
  balance+=amount;
  printf("Amount deposited\nNew balance=%d",balance);
  break;
 default : printf("Thankyou");
}
return 0;}