#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n][3],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    int c,q,k;
    cin>>q;
    int b[q-1],c[n];
    while(q--),min=0;
    {
      cin>>b[q-1];
    }
    for(int j=0;j<(q-1);j++)
    {
      for(int k=0;k<n;k++)
      {
        c=a[i][0]+a[i][1]*b[j]+a[i][2]*b[j]*b[j]+a[i][3]*b[j]*b[j]*b[j];
        if(min==0)
        min=c;
        else if(c<min)
        min=c;
      }
      cout<<min;
      min=0;
    }
  }
    return 0;
}
