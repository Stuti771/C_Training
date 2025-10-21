#include<stdio.h>
#include<string.h>
int main(){
   char s[]="abcdabbdbbs";
   int l=strlen(s);
   int freq[256]={0};
   int i,max=0;
   char result;
   for(i=0;i<l;i++)
      freq[s[i]]++;
   for(i=0;i<l;i++){
      if(freq[s[i]]>max){
        max=freq[s[i]];
        result=s[i];
      }
   }
   printf("%c->%d",result,max);
   return 0;
}