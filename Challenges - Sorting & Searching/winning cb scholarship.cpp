#include<iostream>
#include<cstring>
using namespace std;
#define ll long long

bool fun(ll n,ll m,ll x,ll y ,int mid)
{
    return (mid)*x <= (n-mid)*y + m;
}
int binarySearch(ll n,ll m,ll x,ll y)
{
    ll ans=0,s=0,e=n;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(fun(n,m,x,y,mid))
        {
            s=mid+1;
            ans=mid;
        }
        else
        {
            e=mid-1;
        }

    }
    return ans;
}
int main() {
    int n=0,m,x,y;

	cin>>n>>m>>x>>y;

	cout<<binarySearch(n,m,x,y)<<endl;
	return 0;
}
