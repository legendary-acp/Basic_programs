#include<stdio.h>
#include<math.h>
int main()
{
       int k,m,o=0,a,j,i=0;
         printf("enter\n");
	scanf("%d",&a);
		while(a!=0)
{
	k=a%2;
	a/=2;
	 j+=k*pow(10,i);
	i++;
}
printf("%d\n",j);
return 0;
}
