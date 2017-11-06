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
    int q,k;
    cin>>q;
    int b[q-1],c[n];
    while(q--)
    {
      cin>>b[q-1];
    }

  }
    return 0;
}
