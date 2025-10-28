#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int rollNo;
    int age;
};
int main(){
    struct student s;
    s.age=20;
    strcpy(s.name,"Stuti");
    s.rollNo=34;
    printf("Name=%s\nRoll no=%d\nAge=%d",s.name,s.rollNo,s.age);
    return 0;
}