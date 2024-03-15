#include<stdio.h>
int main()
{
    int tcase,n,k;
    scanf("%d",&tcase);
    for (int i = 0; i < tcase; i++)
    {
        scanf("%d %d",&n,&k);
        int arr[n],count = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[j]);
        }
        for (int k = 0; k < n; k++)
        {
            if (arr[k] < arr[k+1])
            {
                int org = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = org;
                count++;
            }
        }
        printf("%d\n",count);
        if (count <= k) printf("YES\n");
        else printf("NO\n");
    }
    
}