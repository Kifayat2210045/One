#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("Enter a string: ");
    gets(arr);
    printf("Reverse: ");
    for(int i = strlen(arr); i >= 0; i--)
    {
        char *p = &arr[i];
        printf("%c",*p);
    }
    
    return 0;
}
