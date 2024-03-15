#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int vcount = 0, scount = 0;
    printf("Enter a sting: ");
    gets(arr);
    for(int i = 0; i < strlen(arr); i++)
    {
        if((arr[i] == 'a') || (arr[i] == 'e') || (arr[i] == 'i') || (arr[i] == 'o') || (arr[i] == 'u') || (arr[i] == 'A') || (arr[i] == 'E') || (arr[i] == 'I') || (arr[i] == 'O') || (arr[i] == 'U'))
        {
            vcount++;
        }
        if(arr[i] == ' ')
        {
            scount++;
        }
    }
    printf("Total vowel: %d\n", vcount);
    printf("Total consonant: %d", strlen(arr)-(vcount+scount));
    return 0;
}
