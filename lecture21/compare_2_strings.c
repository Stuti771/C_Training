#include<stdio.h>
#include<string.h>
int main(){
   char s1[]="stuti";
   char s2[]="tiwari";
   int l1=strlen(s1);
   int l2=strlen(s2);
   for(int i=0;i<l1;i++){
    int count=0;
    for(int k=0;k<i;k++)
     if(s1[i]==s1[k]){
      count++;
      break; 
     }
     if(count==0)
      for(int j=0;j<l2;j++)
       if(s1[i]==s2[j]){
        printf("%c",s1[i]);
        break;
       }
   }
   return 0;
} 