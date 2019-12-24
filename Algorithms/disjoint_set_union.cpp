#define _CRT_SECURE_NO_DEPRECATE
#include<bits/stdc++.h>
using namespace std;
#define SYNC std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const int MOD = 1e9+7;
const int INF = 1000111000111000111LL;
const int N = 1013;
int dsu[N];
int bulk[N];
int root(int i)
{
    while(dsu[i]!=i)
    {
        i = dsu[i];
        dsu[i]= dsu[dsu[i]];
    }
    return i;
}
void merge(int a,int b)
{
    if(bulk[root(a)]>=bulk[root(b)])
    {
        bulk[root(a)]+=bulk[root(b)];
        dsu[root(b)] = dsu[root(a)];
        
    }else
    {
        bulk[root(b)]+=bulk[root(a)];
        dsu[root(a)] = dsu[root(b)];
    }
    return;
}
void initialise(int n)
{
    for(int i=0;i<=n;i++)
    {
        dsu[i]=i;
        bulk[i]=1;
    }
    return;
}
int32_t main()
{
    
    
    return 0;
}
