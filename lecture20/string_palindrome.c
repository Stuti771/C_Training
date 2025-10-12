#include<stdio.h>
#include<string.h>
int main(){
    char s[]="abcdefedcba";
    int l=strlen(s);
    int i;
    int isTrue=1;         
    for(i=0;i<l/2;i++)
      if(s[i]!=s[l-1-i]){
        isTrue=0;
        break;
    }
    if(isTrue==0)
      printf("String is not palindrome");
    else
      printf("String is palindrome");
    return 0;
}