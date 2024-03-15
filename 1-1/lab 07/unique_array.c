#include <stdio.h>
int main()
{
    int size, count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                count++;
            }
        }
    }
    printf("Unique array: \n");
    for (int i = 0; i <= (size - count); i++)
    {
        printf("%d", arr[i]);
    }
}