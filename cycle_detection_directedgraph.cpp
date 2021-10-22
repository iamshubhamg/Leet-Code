#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

//#pragma GCC optimize('O2') 
#define ll long long 
#define vll vector<ll>
#define vi vector<int>
#define tin tuple<ll,ll,ll>
#define mll map<ll,ll>
#define pi pair<ll,ll>
#define vp vector<pi>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mt make_tuple
#define all(x) (x).begin(),(x).end()
#define rall(x) x.rbegin(), x.rend()
#define watch(x) cout << (#x) << ' is ' << (x) << endl
#define f(i,x,z) for(ll i=x;i<z;i++)
#define rf(i,x,z) for(ll i=x-1;i>=z;i--)
#define deb(x) cout<<'DEBUG------> '<<x<<endl
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define clr(x) memset(x, 0, sizeof(x)) 
#define fa(i,vect) for(auto i : vect)
#define fr(i,vect) for(VI :: reverse_iterator i = vect.rbegin(); i != vect.rend(); i++)
#define s(a) (a).size()
#define mod 1000000007
// get<0>(v[i])
// unordered_map<string, int> umap;
// s.insert(0);multiset<int> ms;
//auto it = s.lower_bound(a);
//for (auto me : m) {
//std::vector<ll>::iterator it; 
//it = std::find (v.begin(), v.end(), ser);
//v.erase(v.begin() +n);
# define INF 0x3f3f3f3f 
const int MAX = 1e3 + 7; 
////////////////////////////////////////////////////////////////////////////////////////////

ll power(ll base,ll por)
{
  ll res=1;
   while(por>1){
      if(por%2==1)
      {
         res*=base;
         por--;
      }
      por/=2;
      base*=base;
   }
   res*=base;
   return res;
}

ll mo(ll a, ll b) {
     ll c = a % b;
     return (c < 0) ? c + b : c;
  }


long long gcd(long long  a, long long  b)
{
   if (b == 0)
     return a;
     return gcd(b, a % b);
}

long long lcm(ll a, ll b)
{
      return (a / gcd(a, b)) * b;
}
 ll dtob (ll a)
{  ll r=1;
   while((a&r)==0)r*=2;
   return r;
}
bool iscycle(int src,vector<vector<int>> &adj,vector<bool> &visited, vector<int> &stack)
{
    stack[src]=true;
    if(!visited[src])
    {
        visited[src]=true;
        for(auto i: adj[src])
        {
            if(!visited[i] && iscycle(i,adj,visited,stack))
            {
                return true;
            }
            if(stack[i])
            {
                return true;
            }
        }
    }
    stack[src]=false;
    return false;
}


bool isGoogles = 0;


/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
//   freopen('a.txt', 'r', stdin); freopen('a_out.txt', 'w', stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int cnt=0;
    cin>>n>>m;
    vector<vector<int>> adj(n);

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    bool cycle=false;
    vector<int> stack(n,0);
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(!visited[i] and iscycle(i,adj,visited,stack))
        {
            cycle=true;
        }
    }
    if(cycle)
    {
        cout<<"Cycle is present\n";
    }
    else{
        cout<<"It is not present\n";
    }
   return 0;
}