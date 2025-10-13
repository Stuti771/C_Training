#include<stdio.h>
#include<string.h>
int main(){
   char s[]="hefhhg";
   int target='h';
   int j=0;
   for(int i=0;s[i]!='\0';i++){
    if(s[i]!=target)
      s[j++]=s[i];
   }
   s[j]='\0';
   printf("%s",s);
   int l=strlen(s);
   printf("\nLength of updated string=%d",l);
   return 0;
}