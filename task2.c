#include<stdio.h>
int main(){
    char name[50] , department[50] ,studentId[50] , section[50] , universityName[50] ;
    int age;
    printf("what is your name? ");    
    scanf("%s", &name);
    printf("what is your Age?");
    scanf("%d", &age);
    printf("what is your Department?");
    scanf("%s", &department);
    printf("what is your StudentId?");
    scanf("%s", &studentId);
    printf("what is your Section?");
    scanf("%s", &section);
    printf("what is your universityNname?");
    scanf("%s", &universityName);

    printf("      student details :    \n");
    printf("the student name is:%s \n",name);
    printf("the student age is:%d \n",age);
    printf("the student department is:%s \n",department);
    printf("the student id is:%s \n",studentId);
    printf("the student university name is:%s \n",universityName);
    return 0;
}