#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of matrix:");
    scanf("%d",&size);
    int arr[size][size];
    printf("Input values into the array:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //sum of rows
    printf("sum of rows:\n");
    for(int i = 0; i < size; i++)
    {
        int rsum = 0;
        for(int j = 0; j < size; j++)
        {
            rsum += arr[i][j];
        }
        printf("%d. %d\n",i+1,rsum);
    }
    //sum of columns
    printf("sum of columns:\n");
    for(int i = 0; i < size; i++)
    {
        int csum = 0;
        for(int j = 0; j < size; j++)
        {
            csum += arr[j][i];
        }
        printf("%d. %d\n",i+1,csum);
    }
    return 0;
}
