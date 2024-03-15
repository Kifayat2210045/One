#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[1000],arr2[1000],merge[2000];
    printf("Enter first string: ");
    gets(arr1);
    printf("Enter second string: ");
    gets(arr2);
    int size = strlen(arr1) + strlen(arr2),x = 0;
    printf("Final result:\n");
    for(int i = 0; i <= size; i++)
    {
        if(i < strlen(arr1))
        {
            merge[i] = arr1[i];
        }
        if(arr1[i] == '\0')
        {
            merge[i] = ' ';
        }
        if (i > strlen(arr1))
        {
            
            merge[i] = arr2[x];
            x++;
        }
        printf("%c", merge[i]);
    }
    
    return 0;
} 
