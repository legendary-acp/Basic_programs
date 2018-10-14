/*Program to find largest product of factors of a number*/
#include<stdio.h>
int main()
{
    int T,b;
	scanf("%d",&T);
    for(b=1;b<=T;b++)
    {
        int n,z=0,y=0,j=0,sum=0;
        int f[40000],i=0,k;
        scanf("%d",&n);
        
        // TO FIND NUMBER OF FACTORS:
        for(j=1;j<n;j++)
            if(n%j==0)
            {
                f[i]=j;
                i++;
            }
        //TO SOLVE MAIN PURPOSE :
        int product=-1;
        for(j=0;j<i;j++)
            for(k=0;k<i;k++)
                for(z=0;z<i;z++)
                    for(y=0;y<i;y++)
                    {
                        sum=f[j]+f[k]+f[z]+f[y];
                        if(sum==n)
                        {
                            if(f[j]*f[k]*f[z]*f[y]>product)
                            product=f[j]*f[k]*f[z]*f[y];
                        }
                    }
        printf("%d\n",product);            
    }
    return 0;
}
