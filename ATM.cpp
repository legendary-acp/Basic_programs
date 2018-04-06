#include<iostream>
#include<sting.h>
using namespace std;
int main()
{ float amount,wm,balance;
cout<<"\n Enter the amount to be withdrawed(in US$ or in rupees only ):";
cin>>wm;
cout<<"\nEnter the amount balance in your account(in US $ or in rupees only):";
cin>>amount;
if(wm/5==0&&wm<amount)
{balance=amount-wm-0.50;}
else
balance=amount;
cout<<"\n Amount balance left in your account:"<<balance;
return 0;
}

