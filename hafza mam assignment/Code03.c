#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr1[i]);
        
    }
    
    printf("1st Array: ");
    
    for(int i = 0; i < size; i++)
    {
        printf("%d ",arr1[i]);
        arr2[i] = arr1[i];
    }
    
    printf("\n2nd Array: ");
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr2[i]);
    }
}
