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
    for(char i = 'a', b = 'A'; i <= 'z', b<='Z'; i++,b++)//Capital and smaller letter
    {
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if (i == arr1[j] || b == arr1[j])// if duplicate found
            {
                count++;
                arr3[x] = arr1[j];// storing the letter in arr3
            }
        }
        arr2[x] = count;// storing the frequency
        x++;
    }
    printf("Repeated Characters:\n");
    for(int i = 0; i < 26; i++)
    {
        if(arr2[i] > 1)
        {
            printf("%c ",arr3[i]);
        }
        
    }
}
