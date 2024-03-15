#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[100];
    printf("Enter a sting: ");
    gets(arr1);
    int size = strlen(arr1);
    int arr2[26],x = 0;
    char arr3[26];
    for(char i = 'a', b = 'A'; i <= 'z', b<='Z'; i++,b++)
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if (i == arr1[j] || b == arr1[j])
            {
                count++;
                arr3[x] = arr1[j];
            }
        }
        arr2[x] = count;
        x++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(arr2[i] > 1)
        {
            printf("Frequency of character %c = ",arr3[i]);
            printf("%d\n",arr2[i]);
        }
        
    }
}
