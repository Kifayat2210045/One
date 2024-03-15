#include <stdio.h>
int main()
{
    int count1 = 0, count2 = 0, k = 0;
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
        scanf("%s %d %d",students[i].name, &students[i].roll, &students[i].marks);
    }

    // Avg of all students
    for (int i = 0; i < tstu; i++)
    {
       count1 += students[i].marks;
    }
    printf("\nTotal Students Average Mark: %.2f\n",(float)count1 / tstu);

    //Avg of students who have A as a first letter in their name
    for (int i = 0; i < tstu; i++)
    {
        if (students[i].name[0] == 'A')
        {
            count2 += students[i].marks;
            k++;
        }
    }
    printf("\nSpecial Students Average Mark: %.2f\n",(float)count2 / k);
    return 0;
}
