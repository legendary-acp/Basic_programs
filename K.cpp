#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n,k;
		cin>>n>>k;
		long int a[n],i=0,sum=0,j=1,max=0;
		while(i<n)
		{
			cin>>a[i];
			i++;
		}
		i=0;
		while(j<=k)
		{
			if(max<sum)
			max=sum;				
			sum+=a[i];			
			if(i==n-1)
			{
				i=0;
				j++;
			}
			else
			i++;
		}
		cout<<max<<endl;
	}
}

		

		
