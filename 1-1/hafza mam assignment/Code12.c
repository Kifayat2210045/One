#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Input values into the array: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size; i++)
    {
        if(arr[i]==0)
        {
            for(int j = i; j < size; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[size-1] = 0;
        }
    }
    printf("final output:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
