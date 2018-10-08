#include<stdio.h>
 int fact(int x);
  
     int fact(int x)
	{  int k=1;
		if(x==0)
	       {
		   	return(k);
		   }
		else
		{
		
			k=x*fact(x-1);
		}
	}
	int main()
	{
		int n,a,c;
		printf("enter number ");
		scanf("%d",&n);
		a=fact(n);
		printf("%d",a);
	}

