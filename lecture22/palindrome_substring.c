#include<stdio.h>
#include<string.h>
int main(){
   char s[]="abadefe";
   int l=strlen(s);
   int k=3;
   char result[k];
   int i,j;
   printf("Palindrome substrings of length %d : ",k);
   for(i=0;i<=l-k;i++){
    int n=0;
    int count=0;
    for(j=i;j<k+i;j++,n++){
      result[n]=s[j];
    } 
    result[k]='\0';
    for(int m=0;m<k/2;m++){
      if(result[m]==result[k-1-m])
        count++;
      else
        break;
    }
    if(count==k/2)
      printf("\n%s",result);
   } 
   return 0;   
}