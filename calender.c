#include<stdio.h>
int year, month,year,i;
int main()
{
    printf("Enter the Month and year\n");
    scanf("%d && %d",&month,&year);
    prinf("Dates in month are:");
    if(year%4==0)
    {
        if(month==1||3||5||7||8||10||12)
        {
            for(i=1;i<=31;i++)
            {
                printf("%d\n", i);
            }
        }
        if(month==2)
        {
            for(i=1;i<=28;i++)
            {
                printf("%d\n",i);
            }
        }
        else
        {
            for(i=1;i<=30;i++)
            {
                printf("%d\n",i);
            }
        }
        }
        else
        {
            if(month==1||3||5||7||8||10||12)
        {
            for(i=1;i<=31;i++)
            {
                printf("%d\n", i);
            }
        }
        if(month==2)
        {
            for(i=1;i<=27;i++)
            {
                printf("%d\n",i);
            }
        }
        else
        {
            for(i=1;i<=30;i++)
            {
                printf("%d\n",i);
            }
        }
    }
return 0;
}
