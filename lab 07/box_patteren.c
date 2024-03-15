#include <stdio.h>

int main()
{
    int length;
    printf("Enter the size of square: ");
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i == 0 || i == length - 1 || j == 0 || j == length - 1 || i == j || i + j == length - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
