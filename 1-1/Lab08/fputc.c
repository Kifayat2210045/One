#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    file = fopen("new.txt","w");
    char name[100];
    fgets(name, sizeof(name),file);

    int len = strlen(name);
    for(int i = 0; i < len; i++)
    {
        fputc(name[i],file);
    }
    printf("File is written successfully");
    fclose(file);
}