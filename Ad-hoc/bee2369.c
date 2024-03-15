#include<stdio.h>
int main()
{
    int water,bill;
    scanf("%d",&water);

    if(water >= 0 && water <= 10)
    {
        bill = 7;
    }
    else if (water >= 11 && water <= 30)
    {
        bill = 7;
        for(int i = 11; i <= water; i++)
        {
            bill++;
        }
    }
    else if (water >= 31 && water <= 100)
    {
        bill = 7+20;
        for(int i = 31; i <= water; i++)
        {
            bill+=2;
        }
    }
    else 
    {
        bill = 7+20+140;
        for(int i = 101; i <= water; i++)
        {
            bill+=5;
        }
    }
    printf("%d\n",bill);
}