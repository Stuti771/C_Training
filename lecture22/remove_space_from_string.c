#include<stdio.h>
#include<string.h>
int main(){
   char s[]="c programming";
   printf("String = %s\n",s);
   int j=0;
   for(int i=0;s[i]!='\0';i++){
    if(s[i]!=' ')
      s[j++]=s[i];
   }
   s[j]='\0';
   printf("Updated string = %s",s);
   return 0;
}