#include<stdio.h>

int main()
{
    int size,max,min;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&size);
    printf("Input 3 elements in the array :\n");
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        int flag = 0,mark = 0;
        for(int j = 0; j < size; j++)
        {
            if(arr[i] < arr[j])
            {
                flag++;
                break;
            }
        }
        for(int k = 0; k < size; k++)
        {
            if(arr[i] > arr[k])
            {
                mark++;
                break;
            }
        }
        if(flag == 0)
        {
            printf("Maximum element is = %d\n",arr[i]);
        }
        if(mark == 0)
        {
            printf("Minimum element is = %d\n",arr[i]);
        }
    }

    return 0;
}
