#include<stdio.h>

int main()
{
    char arr[100];
    printf("Input a string: ");
    gets(arr);
    int count = 0;
    int i = 0;
    while(arr[i] != '\0')
    {
        count++;
        i++;
    }
    printf("Length of the sting is: %d", count);
    
}
