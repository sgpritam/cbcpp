#include<iostream>
using namespace std;
#define ll long long
#include<cstring>


int main() {

    int t;  cin>>t;
    while(t--)
{   // yaha pr prefixsum hi frequency array  hai
    ll n,arr[1000005],prefixsum[1000005];  cin>>n;

    // frequency array ko intialise kr diya with zero
    memset(prefixsum,0,sizeof(prefixsum));
    prefixsum[0]++;

    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum = (sum + arr[i])%n;
        sum=sum %n;
        sum=(sum+n)%n;
        prefixsum[sum]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll myno=prefixsum[i];
        ans=ans + (myno)*(myno-1)/2;
    }
    cout<<ans<<endl;
 }
}
