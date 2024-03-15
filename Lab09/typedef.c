#include <stdio.h>

typedef struct student 
{
    int roll;
    int marks;
}pupil; 

int main()
{
    pupil s1;
    printf("Enter roll and marks: ");
    scanf("%d %d",&s1.roll,&s1.marks);
    printf("Roll: %d\nMarks: %d",s1.roll,s1.marks);
    return 0;
}
