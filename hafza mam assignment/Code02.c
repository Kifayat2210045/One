#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("Enter the number of values: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements = %d",sum);
}
