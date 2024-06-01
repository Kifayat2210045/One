#include<stdio.h>
int main()
{
    int test,q1,q2,q3,count = 0;
    scanf("%d",&test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d %d",&q1,&q2,&q3);
        if ((q1+q2+q3)>1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    
}