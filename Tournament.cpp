#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  long int s=0,a[n],i=1,j;
  a[0]=0;
  for(int k=1;k<=n;k++)
  {
    cin>>a[k];
  }
  while (i<n) 
  {
    j=i+1;
    while (j<=n) 
    {
      s=abs(a[i]-a[j])+s;
      j++;
    }
    i++;
  }
  cout<<s;
}
