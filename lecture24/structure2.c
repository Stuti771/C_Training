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
    struct student s1;
    s1.age=20;
    strcpy(s1.name,"Stuti");
    s1.rollNo=34;
    s1.s2.pincode=482002;
    printf("Name=%s\nRoll no=%d\nAge=%d\nPincode=%d",s1.name,s1.rollNo,s1.age,s1.s2.pincode);
    return 0;
}