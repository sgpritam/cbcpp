/*
Alice thinks he has mastered number theory. Now Bob gave him some integers to check whether they are prime or not. Alice wants to watch a movie. So he needs your help to finish this task quickly.

Input Format
First line contains an integral value 'n' denoting the number of test cases. Then n lines follows each containing an integral value 'm'.

Constraints
1<=n<=1000 1<=m<=2^63-1

Output Format
Print "YES" or "NO" (without quotes) corresponding to each number whether they are prime or not.

Sample Input
2
1
2

*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int         long long int
#define ld          long double
#define lop(i,a,b)  for(int i=a;i<b;i++)
#define rlop(i,b,a) for(int i=b-1;i>=a;i--)
#define endl        '\n'
#define pb          emplace_back
#define F           first
#define S           second
#define pii         pair<int,int>
#define vi          vector<int>
#define vpi         vector<pii>
#define mii         map<int,int>
#define si          set <int>
#define spi         set <pii>
#define usi         unordered_set<int>
#define que_max     priority_queue <int>
#define que_min     priority_queue <int,vi,greater<int>>
#define sz(x)       x.size()
#define all(p)      p.begin(),p.end()
#define mset(a,b,c) lop(i,0,c) a[i]=b
#define print(a,n)  lop(i,0,n) cout<<a[i]<<" "; cout<<endl
#define print1(a)   for(auto x:a) cout<<x<<" "; cout<<endl
#define bug(...)    __f(#__VA_ARGS__, __VA_ARGS__)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<pii, null_type, less<pii>, rb_tree_tag,
        tree_order_statistics_node_update> new_set;

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cerr << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

const int N=100005;
int a[N];

int mod;
inline int add(int x,int y){ x+= y; if(x>=mod) x-= mod; return x; }
inline int sub(int x,int y){ x-= y; if(x<0) x+= mod; return x; }
int mul(int a, int b)
{
    int res = 0;
    a %= mod;

    while (b)
    {
        if (b & 1)
            res = (res + a) % mod;
        a = (2 * a) % mod;

        b >>= 1;
    }

    return res;
}
inline int powr(int a,int b){
  int x= 1 % mod;
  while(b){
    if(b&1) x=mul(x, a);
    a= mul(a,a);
    b >>= 1;
  }
  return x; }
inline int inv(int a){ return powr(a,mod-2); }

bool check(int n)
{
     if(n==2 || n==3) return true;
     int k=50;
     mod=n;
     while(k--)
     {
          int x=rand()%min((n-1),(int)100) + 1;
          if(__gcd(x,n)!=1) return 0;
          int ans=powr(x,n-1);
          if(ans!=1) return false;
     }
     return true;
}
void solve()
{
     int n,m,k;
     cin>>n;
     if(n==1) cout<<"NO"<<endl;
     else
     {
          if(check(n)) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
     }
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt",  "w", stderr);
#endif
    int t; cin >> t;
    while (t--)  solve();
    return 0;
}
