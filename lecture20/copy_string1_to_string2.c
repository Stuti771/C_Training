#include<stdio.h>
#include<string.h>
int main(){ 
 char s[]="Joker";
 int l=strlen(s);
 char data[l];
 int i;
 printf("String 1 = ");
 for(i=0;s[i]!='\0';i++){
    printf("%c",s[i]);
    data[i]=s[i];
 }
 data[l]='\0';
 printf("\nString 2 = %s",data);
 printf("\nLength = %d",l);
 return 0;
 }
    