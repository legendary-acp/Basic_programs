#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n=5;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
				if((c==2||c==3||c==4)&&(r==1))
					printf(" ");
					else if((c==3||c==4)&&(r==2))
					printf(" ");
					else if((c==2||c==4)&&(r==3))
					printf(" ");
					else if((c==2||c==3)&&(r==4))
					printf(" ");
					else if((c==2||c==3||c==4)&&(r==5))
					printf(" ");
						else
			printf("*");
		}
		printf("\n");
	}
	getch();
}
