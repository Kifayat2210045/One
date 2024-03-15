#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age, roll, mark, num;
    file = fopen("student info.txt","r");

    if (file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opened.\n");
        // printf("Enter number of student: ");
        // scanf("%d",&num);

        // for (int i = 0; i < num; i++)
        // {
        //     printf("Enter the name of student: ");
        //     scanf("%s",name);
        //     printf("Enter the age: ");
        //     scanf("%d",&age);
        //     printf("Enter roll: ");
        //     scanf("%d",&roll);
        //     printf("Enter mark: ");
        //     scanf("%d",&mark);
        //     fprintf(file,"name: %s\nage: %d\nroll: %d\nmark: %d\n",name,age,roll,mark);
        // }
        // printf("\n");
        while (!feof(file))
        {
            fscanf(file,"%s%d%d%d",name,&age,&roll,&mark);
            printf("name: %s\nage: %d\nroll: %d\nmark: %d\n",name,age,roll,mark);
        }
        fclose(file);
    }
    
}