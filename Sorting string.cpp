#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	char s[10];
	cin>>s;
	int n=strlen(s);
	sort(s,s+n);
	cout<<s;
}
