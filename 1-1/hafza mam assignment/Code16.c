#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    printf("Enter a sting: ");
    gets(arr);
    printf("reversed sting : ");
    for(int i = strlen(arr); i >= 0; i--)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
