#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n=7;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=n;c++)
		{
				if((c==1||c==5||c==6||c==7)&&(r==1))
					printf(" ");
					else if((c==2||c==3||c==4||c==6||c==7)&&(r==2))
					printf(" ");
					else if((c==2||c==3||c==4||c==6||c==7)&&(r==3))
					printf(" ");
					else if((c==2||c==4||c==6||c==7)&&(r==4))
					printf(" ");
					else if((c==2||c==3||c==6||c==7)&&(r==5))
						printf(" ");
						else if((c==1||c==6||c==7)&&(r==6))
							printf(" ");
							else if((c==1||c==2||c==3||c==4||c==5||c==7)&&(r==7))
							printf(" ");
								else if((c==1||c==2||c==3||c==4||c==5||c==6)&&(r==8))
					printf(" ");
						else
			printf("*");
		}
		printf("\n");
	}
	getch();
}
