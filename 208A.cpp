#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[200];
    cin>>a;
    int i=0,flag=0,flag2=1;
    while(i<strlen(a))
    {
        if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
        {
            i+=3;
            flag=1;
        }
	 else
        {
            cout<<a[i];
            i++;
            flag=0;
	    flag2=0;
        }	
	if(flag==1&&flag2==0)
        {
    	    cout<<" ";
	    flag=0;
        }
    }
}
