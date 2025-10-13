#include<stdio.h>
#include<string.h>
int main(){
   char s[]="bcabbccdda";
   int l=strlen(s);
   int freq[256]={0};
   for(int i=0;i<l;i++)
      freq[s[i]]++;
   for(int i=0;i<l;i++){
    int count=0;
    for(int j=0;j<i;j++)
     if(s[i]==s[j]){
       count++;
       break;
    }
    if(count==0)
      printf("%c%d",s[i],freq[s[i]]);
   }
   return 0;
}