#include<stdio.h>

int main()
{
    int size,sum = 0;
    printf("Enter the size of a matrix: ");
    scanf("%d",&size);
    int arr[size][size];
    
    printf("Input values into the array:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
    printf("Given matrix:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%d ",arr[i][j]);
            if(j == size-1)
            {
                printf("\n");
            }
        }
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i+j == size-1)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum of right diagonal of the matrix is %d",sum);
}
