#include<stdio.h>
#include<math.h>
int main()
{
	int N,i=0,j,n,sum=0;
	scanf("%d",&N);
	int k=N;
	n=N;
	//TO FIND NO OF DIGIT:
	while(n>0)
	{
		i++;
		n=n/10;
	}
	int arr[i];
	for(j=0;j<i;j++)
	{
		arr[j]=k%10;
		k=k/10;
	}
	i--;
	for(j=0;i>=0;j++)
	{
		sum=sum+arr[j]*pow(10,i);
		i--;
	}
	printf("THE REVERSED NUMBER IS %d",sum);
	if(n==sum)
	printf("EQUAL");
}
