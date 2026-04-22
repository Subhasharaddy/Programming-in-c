#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int id;
    int age;
    char name[50];
    float grade;
};
int main(){
    struct student student1;
    student1.id=1;
    student1.age=18;
    student1.grade=85.5;
    strcpy(student1.name,"john Doe");
    // scanf("%s",student1.name);
    // snprintf(student1.name, sizeof(student1.name), "Hari");
    printf("Student id: %d\n",student1.id);
    printf("Student name: %s\n",student1.name);
    printf("Student grade: %.2f\n",student1.grade);
    printf("Student age: %d\n",student1.age);
    system("pause");
    return 0;
}
