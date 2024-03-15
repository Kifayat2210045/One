#include <stdio.h>
int main()
{
    FILE *file;
    file = fopen("new.txt", "w");
    if (file == NULL)
    {
        printf("File doesn't found.");
    }
    else
    {
        fprintf(file, "Hello, this is a sample text.");
        fclose(file);
    }
    file = fopen("new.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
    }
    else
    {

        char word[100];
        if (fgets(word, sizeof(word), file) != NULL)
        {
            printf("Read from file: \n%s", word);
        }
        else
        {
            printf("Error reading from file.\n");
        }
        fclose(file);
    }
    return 0;
}