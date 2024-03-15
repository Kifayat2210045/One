#include<stdio.h>

int main()
{
    
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    
    printf("Input values into the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the desired position to delete value:");
    int p;
    scanf("%d",&p);
    for(int i = p-1; i < size; i++)
    {
        arr[i] = arr[i+1];
    }
    printf("Final result: \n");
    for(int i = 0; i < size-1; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
