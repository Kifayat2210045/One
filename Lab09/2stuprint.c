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
    } student1, student2;

    printf("Enter name: ");
    scanf("%s", student1.name);
    scanf("%s", student2.name);

    printf("Enter roll: ");
    scanf("%d", &student1.roll);
    scanf("%d", &student2.roll);

    printf("Enter dept: ");
    scanf("%s", student1.dept);
    scanf("%s", student2.dept);

    printf("Enter session: ");
    scanf("%d", &student1.session);
    scanf("%d", &student2.session);

    printf("Enter marks: ");
    scanf("%d", &student1.marks);
    scanf("%d", &student2.marks);

   
    printf("\nStudent Information:\n");
    printf("Name: %s, %s\n", student1.name, student2.name);
    printf("Roll: %d, %d\n", student1.roll, student2.roll);
    printf("Dept: %s, %s\n", student1.dept, student2.dept);
    printf("Session: %d, %d\n", student1.session, student2.session);
    printf("Marks: %d, %d\n", student1.marks, student2.marks);


    return 0;
}
