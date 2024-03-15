//pointer to structure variable
#include <stdio.h>

struct student 
{
    int roll;
    int marks;
}; 

int main()
{
    struct student r = { 1,15};
    struct student *ptr = &r;
    printf("%d %d", ptr->roll, ptr -> marks);//ptr->roll is equivalent to (*ptr).roll
    
    return 0;
}
