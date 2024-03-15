#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("new.txt","r");
    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File is opened.\n");
        while (!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        fclose(file);
    }
}