#include <stdio.h>
int main()
{

    struct student
    {
        char name[50];
        int roll;
        int marks;
    } students[100];

    int tstu = 5;
    // input
    for (int i = 0; i < tstu; i++)
    {
        printf("Enter name, roll and marks for student %d: ", i + 1);
        scanf("%s %d %d",
              students[i].name, &students[i].roll, &students[i].marks);
    }
    // output
    printf("\nStudent Information:\n");
    for (int i = 0; i < tstu; i++)
    {
        if (students[i].marks >= 80 && students[i].marks <= 100)
        {
            printf("Name: %s\n", students[i].name);
            printf("Roll: %d\n", students[i].roll);
            printf("Marks: %d\n", students[i].marks);
            printf("\n");
        }
    }

    return 0;
}
