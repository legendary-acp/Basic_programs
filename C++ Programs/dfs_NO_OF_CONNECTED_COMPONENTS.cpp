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
bool visit[500001];
vector<ll>adj[500001];
ll n,m;

void dfs(ll v)
{
  if(visit[v])
    return;
  visit[v]=true;
  for (auto u: adj[v]) {
      dfs(u);
  }
}   

int main() 
{

 fast();
  
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w",stdout);
  #endif
  memset(visit,0,sizeof(visit));
  cin >> n >> m;
  ll x,y;
  f(i,0,m)
  {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
  }
  ll c=1;
  dfs(1);
  f(i,1,n+1)
  {
    if(!visit[i])
    {
        c++;
        dfs(i);

    }
  }
  cout<<max(0ll,c-1);
 
  cerr << "Time taken: " << int((clock() * 1000.) / CLOCKS_PER_SEC) << "ms\n";
    return 0;
}
 