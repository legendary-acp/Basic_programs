#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{	
		char s1[100],s2[100];
		cin>>s1>>s2;
		cout<<"1";
		long int i=0,min=0,max=0;
		while(i<strlen(s1))
		{
			if(s1[i]=='?'||s2[i]=='?')
			max++;
			else
			{
				max++;
				min++;
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}
