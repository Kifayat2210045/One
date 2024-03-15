#include<stdio.h>
int main()
{
    int size,count = 0;
    printf("Enter the size of string: ");
    scanf("%d",&size);
    char arr1[size],arr2[size];

    printf("Input the first string: \n");
    scanf("%s",&arr1);

    printf("Input the second string: \n");
    scanf("%s",&arr2);
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr1[i] == arr2[j])
            {
                count++;
                break;
            }
        }
    }
    if(count == size)
    {
        printf("%s and %s are Anagram.",arr1,arr2);
    }
    else
    {
        printf("They are not Anagram.");
    }
    
}
