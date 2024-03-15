#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("new.txt", "r");
    char name[100];
    int word = 1, ch = 0, i = 0;
    while (!feof(file))
    {
        char p = fgetc(file);
        name[i] = p;
        if (name[i] == ' ')
        {
            word++;
        }
        else
        {
            ch++;
        }
        i++;
    }
    printf("File is readed successfully\n");
    printf("%s\n", name);
    printf("Number of word is %d\nNumber of char is %d", word, ch);
    fclose(file);
}