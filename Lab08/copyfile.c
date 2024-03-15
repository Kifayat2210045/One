#include <stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    file = fopen("new.txt", "r");
    char name[100];
    int i = 0;
    while (!feof(file))
    {
        char ch = fgetc(file);
        name[i] = ch;
        i++;
    }
    fclose(file);
    FILE *file2;
    file2 = fopen("copy.txt", "w");
    int len = strlen(name);
    for (int j = 0; j < len; j++)
    {
        fputc(name[j], file);
    }
    printf("Content is copied successfully");
    fclose(file2);
}