#include<stdio.h>
#include<string.h>

int main()
{
    FILE *file = fopen("new.txt","w");
    char ch[20] = "Hello everyone";
    int len = strlen(ch);
    if (file == NULL)
    {
        printf("File doesn't exist\n");
    }
    else
    {
        printf("File opened\n");
        for (int i = 0; i < len; i++)
        {
            fputc(ch[i],file);
        }
    }
    printf("write done\n");
    fclose(file);
    
    FILE *read = fopen("new.txt","r");
    char lt;
    if (file == NULL)
    {
        printf("NO file");
    }
    else
    {
        printf("Ready to read:\n");
        while (!feof(read))
        {
            lt = fgetc(read);
            printf("%c",lt);
        }
        
    }
    fclose(read);


}