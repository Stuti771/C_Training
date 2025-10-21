#include<stdio.h>
#include<string.h>
int main(){
   char s[]="abcdef";
   int l=strlen(s);
   char target[]="bcf";
   int k=strlen(target);
   int i,j;
   for(i=0;i<=l-k;i++){
    int n=0;
    int count=0;
    for(j=i;j<k+i;j++,n++){
      if(s[j]==target[n])
        count++;
    } 
    if(count==k)
      break;
   }
   if(i<=l-k)
     printf("Substring is present");
   else
     printf("Substring is not present");
   return 0;   
}