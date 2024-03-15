#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string of words: ");
    gets(str);
    int count = 0,flag = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                flag++;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
    }
    printf("String length until letter repeat = %d", count);
}