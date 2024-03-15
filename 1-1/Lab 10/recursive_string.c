#include<stdio.h>
#include<string.h>
int reverse(char name[],int len)
{
    if (len < 0)
    {
        return 0;
    }
    printf("%c",name[len]);
    return reverse(name,len-1);
}

int main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);
    int len = strlen(name);
    reverse(name,len);
}