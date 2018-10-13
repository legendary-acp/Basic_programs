#include <bits/stdc++.h>
using namespace std;
int main() 
{
 int l,remaining,b;
 printf(" \t \t \t Game Game Game \n \t \t  Rules: \n  \t \t 1.) There are 21 balls \n \t \t 2.) First you pick then computer will pick \n  \t \t3.) The last one who picks up last ball will loose \n");
 for(int i=1;i<=4;i++)
 {
 	printf("Choose: \n");
 	scanf("%d",&l);
 	b=5-l;
 		if(l>=5)
 	{
 		printf("You entered wrong input \n");
 		break;
	 }
 	printf("Computer Chooses: %d  \n",b);
 
 }
 printf("Remaining 1 you loose");
 return 0;
}
		
		
