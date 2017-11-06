#include<iostream>
using namespace std;
int main()
{ float amount,wm,balance;
cout<<"\n Enter the amount to be withdrawed(in US$):";
cin>>wm;
cout<<"\nEnter the amount balance in your account(in US $):";
cin>>amount;
if(wm/5==0&&wm<amount)
{balance=amount-wm-0.50;}
else
balance=amount;
cout<<"\n Amount balance left in your account:"<<balance;
return 0;
}

