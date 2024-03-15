#include<stdio.h>
int main()
{
    int cv,ce,cs,fv,fe,fs;
    scanf("%d %d %d %d %d %d",&cv,&ce,&cs,&fv,&fe,&fs);

    int pointc,pointf;
    pointc = cv*3 + ce*1;
    pointf = fv*3 + fe*1;

    if (pointc > pointf)
    {
        printf("C\n");
    }
    else if (pointf > pointc)
    {
        printf("F\n");
    }
    else if(pointc == pointf)
    {
        if (cs > fs)
        {
            printf("C\n");
        }
        else if (fs > cs)
        {
            printf("F\n");
        }
        else
        {
            printf("=\n");
        }    
    }
}