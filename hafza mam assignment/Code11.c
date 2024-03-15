#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Input values into the array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int gsum;
    printf("The given sum: ");
    scanf("%d",&gsum);
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[i] + arr[j] == gsum)
            {
                printf("Pair of elements can make the given sum by the value of index %d and %d",i,j);
                return 0;
            }
        }
    }
}
