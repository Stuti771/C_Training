#include<stdio.h>
#include<string.h>
int main(){
   char s[]="bcabbccdda";
   int l=strlen(s);
   int freq[256]={0};
   for(int i=0;i<l;i++)
      freq[s[i]]++;
   for(int i=0;i<256;i++){
      if(freq[i]>0)
        printf("%c%d",i,freq[i]);
   }
   return 0;
}