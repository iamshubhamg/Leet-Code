//    ĦΔŞŦΔ ŁΔ VƗŞŦΔ ΔŁŴΔ¥Ş ΔŇĐ ₣ØŘ€V€Ř

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>

#define ll long long
#define dd double
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vb vector<bool>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define vs vector<string>
#define mll map<ll,ll>
#define mint map<int,int>
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define B(a) a.begin()
#define E(a) a.end()
#define For(i,a,b) for(ll i=a;i<b;i++)
#define Forr(i,a,b) for(ll i=a;i>=b;i--)
#define Itr(it,a) for(auto it=a.begin();it!=a.end();it++)
#define F first
#define S second
#define tup3 tuple<ll,ll,ll>
#define tup(ind,a) get<ind>(a)
#define tern(x,y,z) ((x)?y:z)
#define M_P make_pair
#define P_B push_back
#define addt(x,y,z) P_B(make_tuple(x,y,z))
#define add(x,y) P_B(M_P(x,y))
#define sz(a) ((long long)(a).size())
#define till(n) fixed<<setprecision(n)
#define endd "\n"

const int mod = 1e9 + 7;
const ll INFL = LLONG_MAX;
const int INFI = INT_MAX;

using namespace std;

class Solution
{
public:
    int maxArea(vector<int>& a)
    {
        int ans = 0;

        int srt = 0, en = sz(a) - 1;

        while(srt < en)
        {
            ans = max(ans, (en - srt) * min(a[srt], a[en]));

            if(a[srt] <= a[en])
                srt++;

            else
                en--;

        }

        return ans;

    }
};
