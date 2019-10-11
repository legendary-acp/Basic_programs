#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ldb = long double;
using pa = pair < ll, ll >;
using vec = vector < ll >;
#define pb push_back
#define po pop_back
#define mp make_pair
#define mt make_tuple
#define F  first
#define S  second
#define f(i,x,n) for(ll i=x;i<n;i++) 
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))
#define all(c) c.begin(),c.end()
#define str string
#define edl "\n"
#define add insert
#define cot continue
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
const int MOD = 1e9 + 7, INF = INT_MAX, N = 1e5 + 10;
const double PI = acos(-1);
const ll LINF = LLONG_MAX;

ll q[N];
ll compute[N][100],n;

void buildSparseTable()
{
	memset(compute,0,sizeof(compute));
	f(i,0,n)
	{
		compute[i][0]=q[i];
	}
	for(ll j=1;ll(1<<j)<=n;j++)
	{
		for(ll i=0;(i+ll(1<<j)-1)<n;i++)
		{

			compute[i][j]=min(compute[i][j-1],compute[i+ll(1<<j-1)][j-1]);
		}
	}	
}
ll query(ll l,ll r)
{
	ll j=(ll)log2(r-l+1);

	return min(compute[l][j],compute[r-ll(1<<j)+1][j]);





}

int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  
  ll t;
  cin>>t;
  for(ll i=1;i<=t;i++)
  {	
  ll qu;	
  cin>>n>>qu;
  f(i,0,n)
  {
  	cin>>q[i];
  	// cout<<q[i]<<edl;
  }
  buildSparseTable();

  ll x,y;
 

  cout<<"Scenario #"<<i<<":"<<edl;
  f(i,0,qu)
  {
  	cin>>x>>y;
  	x--;
  	y--;
  	cout<<query(x,y)<<edl;
  }

  }


    




    cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 