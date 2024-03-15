//Initializing and accessing the structure memberes
#include <stdio.h>

struct student 
{
    int roll;
    int marks;
}a;//for line 14

int main()
{
    struct student x = {21, 13};// roll = 21, marks = 13
    //in a variable we can add input of specific member
    a.roll = 4;
    printf("%d",a.roll);
    return 0;
}
