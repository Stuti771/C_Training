#include<stdio.h>
#include<string.h>
int main(){
    char s[]="abjwpydccameb";
    int l=strlen(s);
    int t;
    for(int i=0;i<l-1;i++)
      for(int j=0;j<l-1-i;j++){
        if(s[j]>s[j+1]){
          t=s[j];
          s[j]=s[j+1];
          s[j+1]=t;
        }
      }
    printf("%s",s);
    return 0;
}