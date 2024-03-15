#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("new.txt","r");

    char name[100];
    int i = 0;
    while (!feof(file))
    {
        name[i] = fgetc(file);
        printf("%c",name[i]);
        i++;
    }
    
    printf("\nNumber of character is %d",i);
    fclose(file);
}