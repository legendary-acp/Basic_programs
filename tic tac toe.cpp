#include<bits/stdc++.h>
using namespace std;
char a[9]={'1','2','3','4','5','6','7','8','9'};
int i=0;
int wincheck()
{
	if(a[0]==a[1]&&a[1]==a[2])
	return 1;
	else if(a[3]==a[4]&&a[4]==a[5])
	return 1;
	else if(a[6]==a[7]&&a[7]==a[8])
	return 1;
	else if(a[0]==a[3]&&a[3]==a[6])
	return 1;
	else if(a[1]==a[4]&&a[4]==a[7])
	return 1;
	else if(a[2]==a[5]&&a[5]==a[8])
	return 1;
	else if(a[0]==a[4]&&a[4]==a[8])
	return 1;
	else if(a[1]==a[4]&&a[4]==a[6])
	return 1;
	else
	return 0;
}
void board()
{	
	cout<<"		|     |    \n";
	cout<<"	     "<<a[0]<<"	|  "<<a[1]<<"  | "<<a[2]<<endl;
	cout<<"	   -----|-----|----\n";
	cout<<"		|     |    \n";
	cout<<"	     "<<a[3]<<"	|  "<<a[4]<<"  | "<<a[5]<<endl;
	cout<<"	   -----|-----|----\n";
	cout<<"		|     |    \n";
	cout<<"	     "<<a[6]<<"	|  "<<a[7]<<"  | "<<a[8]<<endl;
	cout<<"	   	|     |    \n\n\n";
}
int main()
{
	cout<<"Welcome to Tic Tac Toe Version 1.0\n";
	board();
	int turn=0,j;
	char s[2];
	s[0]='X';
	s[1]='O';
	while(turn<9&&i==0)
	{
		j=turn%2;
		int b;
		cout<<"Player "<<j+1<<endl<<"Enter a number of position which you want to choose:";		
		cin>>b;
		a[b-1]=s[j];
		board();
		i=wincheck();
		turn++;
	}
	if(i==0)
	cout<<"Game is Draw\n";
	else
	cout<<"Player "<<j+1<<" wins\n";
}

