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
    } students[61];

    int tstu = 61;
    //input
    for (int i = 0; i < tstu; i++)
    {
        printf("Enter name, roll, dept, session, and marks for student %d: ", i + 1);
        scanf("%s %d %s %d %d",
              students[i].name, &students[i].roll, students[i].dept, &students[i].session, &students[i].marks);
    }
    //output
    printf("\nStudent Information:\n");
    for (int i = 0; i < tstu; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Roll: %d\n", students[i].roll);
        printf("Dept: %s\n", students[i].dept);
        printf("Session: %d\n", students[i].session);
        printf("Marks: %d\n", students[i].marks);
        printf("\n");
    }

    return 0;
}
