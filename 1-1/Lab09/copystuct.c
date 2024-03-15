#include <stdio.h>

int main()
{

    struct student
    {
        char name[50];
        int roll;
        char dept[100];
        int session;
        int marks;
    } stu1[61],stu2[61];

    int tstu = 1;
    //taking input
    for (int i = 0; i < tstu; i++)
    {
        printf("Enter name, roll, dept, session, and marks for student %d: ", i + 1);
        scanf("%s %d %s %d %d",
              stu1[i].name, &stu1[i].roll, stu1[i].dept, &stu1[i].session, &stu1[i].marks);
    }
    //copying
    for (int i = 0; i < tstu; i++)
    {
        stu2[i] = stu1[i]; 
    }
    //output
    printf("\nStudent Information:\n");
    for (int i = 0; i < tstu; i++)
    {
        printf("Name: original[%d] %s, copy[%d] %s\n", i+1, stu1[i].name, i+1, stu2[i].name);
        printf("Roll: original[%d] %d, copy[%d] %d\n", i+1, stu1[i].roll, i+1, stu2[i].roll);
        printf("Dept: original[%d] %s, copy[%d] %s\n", i+1, stu1[i].dept, i+1, stu2[i].dept);
        printf("Session: original[%d] %d, copy[%d] %d\n", i+1, stu1[i].session, i+1, stu2[i].session);
        printf("Marks: original[%d] %d, copy[%d] %d\n", i+1, stu1[i].marks, i+1, stu2[i].marks);
        printf("\n");
    }

    return 0;
}
