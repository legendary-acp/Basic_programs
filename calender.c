#include<stdio.h>

int main()
{
int  month,year,i;
    printf("Enter the month and year\n");
    scanf("%d ",&month,&year);
    
    printf("Dates in month are: \n");
    if(year%4==0)
    {
        if(month==1||3||5||7||8||10||12)
        {
            for(i=1;i<=31;i++)
            {
                printf("%d\n", i);
            }
        
        if(month==2)
        {
            for(i=1;i<=29;i++)
            {
                printf("%d\n",i);
            }
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
        
        if(month==2)
        {
            for(i=1;i<=28;i++)
            {
                printf("%d\n",i);
            }
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
