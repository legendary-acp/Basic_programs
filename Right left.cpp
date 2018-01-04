#include<iostream>
using namespace std;
int main()
{
   long int n,q;
   cin>>n>>q;
   long int a[n],i=0;
   while(i<n)
   {
       cin>>a[i];
       i++;
   }
   while(q--)
   {
       long int x,y,flag=0,count=0,j;
       char d;
       cin>>x>>y>>d;
       i=0;j=a[x];
       while(i<n)
       {
           if(y==a[i])
           flag=1;
           if(flag==1&&j!=y)
           {
               if(d=='R')
               while(j!=y)
               {
                   x=(x+1)%n;
                   j=a[x];
                   count++;
               }
               else
               while(j!=y)
               {
                   x=(x-1+n)%n;
                   j=a[x];
                   count++;
               }
               i=n;
           }
           i++;
       }
       if(flag==1)
       cout<<count<<endl;
       else
       cout<<"-1\n";
   }
   return 0;
}
