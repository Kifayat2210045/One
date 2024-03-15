//designated initialization 
#include <stdio.h>

struct student 
{
    int roll;
    int marks;
}; 

int main()
{
    struct student r = {.marks = 15, .roll = 1};//if we use .member we don't need to maintain serial
    printf("%d %d", r.roll, r.marks);
    
    return 0;
}
