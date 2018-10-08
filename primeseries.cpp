# include<stdio.h>
int main()
{
	int n,i;
	printf("enter number to generate prime series	");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d*",i);
			n=n/i;
			i--;
		}
	}
}
