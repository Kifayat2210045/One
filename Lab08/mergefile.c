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
    file2 = fopen("copy.txt", "r");
    char ful[100];
    int j = 0;
    while (!feof(file2))
    {
        ful[j] = fgetc(file2);
        j++;
    }
    fclose(file2);
    FILE *file3 = fopen("merge.txt", "w");
    int l = strlen(name);
    int o = strlen(ful);
    for (int p = 0; p < l; p++)
    {
        fputc(name[p], file3);
    }
    for (int p = 0; p < o; p++)
    {
        fputc(ful[p], file3);
    }
    fclose(file3);
}