#include<stdio.h>

int main()
{
    int size,index = 0;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d",&size);
    int arr[size],unique[size];
    printf("Input %d elements in the array :\n",size);
    
    for(int i = 0; i < size; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < size; i++)
    {
        int flag = 0;
        for(int j = 0; j < size; j++)
        {
            if(i != j)
            {
                if(arr[i]==arr[j])
                {
                    flag++;
                    break;
                }

            }
        }
        if(flag == 0)
        {
            unique[index] = arr[i];
            index++;
        }
    }
    printf("The unique elements found in the array are:\n");
    for(int i = 0; i < index; i++)
    {
        printf("%d ", unique[i]);
    }
    return 0;
}
