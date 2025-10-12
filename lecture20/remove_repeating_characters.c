#include<stdio.h>
#include<string.h>
int main(){
   char s[]="abaacdeeedagfffcdgg";
   int l=strlen(s);
   int count;
   for (int i=0;i<l;i++){    //initializing i=1 will remove a(first ch) from output
     count=0;
     for(int j=0;j<i;j++) 
        if(s[i]==s[j]){
          count++;
          break;  
        }
        if(count==0)
          printf("%c", s[i]);
    }
    return 0;
 }