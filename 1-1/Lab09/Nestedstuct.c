#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float gpa;
    struct
    {
        int marks[3]; // Assuming 3 subjects
    } grades;
};

int main()
{
    struct Student s = {1, "Rabeya", 3.8, {80, 90, 75}};
    
    printf("Student ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("GPA: %.2f\n", s.gpa);
    printf("Subject 1 Mark: %d\n", s.grades.marks[0]);
    return 0;
}
