#include<stdio.h>
#include<string.h>
struct address{
    int pincode;
};
struct student{
    char name[50];
    int rollNo;
    int age;
    struct address s2;
};
int main(){
    struct student s1[3];
    for(int i=0;i<3;i++){
      printf("Enter student %d name : ",i+1);
      scanf("%s",s1[i].name);
    }
    for(int i=0;i<3;i++){
      printf("Enter student %d roll no : ",i+1);
      scanf("%d",&s1[i].rollNo);
    }
    for(int i=0;i<3;i++){
      printf("Enter student %d age : ",i+1);
      scanf("%d",&s1[i].age);
    }
    for(int i=0;i<3;i++){
      printf("Enter student %d pincode : ",i+1);
      scanf("%d",&s1[i].s2.pincode);
    }
    for(int i=0;i<3;i++){
      printf("\n\nStudent %d details :-\n",i+1);
      printf("Name=%s\nRoll no=%d\nAge=%d\nPincode=%d",s1[i].name,s1[i].rollNo,s1[i].age,s1[i].s2.pincode);
    }
    return 0;
}