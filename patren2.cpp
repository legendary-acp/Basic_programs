# include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("enter number ");
	scanf("%d",&n);	
	for(a=1;a<=n;a++)
    {
    	for(b=n-a;b>=0;b--)
    	printf(" ");
    	for(b=a;b>0;b--)
    	printf("%d",a);
    	printf("\n");
	}
}
