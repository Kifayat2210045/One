#include<stdio.h>

int main()
{
    int size1, size2;

    printf("Input the number of elements to be stored in the first array :");
    scanf("%d",&size1);
    int arr1[size1];
    
    //taking input into arry2
    printf("Input %d elements in the array :\n",size1);
    for(int i = 0; i < size1; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr1[i]);
    }
    
    // taking input into arry2
    printf("Input the number of elements to be stored in the second array :");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Input %d elements in the array :\n",size2);
    for(int i = 0; i < size2; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr2[i]);
    }
    int combined = size1+size2;
    int merge[combined];
    
    //merging array
    for(int i = 0; i < combined; i++)
    {
        if(i < size1)
        {
            merge[i] = arr1[i];
        }
        else if(i >= size1)
        {
            merge[i] = arr2[i-size2];
        }
    }
    
    //descending order
    for(int i = 0; i < combined; i++)
    {
        
        for(int j = i; j < combined; j++)
        {
            if(merge[i] < merge[j])
            {
                
                int temp = merge[i];
                merge[i] = merge[j];
                merge[j] = temp;
            }
        }
    }
    for(int i = 0; i < combined; i++)
    {
        printf("%d ", merge[i]);
    }
}
