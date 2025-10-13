#include<stdio.h>
#include<string.h>
int main(){
   char s[]="hello";
   int l=strlen(s);
   int freq[256]={0};
   for(int i=0;i<l;i++)
      freq[s[i]]++;
   for(int i=0;i<l;i++){
      if(freq[s[i]]==1){
        printf("%c",s[i]);
        break;
      }
   }
   return 0;
}