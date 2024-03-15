#include<stdio.h>

int main()
{
    int size,count = 0;
    printf("Input the number of elements to be stored in the array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Input %d elements in the array :\n",size);
    for(int i = 0; i < size; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            if(i != j)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
    }
    printf("Total number of duplicate elements found in the array: %d", count);
}
