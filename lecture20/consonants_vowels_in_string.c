#include<stdio.h>
#include<string.h>
int main(){
   char s[]="hello";
   int l=strlen(s);
   int vCount=0;
   int cCount=0;
   for(int i=0;i<l;i++){
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        vCount++;
      else
        cCount++;
   }
   printf("No of vowels=%d\nNo of consonants=%d",vCount,cCount);
   return 0;
}