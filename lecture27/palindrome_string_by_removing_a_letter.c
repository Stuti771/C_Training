#include<stdio.h>
#include<string.h>
int main(){
   char s[]="stuti";
   int l=strlen(s);
   char t[l-1];
   int left=0;
   int i,k,j,c1=0,c=0;
   for(i=0;i<l/2;i++){
     if(s[i]==s[l-1-i])
       c1++;
   }
   if(c1==i)
     printf("The above string is palindrome");
   else{
   while(left<l){
   int c2=0;
   j=0;
   for(i=0;i<l;i++){
   if(i!=left)
       t[j++]=s[i];
   }
   for(k=0;k<(l-1)/2;k++){
     if(t[k]==t[l-2-k])
       c2++;
   }
  if(c2==k){
    c++;
    printf("The above string is palindrome by removing %c",s[left]);
  }
   left++;
  }}
  if(c==0)
    printf("No possible outcomes");
   return 0;   
}